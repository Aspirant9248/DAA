#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node(int data){
            this->data = data;
            next = NULL;
        }
};
node *createnode(int A[], int size,int index){
    if(index==size){
        return NULL;
    }
    else {
        node *temp = new node(A[index]);
        
        temp->next = createnode(A, size, index + 1);
       
        return temp;
    }
}
int main()
{
    node *Head = NULL;
    int A[5] = {1, 2, 3, 4,5};
    Head = createnode(A, 5, 0);

    node *temp = Head;
    while(temp!=NULL){
        cout << " " << temp->data;
        temp = temp->next;
    }
}