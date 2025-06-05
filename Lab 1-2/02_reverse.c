#include <stdio.h>

int main()
{
    int number = 12345;
    int reversed = 0;
    while (number != 0)
    {
        int digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }
    printf("%d",reversed);
    return 0;
}