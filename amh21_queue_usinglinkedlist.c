#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node *f = NULL;
struct node *r = NULL;

struct node
{
    int data;
    struct node *next;
};

void linkedlistTrasversal(struct node *ptr)
{
    printf("Printing the element of this linked list\n");
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    if (n == NULL)
    {
        printf("Queue is full");
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if (f == NULL)
        {
            f = r = n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int denqueue()
{
    int val = -1;
    struct node *ptr = f;
    if (f == NULL)
    {
        printf("Queue is Empty\n");
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main(int argc, char const *argv[])
{

    linkedlistTrasversal(f);
    printf("dequeueing element %d\n", denqueue());
    enqueue(34);
    enqueue(4);
    enqueue(3);
    enqueue(7);
    printf("dequeueing element %d\n", denqueue());
    linkedlistTrasversal(f);

    getch();
    return 0;
}