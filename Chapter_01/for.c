#include <stdio.h>

int main(void)
{
    /*
    Iteration loops -> for, while, do{exp} while(exp);
    for loop
    */
    int counter = 0;
    
    printf("%s", "Enter the number: ");
    scanf("%d", &counter);
    
    for(int i = 0; i <= counter; ++i)
    {
        printf("Number is %d\n", i);
    }
}
