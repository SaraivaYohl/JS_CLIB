#include <unistd.h>

char JS_Putchar(char c)
{
    write(1, &c, 1);
    write(1, "\n", 1);
}
int main(void)
{
    JS_Putchar('a');
}