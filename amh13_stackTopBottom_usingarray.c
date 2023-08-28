#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack *ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overfull! cannot push %d to the stack\n", val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}

int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("stack underflow! cannot pop from the stack\n");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *sp, int i)
{
    int arrayInd = sp->top - i + 1;
    if (arrayInd < 0)
    {
        printf("Not a valid position for the stack\n");
        return -1;
    }
    else
    {
        return sp->arr[arrayInd];
    }
}

int stackTop(struct stack *sp)
{
    return sp->arr[sp->top];
}
int stackBottom(struct stack *sp)
{
    return sp->arr[0];
}

int main(int argc, char const *argv[])
{

    struct stack *sp = (struct stack *)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("stack has been created successfully\n");

    // printf("Before pushing , full: %d\n", isFull(sp));
    // printf("Before pushing, Empty: %d\n", isEmpty(sp));

    push(sp, 1);
    push(sp, 11);
    push(sp, 21);
    push(sp, 32);
    push(sp, 56);
    push(sp, 75);
    push(sp, 89);
    push(sp, 16);
    push(sp, 41);
    push(sp, 78);
    push(sp, 43); // stack overflow
    // printf("\nafter pushing element\n");
    // printf("Before pushing , full: %d\n", isFull(sp));
    // printf("Before pushing, Empty: %d\n", isEmpty(sp));

    printf("\npop element\n");
    printf("pooped %d from the stack \n", pop(sp));
    printf("pooped %d from the stack \n", pop(sp));
    printf("pooped %d from the stack \n", pop(sp));

    printf("\nPrinting values from the stack \n");
    for (int j = 0; j < sp->top + 1; j++)
    {
        printf("The value at position %d is %d\n", j, peek(sp, j));
    }

    printf("\n");
    printf("The top most value of this stack is %d\n",stackTop(sp));
    printf("The top most value of this stack is %d\n",stackBottom(sp));

    getch();
    return 0;
}