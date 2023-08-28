#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main(int argc, char const *argv[])
{
    // if you not created above func

    // counstracting the first root node
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // counstracting the second root node
    struct node *p1;
    p1 = (struct node *)malloc(sizeof(struct node));
    p->data = 4;
    p1->left = NULL;
    p1->right = NULL;

    // counstracting the thired root node
    struct node *p2;
    p2 = (struct node *)malloc(sizeof(struct node));
    p->data = 1;
    p2->left = NULL;
    p2->right = NULL;

    // linking the root node with left and right childern
    p2->left = p1;
    p2->right = p2;

    // // counstracting the root node
    // struct node *p = createnode(2);
    // struct node *p1 = createnode(24);
    // struct node *p2 = createnode(4);

    // // linked root with node left and right children
    // p->left = p1;
    // p->right = p2;
    getch();
    return 0;
}