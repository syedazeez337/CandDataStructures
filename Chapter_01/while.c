#include <stdio.h>

int main(void)
{
    /*
    Iteration loops -> for, while, do{exp} while(exp);
    while loop
    */
    int i = 0;
    int counter = 0;
    
    printf("%s", "Enter the number: ");
    scanf("%d", &counter);
    
    while(i <= counter)  // while(true)
    {
        printf("Number is %d\n", i);  //statement executes
        i = i + 1;   // increases the i by one step to get to the end number
    }
}
