/* #include<iostream>
#include<queue>
using namespace std;
class  node{
    public:
        int data;
        node *left, *right;
        node(int data){
            this->data = data;
            left = NULL;
            right = NULL;
        }
};
int main(){
    int x;
    cout << "enter the root Element:-";
    cin >> x;
    int first, second;
    queue<node*> q;
    node *root = new node(x);
    q.push(root);
    while(!q.empty()){
        node *temp =q.front();
        q.pop();
        cout << "enter the left child of " << temp->data << ":-";
        cin >> first;
        if(first !=-1){
            temp->left=new node(first);
            q.push(temp->left);
        }
        cout << "enter the Right child of " << temp->data << ":-";
        cin >> second;
        if(second!=-1){
            temp->right = new node(second);
            q.push(temp->right);
        }
    }
}                 */

#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        int data;
        node *left, *right;
        node(int data){
            this->data = data;
            right = NULL;
            left = NULL;
        }
};
int main(){
    int x;
    queue<node *> q;
    int first, second;
    cout << "enter the element if root:-";
    cin >> x;
    node *temp = new node(x);
    q.push(temp);
    while(!q.empty()){
        node *temp= q.front();
        q.pop();
        cout << "enter the element of left " << temp->data << ":-";
        cin >> first;
        if(first!=-1){

            temp->left = new node(first);
            q.push(temp->left);
        }

        cout << "enter the element of Right" << temp->data << ":-";
        cin >> second;
        if(second!=-1){

            temp->right = new node(first);
            q.push(temp->right);
        }
    }

}