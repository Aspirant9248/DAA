//implimentation of tree..........

#include<stdio.h>
struct node{
    int data;
    struct node *left, *right;

};
struct node *create(){
    int x;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("enter data(-1 if want to exit)");
    scanf("%d", &x);
    if(x==-1){
        return NULL;
    }
    newnode->data = x;
    printf("enter the left child of %d", x);
    newnode->left = create();
    printf("enter the Right child of %d", x);
    newnode->right = create();
    return newnode;
}
int main(){
    struct node *root=NULL;
    root = create();
    return 0;
}
