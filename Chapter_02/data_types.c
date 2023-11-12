#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("signed char    %zu byte range: %d - %d\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("unsigned char  %zu byte range:    0 - %d\n", sizeof(char), UCHAR_MAX);
    printf("short          %zu byte range: %d - %d\n", sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("unsigned short %zu byte range:      0 - %d\n", sizeof(unsigned short), USHRT_MAX);
    printf("int            %zu byte range: %d - %d\n", sizeof(int), INT_MIN, INT_MAX);
    printf("unsigned int   %zu byte range:     0 - %d\n", sizeof(unsigned int), UINT_MAX);
    printf("long           %zu byte range: %ld - %ld\n", sizeof(long), LONG_MIN, LONG_MAX);
}
