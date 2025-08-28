/* 
#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
node *Binary()
{
    int x;
    cin >> x;
    if (x == -1)
        return NULL;

    node *temp = new node(x);
    cout << "enter the left element of the " << temp->data << ":-";
    temp->left = Binary();
    cout << "enter the Right element of the " << temp->data << ":-";
    temp->right = Binary();
    return temp;
}
void preorder(node* root){
    if(root==NULL)
        return;

    cout<<" " << root->data;
    preorder(root->left);
    preorder(root->right);
}

int main()
{
    cout << "enter the root element of tree:-";
    node *root = Binary();
    preorder(root);
}                           */

#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *left;
        node *right;
        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
node *Binary(){
    int x;
    cin >> x;
    if(x==-1)
        return NULL;
    else {
        node *temp = new node(x);
        // for the left node.....
        cout << "enter the left element " << temp->data << ":-";
        temp->left = Binary();
        // for the right node........
        cout << "enter the Right element " << temp->data << ":-";
        temp->right = Binary();
        return temp;
    }
}
void preorder(node *root){
  if(root==NULL)
      return;

  cout << " " <<root->data;
  preorder(root->left);
  preorder(root->right);

}

void inorder(node *root){
    if (root == NULL)
        return;

    
    inorder(root->left);
    cout << " " << root->data;
    inorder(root->right);
}
void postorder(node *root){
    if (root == NULL)
        return;

    postorder(root->left);
    cout << " " << root->data;
    postorder(root->right);
}

int main(){

    cout << "Enter the element :-";
    node *root = Binary();
    cout << "preorder:-";
    preorder(root);
    cout << "\n" << "postorder:-";
    postorder(root);
    cout << "\n" << "inorder:-";
    inorder(root);
}