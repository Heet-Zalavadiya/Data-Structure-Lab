#include <stdio.h>

int main()
{
    int days = 365;
    int YY, WW, DD;
    YY = (days) / 365;
    WW = (days - (YY * 365)) / 7;
    DD = (days - (YY * 365) - (WW * 7));
    printf("YY:WW:DD  %d:%d:%d",YY,WW,DD);
}