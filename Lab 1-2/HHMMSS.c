#include <stdio.h>
#include <stdlib.h>

int main()
{
    int seconds = 120;
    int HH, MM, SS;
    HH = (seconds) / 3600;
    MM = (seconds - (HH * 3600)) / 60;
    SS = (seconds - (HH * 3600) - (MM * 60));
    printf("HH:MM:SS  %d:%d:%d", HH, MM, SS);
}