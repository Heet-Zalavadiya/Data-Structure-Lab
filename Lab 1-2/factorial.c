#include <stdio.h>

int main()
{
    int num = 5;

    int factorial = 1;
    for (int j = 1; j <= 5; j++)
    {
        factorial *= j;
    }
    printf("Factorial of %d is %d\n", num, factorial);
}
