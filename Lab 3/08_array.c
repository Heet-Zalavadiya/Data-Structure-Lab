#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n = 5;
    char name[n][10];

    for (int i = 0; i < n; i++)
    {
        printf("Enter name %d: ", i);
        scanf("%s", &name[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; name[i][j]; j++)
        {
            name[i][j] = tolower((unsigned char)name[i][j]);
        }
    }

    // char sortName[10] = name[0];
    for (int i = 0; i < n; i++)
    {
        // char sortName[10] = name[i];
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(name[i], name[j]) > 0)
            {
                char temp[10];

                strcpy(temp, name[i]);
                strcpy(name[i], name[j]);
                strcpy(name[j], temp);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s ", name[i]);
    }

    return 0;
}