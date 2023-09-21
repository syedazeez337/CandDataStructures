#include <stdio.h>

int main(void)
{
    /*
    Iteration loops -> for, while, do{exp} while(exp);
    do while loop
    */
    int counter = 0;
    int i = 0;
    
    printf("%s", "Enter the number: ");
    scanf("%d", &counter);
    
    do
    {
        printf("Number is %d\n", i);
        i = i + 1;
    } while(i <= counter);
}
