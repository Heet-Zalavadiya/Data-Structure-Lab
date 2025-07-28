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
        return -1;
    }
    top = top - 1;
    return (stack[top + 1]);
}

int match(char a, char b)
{
    if (a == '(' && b == ')')
        return 1;
    if (a == '{' && b == '}')
        return 1;
    if (a == '[' && b == ']')
        return 1;
    return 0;
}

int parenthesMatch(char *exp)
{
    char popped_ch;
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
        {
            push(exp[i]);
        }
        else if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            if (top < 0)
            {
                return 0;
            }
            popped_ch = pop();
            if (!match(popped_ch, exp[i]))
            {
                return 0;
            }
        }
    }
    if (top < 0)
    {
        return 1;
    }
    return 0;
}

int main()
{
    stack = (char *)malloc(max * sizeof(char));
    if (stack == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    char exp[100];

    while (1)
    {
        printf("Enter a regular expression (or 'q' to quit): ");
        scanf("%s", exp);
        if (*exp == 'q')
        {
            return 0;
        }
        if (parenthesMatch(exp))
        {
            printf("The parenthesis is balanced\n");
        }
        else
        {
            printf("The parenthesis is not balanced\n");
        }
    }

    return 0;
}