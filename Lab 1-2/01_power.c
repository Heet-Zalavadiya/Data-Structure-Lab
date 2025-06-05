#include <stdio.h>

int main()
{
    int base = 2;
    int exponent = 3;
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result *= base;
    }
    printf("%d^%d = %d\n", base, exponent, result);
    return 0;
}
