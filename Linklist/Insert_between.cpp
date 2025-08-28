// insert 5 between 3 and 4;
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
    Node *Head;
    Head = NULL;
    for (int i = 0; i <= 3; i++)
    {
        if (Head == NULL)
        {
            Node *temp = new Node(A[i]);
            Head = temp;
        }
        else
        {
            Node *tail = Head;
            while (tail->next != NULL)
            {
                tail = tail->next;
            }
            Node *temp = new Node(A[i]);

            tail->next = temp;
            temp->next = NULL;
        }
    }

    // just for the printing purpose...........

    Node *custom = new Node(5);
    Node *Traverse = Head;
    while (Traverse->data!= 3)
    {
    
        Traverse = Traverse->next;
    }
    custom->next = Traverse->next;
    Traverse->next= custom;

    Node *print = Head;
    while(print){
        cout << "  " << print->data;
        print = print -> next;
    }
}