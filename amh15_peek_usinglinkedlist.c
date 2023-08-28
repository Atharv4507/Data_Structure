#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *top = NULL; // for case 2 in pop.

void linkedlistTransversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int isEmpty(struct node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct node *top)
{
    struct node *p = (struct node *)malloc(sizeof(struct node));
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

struct node *push(struct node *top, int x)
{
    if (isFull(top))
    {
        printf("Stack overflow\n");
    }
    else
    {
        struct node *n = (struct node *)malloc(sizeof(struct node));
        n->data = x;
        n->next = top;
        top = n;
        return top;
    }
};

// case 1:

int pop(struct node **top)
{
    if (isEmpty(*top))
    {
        printf("stack underflow\n");
    }
    else
    {
        struct node *n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}

// case 2:

// int pop(struct node *tp)
// {
//     if (isEmpty(tp))
//     {
//         printf("stack underflow\n");
//     }
//     else
//     {
//         struct node *n = tp;
//         top = (tp)->next;
//         int x = n->data;
//         free(n);
//         return x;
//     }
// }

int peek(int pos)
{
    struct node *ptr = top;
    for (int i = 0; (i < pos - 1 && ptr != NULL); i++)
    {
        ptr = ptr->next;
    }
    if (ptr != NULL)
    {
        return ptr->data;
    }
    else
    {
        return -1;
    }
}

int main(int argc, char const *argv[])
{
    struct node *top = NULL;
    top = push(top, 78);
    top = push(top, 8);
    top = push(top, 7);
    top = push(top, 23);

    linkedlistTransversal(top);
    printf("popped element is %d\n", pop(&top));
    linkedlistTransversal(top);

    for (int i = 1; i <= 4; i++)
    {
        printf("value at position %d is: %d\n", i, peek(i));
    }

    getch();
    return 0;
}