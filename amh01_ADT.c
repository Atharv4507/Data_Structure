#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct myarray
{
    int total_size;
    int used_size;
    int *ptr;
};


void creatarray(struct myarray *a, int tsize, int usize)
{
    a->total_size = tsize;
    a->used_size = usize;
    a->ptr = (int *)malloc(tsize * sizeof(int));
}

void setval(struct myarray *a)
{
    int n;
    for (int i = 0; i < a->used_size; i++)
    {
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

void show(struct myarray *a)
{
    for (int i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
}

int main(int argc, char const *argv[])
{
    struct myarray marks;
    creatarray(&marks, 10, 2);
    printf("\n");
    printf("We are running setval now\n");
    setval(&marks);
    printf("we are running show now\n");
    show(&marks);
    getch();
    return 0;
}