#include <stdio.h>
#include <string.h>
#define m 10

struct pair
{
    char key[10];
    int value;
};

struct pair hashmap[m];

int f(char key[])
{
    int index = 0;
    for (size_t i = 0; i < strlen(key); i++)
    {
        index = index + key[i];
    }

    return index % m;
}

void add(char k[], int v)
{
    int idx = f(k);

    if (hashmap[idx].key[0] == '\0')
    {
        strcpy(hashmap[idx].key, k);
        hashmap[idx].value = v;
        return;
    }
    else if (strcmp(hashmap[idx].key, k) == 0)
    {
        hashmap[idx].value = v;
        return;
    }
    else
    {
        // collision
        for (size_t prob = 1; prob < m; prob++)
        {
            int i = (idx + prob) % m;

            if (hashmap[i].key[0] == '\0')
            {
                strcpy(hashmap[i].key, k);
                hashmap[i].value = v;
                return;
            }
            if (strcmp(hashmap[i].key, k) == 0)
            {
                hashmap[i].value = v;
                return;
            }
        }
    }
}

int get(char k) 
{
    for (size_t i = 0; i < m; i++)
    {
        if (strcmp(hashmap[i].key, k) == 0)
        {
            return hashmap[i].value;
        }
    }
    return -1;
}


int main()
{

    return 0;
}