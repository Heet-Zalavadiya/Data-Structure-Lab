#include <stdio.h>
#define m 10

int hashset[m];

void init()
{
    for (size_t i = 0; i < m; i++)
    {
        hashset[i] = -1;
    }
}

int f(int key)
{
    return key % m;
}

void add(int key)
{
    int index = f(key);
    if (hashset[index] == -1)
    {
        hashset[index] = key;
        return;
    }
    else if (hashset[index] == key)
    {
        printf("key already exists \n");
        return;
    }
    else
    {
        // collision
        for (size_t probe = 1; probe < m; probe++)
        {
            int i = (index + probe) % m;

            if (hashset[i] == -1)
            {
                hashset[i] = key;
                return;
            }
            if (hashset[i] == key)
            {
                printf("key already exists\n");
                return;
            }
        }
        printf("Hashset is full\n");
    }
}

void display()
{
    for (size_t i = 0; i < m; i++)
    {
        printf("%d ", hashset[i]);
    }
}

int main()
{
    init();
    add(10);
    add(10);
    add(20);
    add(45);
    add(44);
    display();
    return 0;
}