#include <unistd.h>
#include <string.h>
#include <stdio.h>

int JS_Putstr(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        write(1, &str[len], 1);
        len++;
    }
    write(1, "\n", 1);
}

int main(void)
{
    char *JSstr;

    JSstr = "Saraiva";
    JS_Putstr(JSstr);
}