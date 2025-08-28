#include<iostream>
using namespace std;
class Node{
    public:
    int data;
     Node *next;

    // using constructor.....

    Node(int n){
        data = n;
        next = NULL;
    }
    
};
int main(){

    Node *Head;
    Head = NULL;
    Head = new Node(4);

    cout << Head->data;
}