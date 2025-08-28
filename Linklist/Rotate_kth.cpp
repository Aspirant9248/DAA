// two edge cases if rotation time ZERO k=0 return same list and K>count K=K% count.....

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
    int count = 0,k;
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
    // printing the element........
    cout << "before Rotation:-";
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
    // counting............
    node *Traversal_1 = Head;
    while(Traversal_1!=NULL){
        count++;
        Traversal_1 = Traversal_1->next;
    }
    // kth rotation........
    cout << "\n";
    cout << "enter the kth time you want roate....";
    cin >> k;

    // handle edge cases.......
    k = k % count;
    if(k==0){
        node *temp = Head;
        while(temp!=NULL){
            cout<<" " << temp->data;
            temp = temp->next;
        }
    }
    else{
        count -= k;

        node *curr = Head;
        node *prev = NULL;
        while (count--)
        {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;

        node *temp_1 = curr;
        while (temp_1->next != NULL)
        {
            temp_1 = temp_1->next;
        }
        temp_1->next = Head;
        Head = curr;

        // to print node................

        cout << "Linklist after the rotation....";
        node *Traversal_3 = Head;
        if (Traversal_3 != NULL)
        {
            cout << Traversal_3->data;
            Traversal_3 = Traversal_3->next;
        }
        while (Traversal_3 != NULL)
        {
            cout << "->" << Traversal_3->data;
            Traversal_3 = Traversal_3->next;
        }
    }
   
}