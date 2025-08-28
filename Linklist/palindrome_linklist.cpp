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
    int z = 0;
    int B[z];

    // printing element before deleting:-

    cout << "printing element of node:-";
    node *traversal = Head;
    if (traversal != NULL)
    {
        B[z] = traversal->data;
        z++;
        cout << traversal->data;
        traversal = traversal->next;
    }
    while (traversal != NULL)
    {
        B[z] = traversal->data;
        z++;
        cout << "->" << traversal->data;
        traversal = traversal->next;
    }

    // to print the Array........

    cout << "\n";
    for (int i = 0; i <= n-1;i++){
        cout << " " << B[i];
    }
    int palind = 0;
    for (int i = 0; i <= n / 2;i++){
        if(B[i]!=B[n-1-i]) {
            palind = 1;
        }
    }
    cout << "\n";
    if(palind==1)
        printf("Not a palindrome:");
    else
        printf("Palindrome:");
}