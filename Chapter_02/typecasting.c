#include <stdio.h>

int main(void)
{
    int num1 = 234;
    float num2 = 23.43;
    char alf = 'A';

    printf("int to float %d -> %f\n", num1, (float) num1);
    printf("float to int %f -> %d\n", num2, (int) num2);
    printf("char to int  %c -> %d\n", alf, (int) alf);
}

/*
using type-casting (type) variableName
*/
