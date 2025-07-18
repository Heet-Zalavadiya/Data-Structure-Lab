#include <stdio.h>
#include <stdlib.h>

int top = -1;
int max = 3;
int *stack;
 
void push(int x)
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
        printf("Stack Underflow");
        return -1;
    }
    top = top - 1;
    return (stack[top + 1]);
}

int peep(int indexFromTop)
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
        printf("%d\n", stack[i]);
    }
    return;
}

int main()
{
    stack = (int *)malloc(max * sizeof(int));
    push(10);
    push(20);
    push(30);
    push(40);

    printf("++++++++\n");
    display();
    printf("++++++++\n");

    int popped_element = pop();
    printf("pooped element %d\n",popped_element);
    
    int peeped_element  = peep(3);
    printf("peeped element %d\n",peeped_element);
    
    change(50, 3);

    printf("++++++++\n");
    display();
    printf("++++++++\n");
    free(stack);
    return 0;
}