#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
void preorder(node *root){
     if(root==NULL){
         return;
     }
    cout <<" "<< root->data;
    preorder(root->left);
    preorder(root->right); 
}
node *Binary()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;
    else
    {
        node *temp = new node(x);

        cout << "Enter the left element " << temp->data << ":-";
        temp->left = Binary();
        cout << "enter the Right element :-" << temp->data << ":-";
        temp->right = Binary();
        return temp;
    }
}
int main()
{
    cout << "enter the root node:-";
    node *root;
    root = Binary();
    preorder(root);
}