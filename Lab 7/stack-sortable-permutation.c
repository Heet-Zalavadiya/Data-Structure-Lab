#include <stdio.h>
#include <stdlib.h>

int top = -1;
int max = 100;
int *stack;
int a[] = {1, 3, 4, 2};
int n = sizeof(a) / sizeof(a[0]);
int expected = 1;

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

int pop()
{
    if (top < 0)
    {
        printf("Stack Underflow\n");
        return '\0';
    }
    int temp = stack[top];
    top = top - 1;
    return temp;
}

int peek()
{
    if (top < 0)
    {
        return -1;
    }
    return stack[top];
}

void sortable_permutation(int *b)
{
    int i = 0;
    int j = 0;
    while (1)
    {
        if (peek() == expected)
        {
            b[j] = pop();
            j++;
            expected++;
        }
        else if (i < n)
        {
            push(a[i]);
            i++;
        }
        else
        {
            break;
        }
    }
    if (top == -1)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
}

int main()
{
    int b[n];
    stack = (int *)malloc(max * sizeof(int));
    sortable_permutation(b);
    return 0;
}