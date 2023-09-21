#include <stdio.h>

int main(void)
{
    /*
    using switch statments
    switch(num)
    case 0 : statement1;
             break;
    case 1 : statement2;
             break;
    default : statement;
              break;
    */
    int num = 0;
    int counter = 0;
    
    printf("%s", "Enter a number to know even or odd : ");
    scanf("%d", &counter);
    
    for(num = 0; num <= counter; ++num)
    {
        int rem = num % 2;
        switch(rem)
        {
        case 0 : 
            printf("Number %d is even\n", num);
            break;
        case 1 : 
            printf("Number %d is odd\n", num);
            break;
        }
    }
}
