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
int main(){

    node *Head = NULL;
    int A[6] = {1, 2, 3, 4, 5, 6};
    for (int i = 0; i <= 5;i++){
        if(Head==NULL){
            node *temp = new node(A[i]);
            Head = temp;
        }
        else{
            node *traverse = Head;
            node *temp=new node(A[i]);
            while(traverse->next!=NULL){

                traverse = traverse->next;
            }
            traverse->next = temp;
        }
    }
    // for reversing the kth element............

    for (int i = 0; i <= 5;i++){
        for (int i = 0; i <= 1;i++)
        {
            int n = 0;
            while(n!=i){
                node *temp = Head;
                temp->next = Head;
                
            }
        }
        i = i + 2;
    }

        // print logic..............

        node *traverse = Head;
  
    while (traverse != NULL)
    {
        cout << " " << traverse->data;
        traverse = traverse->next;
    }
   
}
