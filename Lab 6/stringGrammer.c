// How stack can be used to recognize strings aca, bcb, abcba, abbcbba? Write a
// program to solve the above problem.

#include <stdio.h>
#include <stdlib.h>
int i = 0;
int top = 1;
int max = 100;
char *stack;
char string[] = "abcba";

// stack logic
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

char peep(int indexFromTop)
{
    if ((top - indexFromTop + 1) < 0)
    {
        printf("Stack Underflow\n");
        return -1;
    }
    return (stack[top - indexFromTop + 1]);
}

void change(int x, int indexFromTop)
{
    if ((top - indexFromTop + 1) < 0)
    {
        printf("Stack Underflow\n");
        return;
    }
    stack[top - indexFromTop + 1] = x;
    return;
}

void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%c\n", stack[i]);
    }
    return;
}

// // string grammer logic
// char nextChar()
// {
//     if (string != '\0')
//     {
//         return string[i++];
//     }
// }

void recogniz()
{
    char next = string[i++];
    while (next != 'c')
    {
        if (next == '\0')
        {
            printf("Invalid string");
            return;
        }
        else
        {
            push(next);
            next = string[i++];
        }
    }

    while (stack[top] != 'c')
    {
        next = string[i++];
        int y = pop();
        if (next != y)
        {
            printf("Invalid String");
            return;
        }
    }
    next = string[i++];
    if (next == '\0')
    {
        printf("Valid string");
    }
    else
    {
        printf("Invalid string");
    }
    return;
}

int main()
{
    stack = (char *)malloc(max * sizeof(char));
    stack[top] = 'c';
    recogniz();
    free(stack);
    return 0;
}