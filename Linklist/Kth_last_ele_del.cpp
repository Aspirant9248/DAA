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
    int n;
    int Total = 0,k,y;
    node *Head = NULL;
    cout << "enter the size of linkList:-";
    cin >> n;
    int A[n];
    for (int i = 0; i <= n - 1;i++){
        cout << "Element no " << i+1 << ":-";
        cin >> A[i];
    }
    for (int i = 0; i <= n - 1;i++){
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
    // traversal.............
    node *traversal_1 = Head;
    while(traversal_1!=NULL){
        Total++;
        traversal_1 = traversal_1->next;
   
    }

    // printing element before deleting:-
    cout << "printing element before deleting:-";
    node *traversal = Head;
    if(traversal!=NULL){
        cout << traversal->data;
        traversal = traversal->next;
    }
    while (traversal != NULL)
    {
        cout << "->" << traversal->data;
        traversal = traversal->next;
    }
    // kth element.............
    cout << "\n"
         << "enter the kth element you want to delete from last:-";
    cin >> k;
    Total -= k;
    // Logic to delete the kth...........
    if(Total==0){
        node *temp_1 = Head;
        y = Head->data;
        Head = Head->next;
       delete temp_1; // to prevent memory leak
        }
    else{
        node *traversal_2 = Head;
        while (Total--)
        {
            traversal_2 = traversal_2->next;
        }
        y = traversal_2->next->data; // it store the deleted node.....
        traversal_2->next = traversal_2->next->next;
    }
    
    // printing the node..........
    cout << "\n"
         << "printing the node after the deletion of kth node:-";
    node *traversal_3= Head;
    if (traversal_3!= NULL)
    {
        cout << traversal_3->data;
        traversal_3= traversal_3->next;
    }
    while(traversal_3!=NULL){
        cout<<"->" << traversal_3->data;
        traversal_3 = traversal_3->next;
    }
    // it print the deleted node..............
    cout << "\n"
         << "delete node is :-" << y;
}