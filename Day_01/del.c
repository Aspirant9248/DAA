#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
int main(){
    struct Node *head = NULL;
    struct Node *temp;

    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = 10;
    head->next = NULL;

    struct Node *second = (struct Node *)malloc(sizeof(struct Node));
    second->data = 20;
    second->next = NULL;
    head->next = second;
      
    printf("Before deletion: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

 
    temp = head;
    head = head->next;
 


    printf("After deletion: ");
    temp = head;
    while (temp != NULL)
    {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");

    return 0;
}
