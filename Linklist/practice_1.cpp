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
    printf("enter the size of list:-");
    scanf("%d", &n);
    int A[n];
    for (int i = 0; i < n;i++){
        printf(" Enter the element %d:-", i + 1);
        scanf("%d", &A[i]);
    }
    node *Head = NULL;
    for (int i = 0; i <n; i++){
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
    // logic to print then element........
    cout << "before Reversing:-";
    node *traversal_1 = Head;
    if(traversal_1!=NULL){
        cout << traversal_1->data;
        traversal_1 = traversal_1->next;
    }
    while(traversal_1!=NULL){
        cout<<"->" << traversal_1->data;
        traversal_1 = traversal_1->next;
    }
    cout << "->NULL";
    // logic for the Reverse of element............

    node *prev= NULL;
    node *curr = Head;
    node *fut = NULL;
    while(curr!=NULL){
        fut = curr->next;
        curr->next = prev;
        prev = curr;
        curr = fut;
    }
    Head = prev;

    // traversal...........
    cout << "\n";
    cout << "After reversing:-";
    node *traversal_2 = Head;

    if (traversal_2 != NULL)
    {
        cout << traversal_2->data;
        traversal_2 = traversal_2->next;
    }
    while (traversal_2 != NULL)
    {
        cout << "->" << traversal_2->data;
        traversal_2 = traversal_2->next;
    }
    cout << "->NULL";
}