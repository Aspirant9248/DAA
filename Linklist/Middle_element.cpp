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
    int count = 0;
    int A[5] = {1, 2, 3, 4};
    for (int i = 0; i <= 3;i++){
        if(Head==NULL){
            node *temp = new node(A[i]);
            Head = temp;
        }
        else{
            node *temp = new node(A[i]);
            node *traversal = Head;
            while(traversal->next!=NULL){
                traversal = traversal->next;
            }
            traversal->next = temp;
        }

    }
    node *traversal = Head;
    while(traversal!=NULL){
        count++;
        cout <<" "<< traversal->data;
        traversal = traversal->next;
    }
    cout << "\n";
    cout << "Total number of node:-" << count;

    // for the Half count...........
    count /= 2;
    node *temp = Head;
    while(count--){
        temp = temp->next;
    }
    cout << "\n";
    cout << "middle element is :-" << temp->data;

}
