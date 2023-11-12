#include <stdio.h>

int main(void)
{
    puts("ASCII alphabets");
    for(int i = 65; i <= 90; i++)
    {
        printf("%c ", i);
    }
    puts("");
    puts("Decimal Values");
    for(int i = 65; i <= 90; i++)
    {
        printf("%d ", i);
    }
    puts("");
    puts("Octal Values");
    for(char i = 'A'; i <= 'Z'; i++)
    {
        printf("%o ", i);
    }
    puts("");
    puts("Hex values");
    for(char i = 'A'; i <= 'Z'; i++)
    {
        printf("%x ", i);
    }
    puts("");
}
