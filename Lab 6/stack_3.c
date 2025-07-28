#include <stdio.h>
#include <stdlib.h>

int i = 0;
int top = -1;
int max = 100;
char *stack;
char string[] = "aaabbb";

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

void check()
{
    while (string[i] == 'a') // pushing 'a's in stack
    {
        push('a');
        i++;
    }
    while (string[i] == 'b')
    {
        pop();
        i++;
    }

    if (string[i] != '\0')
    {
        printf("Invalid String contains char other than a and b\n");
    }
    else if (top == -1 && i != 0)
    {
        printf("Valid string of the form a^i b^i, i = %d \n", i / 2);
    }
    else if (i == 0)
    {
        printf("Empty String \n");
    }
    else
    {
        printf("Invalid number of 'a' is not equal number of 'b'");
    }
}

int main()
{
    stack = (char *)malloc(max * sizeof(char));
    check();
    free(stack);
    return 0;
}