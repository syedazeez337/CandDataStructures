#include <stdio.h>

int main(void)
{
    //Taking an input in C using scanf
    //Initialise all variables and set it 0
    int i = 0;
    int j = 0;
    
    printf("%s", "Enter two numbers: ");
    scanf("%d%d", &i, &j);
    
    int k = i + j;
    printf("Sum of two numbers: %d\n", k);
}

/*
use : gcc -Wall -Wextra -std=c2x <file>.c -o <file>
*/
