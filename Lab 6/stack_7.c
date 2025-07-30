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
        printf("Stack Underflow\n");
        return '\0';
    }
    char temp = stack[top];
    top = top - 1;
    return temp;
}

void vowel_anxity(char *s)
{
    i = 0;
    int index = -1;
    while (s[i] != '\0')
    {
        if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u')
        {
            push(s[i]);
            index = top;
            i++;
        }
        else
        {
            int start = 0;
            int end = index;
            while (start < end)
            {
                char temp = stack[start];
                stack[start] = stack[end];
                stack[end] = temp;
                start++;
                end--;
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
