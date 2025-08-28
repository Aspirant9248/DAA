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
    int B[4];
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
    Node *Rev = Head;
    int i = 0;
    while(Rev!=NULL){
        B[i] = Rev->data;
        Rev = Rev->next;
        i++;
    }

    cout << "Linklist.....:-";
    while (Head != NULL)
    {
        cout << " " << Head->data;

        Head = Head->next;
    }
    printf("\n");
    cout << "Reversing a linklist.....";

    for (int i = 3; i >= 0; i--)
    {
        cout << " " << B[i];
    }
}