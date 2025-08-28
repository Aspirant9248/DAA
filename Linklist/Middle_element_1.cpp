#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

int main()
{

    node *Head = NULL;
  
    int A[6] = {1, 2, 3, 4, 5,6};
    for (int i = 0; i <= 5; i++)
    {
        if (Head == NULL)
        {
            node *temp = new node(A[i]);
            Head = temp;
        }
        else
        {
            node *temp = new node(A[i]);
            node *traversal = Head;
            while (traversal->next != NULL)
            {
                traversal = traversal->next;
            }
            traversal->next = temp;
        }
    }
    node *traversal = Head;

    if(traversal!=NULL){       // this condition runs only one to print the forst element.
        cout << traversal->data;
        traversal = traversal->next;
    }
    
    while (traversal != NULL)
    {
        cout << " -> " << traversal->data;
        traversal = traversal->next;
    }
    

    // for the middle element...........

    node *slow = Head;
    node *fast = Head;
    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << "\n";
    cout << "middle element is :-" << slow->data;
}
