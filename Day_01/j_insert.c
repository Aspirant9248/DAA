/*insert at the begning...........
#include<stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
int main(){
    struct node *head, *newnode;
    head = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data to insert:-");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;


}

// insert at the last.......
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *head, *newnode,*temp;
    head = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data to insert:-");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = newnode;

}         */

// inserting at the particular position......

#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{

    int pos, count=0,n=0;
    struct node *head, *newnode, *temp;
    head = NULL;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data to insert:-");
    scanf("%d", &newnode->data);
    newnode->next = head;
    head = newnode;
    
    while (temp->next !=NULL )
    {   

        temp = temp->next;
        count++;
    }
    struct node *z;
    z = head;
    if(pos<=count){
         while(n!=pos){
             n++;
             z = z->next;
         }
    }
    temp->next = newnode;
}
