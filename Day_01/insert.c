#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

// Pass pointer to head so it can be updated
void insert(struct Node **head)
{
    int value;
    struct Node *newNode;

    printf("Enter value to insert: ");
    scanf("%d", &value);

    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = *head;

    *head = newNode; // Update head to point to new node
}

int main()
{
    struct Node *head = NULL;

    insert(&head); // Pass address of head

    printf("Linked list: ");
    while (head != NULL)
    {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");

    return 0;
}
