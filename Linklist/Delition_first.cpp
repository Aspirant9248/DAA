// Deletion the first element.......

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

// to delete the first node.......

    Head = Head->next;

//  to print the Data of linklist......

    Node *Traverse = Head;
    while (Traverse != NULL)
    {
        cout << " " << Traverse->data;
        Traverse = Traverse->next;
    }
}