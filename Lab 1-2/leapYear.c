#include <stdio.h>

int main()
{
    int year = 2024;
    if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
    {
        printf("year is leap year %d",year);
    }
    else{
         printf("year is not leap year %d",year);
    }
}