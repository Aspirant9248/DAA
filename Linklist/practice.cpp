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
    node *Head = NULL;

    int A[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i <= 4;i++){
        if(Head==NULL){

            node *temp = new node(A[i]);
            Head = temp;
        }
        else {

            node *temp = new node(A[i]);
            node *traversal = Head;

            while (traversal->next!= NULL)
            {
                traversal = traversal->next;
            }
            traversal->next = temp;
            
        }

    }

    // logic to insert the element in the begning.......

    node *temp = new node(6);
    temp->next = Head;
    Head = temp;

    // element seven adding in between 3-4

    node *traversal_1 = Head;
    node *temp_1 = new node(7);

    while(traversal_1->data!=3){
        traversal_1 = traversal_1->next;
    }
    temp_1->next = traversal_1->next;
    traversal_1->next = temp_1;

    // inserting 8 in the last of link list.......
   node  *traversal_2 = Head;
   node *temp_2 = new node(8);
   while (traversal_2->next != NULL)
   {
       traversal_2 = traversal_2->next;
   }
   traversal_2->next = temp_2;

   // logic to delete the first element..........

   node *temp_3 = Head;

   Head = temp_3->next;

   // logic to delete the last element.........

   node *temp_4 = Head;

   while (temp_4->next->next != NULL)
   {
       temp_4 = temp_4->next;
   }

   temp_4->next = NULL;

   // logic to delete the element between 3-4

   node *temp_5 = Head;

   while(temp_5->data!=3){
       temp_5 = temp_5->next;
   }
   
   temp_5->next = temp_5->next->next;

   // logic to print the element..............

   node *traversal = Head;

   while (traversal != NULL)
   {

       cout << " " << traversal->data;

       traversal = traversal->next;
   }
    
}