#include <stdio.h>
#include <ctype.h>

int main()
{
    char c = 'A';
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
       printf("'%c' is a vowel\n", c);
    }
    else
    {
       printf("'%c' is a consonant\n", c);
    }
    // Note: The tolower function is used to handle both uppercase and lowercase letters.
    return 0;
}