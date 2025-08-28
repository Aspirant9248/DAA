// reverse the given linklist...........

#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int n)
    {
        data = n;
        next = NULL;
    }
};
int main()
{   
    int A[4] = {1, 2, 3, 4};

    Node *Head = NULL;

    for (int i = 0; i <= 3; i++)
    {
        if (Head == NULL)
        {
            Node *temp = new Node(A[i]);
            Head = temp;
        }
        else
        {
            Node *temp = new Node(A[i]);
            temp->next = Head;
            Head = temp;
        }
    }
    // Logic Part to reverse the linklist..................

    Node *prev = NULL;
    Node *fut = NULL;
    Node *curr = Head;

    while(curr!=NULL){
        fut = curr->next;
        curr->next= prev;
        prev = curr;
        curr = fut;
    }
    Head = prev;

    cout << "Linklist printing..........:-";
    
    while (Head != NULL)
    {
        cout << " " << Head->data;

        Head = Head->next;
    }
}