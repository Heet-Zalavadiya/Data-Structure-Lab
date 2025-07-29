#include <stdio.h>
#include <stdlib.h>

int i = 0;
int top = -1;
int max = 100;
char *stack;

void push(char x)
{
    if (top >= max - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
    stack[top] = x;
    return;
}

char pop()
{
    if (top < 0)
    {
        printf("Invalid : more b's than a's\n");
        return '\0';
    }
    top = top - 1;
    return (stack[top + 1]);
}

void vowel_anxity(char *s)
{
    i = 0;
    int index = 0;
    while (s[i] != '\0')
    {

        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            push(s[i]);
            i++;
            index = i;
        }
        else
        {
            for (int j = 0; j < index; index--, j++)
            {
                char temp = s[j];
                s[j] = s[index];
                s[index] = temp;
            }
            i++;
        }
    }
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%c", stack[i]);
    }
    printf("\n");
    return;
}

int main()
{
    stack = (char *)malloc(max * sizeof(char));
    char s[] = "abcdefghij";
    vowel_anxity(s);
    display();
    free(stack);
    return 0;
}
