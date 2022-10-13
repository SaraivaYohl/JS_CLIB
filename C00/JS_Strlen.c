#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

unsigned int JS_Strlen(char *str)
{
    int len;

    len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return(len);
}

int main(void)
{
    char *str;
    int len;

    str = "hit";
    len = JS_Strlen(str);
    printf("%d \n", len);
}