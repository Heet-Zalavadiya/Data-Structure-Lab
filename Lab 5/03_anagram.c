#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    int n;
    printf("Enter value of n words : ");
    scanf("%d", &n);
    char arr[n][100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter words in array : ");
        scanf("%s", arr[i]);
    }
    int index = rand() % n;
    printf("Word at index : %s", arr[index]);
    char word[100];
    strcpy(word, arr[index]);
    char anagarmWord[100];
    printf("Enter any word for anagram : ");
    scanf("%s", anagarmWord);
    char temp1[100];
    char temp2[100];
    strcpy(temp1, word);
    strcpy(temp2, anagarmWord);
    // Sorting word array
    for (int i = 0; word[i] != '\0'; i++)
    {
        for (int j = i + 1; word[j] != '\0'; j++)
        {
            if (word[i] > word[j])
            {
                char temp = word[i];
                word[i] = word[j];
                word[j] = temp;
            }
        }
    }
    // Sorting anagramWord array
    for (int i = 0; anagarmWord[i] != '\0'; i++)
    {
        for (int j = i + 1; anagarmWord[j] != '\0'; j++)
        {
            if (anagarmWord[i] > anagarmWord[j])
            {
                char temp = anagarmWord[i];
                anagarmWord[i] = anagarmWord[j];
                anagarmWord[j] = temp;
            }
        }
    }
    if (strcmp(word, anagarmWord) == 0)
    {
        printf("Word Enterd is Anagram \'%s\' == \'%s\'", temp1, temp2);
    }
    else
    {
        printf("Word Enterd is Not Anagram \'%s\' != \'%s\'", temp1, temp2);
    }

    return 0;
}