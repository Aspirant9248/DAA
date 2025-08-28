#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode;
    int value;


    printf("Enter value to insert: ");
    scanf("%d", &value);


    newNode = (struct Node *)malloc(sizeof(struct Node));
    
    newNode->data = value;
    newNode->next = head;


    head = newNode;


    printf("Linked list: ");
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}


