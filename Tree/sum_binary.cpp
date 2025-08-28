
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
    else
    {
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
void preorder(node *root, int &sum)
{
    if (root == NULL)
        return;

    cout << " " << root->data;
    sum = sum + root->data;
    preorder(root->left, sum);
    preorder(root->right, sum);
}

int main()
{
    int sum = 0;
    cout << "Enter the element :-";
    node *root = Binary();
    cout << "preorder:-";
    preorder(root, sum);
    printf("\nsum of node:-%d", sum);
}