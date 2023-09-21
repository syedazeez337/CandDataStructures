#include <stdio.h>

int main(void)
{
    /*
    if(true) statement is executed; -> programme exits
    if(false) statement; -> looks for another if/ else if/ else
    else if(true/false) statement;
    else statement; -> executes when every if/ else if is false
    */
    int num = 0;
    printf("%s", "Enter the marks: ");
    scanf("%d", &num);
    
    if(num >= 90)
    {
        puts("You got an A");
    }
    else if(num >= 75)
    {
        puts("You got a B");
    }
    else if(num >= 50)
    {
        puts("You got a C");
    }
    else
    {
        puts("You got a F");
    }
}

/*
use : gcc -Wall -Wextra -std=c2x <file>.c -o <file>
*/
