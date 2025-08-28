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
    int count = 1, k;
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
    // print Node before deletion.......
    cout << "List before Deletion:-";
    node *traversal_1 = Head;
    while(traversal_1!=NULL){
        cout<<" " << traversal_1->data;
        traversal_1 = traversal_1->next;
    }
    cout << "\n";
    // tking the element postion......
    cout << "enter the Kth element you want delete:-";
    cin >> k;
    node *curr = Head;
    node *prev = NULL;
    while(curr!=NULL){
       
        if(count==k){
            prev->next = curr->next;
            curr = prev->next;
            count = 1;
        }
        else {
            
            prev = curr;
            curr = curr->next;
            count++;
            }

    }
    cout << "List After the deletion........";
    node *traversal = Head;
    while(traversal!=NULL){
        cout <<" "<< traversal->data;
        traversal = traversal->next;
    }
    }