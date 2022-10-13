#include <unistd.h>

int JS_Putchar(int c)
{
    write(1, &c, 1);
}

int main(void)
{
    JS_Putchar('a');
}