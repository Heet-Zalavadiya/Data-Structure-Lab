#include <stdio.h>
#include <stdlib.h>

int top = 1;
int max = 100;
char *stack;
char string[5] = {'a', 'b', 'c', 'b', 'a'};


// stack logic 
void push(int x)
{
    if (top >= max - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    top = top + 1;
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

// string grammer logic
char nextChar(){
    return string[top];
}

int main()
{
    stack = (char *)malloc(max * sizeof(char));
    return 0;
}