#include <stdio.h>
#include <stdlib.h>

int i = 0;
int top = -1;
int max = 100;
char *stack;
char s[] = "leet**cod*e";
// char s[] = "erase*****";

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
        printf("Stack Underflow");
        return -1;
    }
    top = top - 1;
    return (stack[top + 1]);
}

void removeStar()
{
    while (s[i] != '\0')
    {
        while (s[i] != '\0' && s[i] != '*')
        {
            push(s[i]);
            i++;
        }
        while (s[i] == '*')
        {
            pop();
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
    removeStar();
    display();
    free(stack);
    return 0;
}