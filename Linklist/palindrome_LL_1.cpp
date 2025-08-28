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
    int n;
    int Total = 0;
    node *Head = NULL;

    cout << "enter the size of linkList:-";
    cin >> n;
    int A[n];
    for (int i = 0; i <= n - 1; i++)
    {
        cout << "Element no " << i + 1 << ":-";
        cin >> A[i];
    }
    for (int i = 0; i <= n - 1; i++)
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

    // traversal.............

    node *traversal_1 = Head;
    while (traversal_1 != NULL)
    {
        Total++;
        traversal_1 = traversal_1->next;
    }

    cout << "Total element:-" << Total<<endl;


    // printing Node.............

    cout << "printing element of node:-";
    node *traversal = Head;
    if (traversal != NULL)
    {
       
        cout << traversal->data;
        traversal = traversal->next;
    }
    while (traversal != NULL)
    {
        
        cout << "->" << traversal->data;
        traversal = traversal->next;
    }
    
    // Half......
    int count = Total;
    count = count / 2;
    node *curr = Head;
    node *prev = NULL;
    while(count--){
        prev = curr;
        curr = curr->next;
    }
    prev->next=NULL;

    // for the Half rest traversal...........

    node *front = NULL;
    prev = NULL;
    while(curr!=NULL){
        front = curr->next;
        curr->next = prev;
        prev = curr;
        curr = front;
    }
    int palid = 1;
    node *head_1 = Head;
    node *head_2 = prev;
    while(head_1!=NULL){
        if(head_1->data!=head_2->data){
             palid = 0;
        }
        head_1 = head_1->next;
        head_2 = head_2->next;
    }
    cout << "\n";
    if (palid)
        printf("Palindrome....");
    else
        printf("Not A palindrome.");

}