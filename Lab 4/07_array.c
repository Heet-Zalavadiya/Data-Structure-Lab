#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n = 20;
    char s[20] = "DarShan UniveRsitY";

    for (int i = 0; i < 20; i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
            // Character is uppercase
            s[i] = tolower(s[i]);

        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Character is lowercase
            s[i] = toupper(s[i]);
        }
    }
    printf("String after conversion: %s\n", s);
    return 0;
}