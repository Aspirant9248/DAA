#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left, *right;
};

struct node *create()
{
    int x;
    printf("Enter data (-1 to stop): ");
    scanf("%d", &x);

    if (x == -1)
    {
        return NULL;
    }

    struct node *newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;

    printf("Creating LEFT child of %d\n", x);
    newnode->left = create();

    printf("Creating RIGHT child of %d\n", x);
    newnode->right = create();

    return newnode;
}

int main()
{
    struct node *root = NULL;
    printf("Start building the binary tree:\n");
    root = create();
    printf("Binary tree creation completed.\n");
    return 0;
}
