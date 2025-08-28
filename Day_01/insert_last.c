#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void insert_last(struct Node **head, int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;

    if (*head == NULL)
    {
       
        *head = newNode;
    }
    else
    {
        
        struct Node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void printList(struct Node *head)
{
    printf("Linked list: ");
    while (head != NULL)
    {
        printf("%d  ", head->data);
        head = head->next;
    }

}

int main()
{
    struct Node *head = NULL;
    int value;

    printf("Enter value to insert at the end: ");
    scanf("%d", &value);

    insert_last(&head, value);
    printList(head);

    return 0;
}
