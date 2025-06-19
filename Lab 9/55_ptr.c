#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node
{
    int roll_no;
    char branch[10];
    int batch_no;
};

int main()
{
    struct Node *student = (struct Node *)malloc(sizeof(struct Node));
    student->roll_no = 104;
    strcpy(student->branch, "CSE");
    student->batch_no = 1;
    
    printf("Roll No : %d\n", student->roll_no);
    printf("Branch : %s\n", student->branch);
    printf("Batch No : %d\n", student->batch_no);
    return 0;
}