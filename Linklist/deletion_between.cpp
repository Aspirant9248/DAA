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

    // logic to delete at the particular element.........

    Node *Traverse = Head;
    while (Traverse->data!=2)
    {
        
        Traverse = Traverse->next;
    }
    Traverse->next = Traverse->next->next;
    

    // To print the element of linklist.......

    Node *Traverse_1 = Head;

    while(Traverse_1!=NULL){

        cout << " " << Traverse_1->data;
        Traverse_1 = Traverse_1->next;
    }
}