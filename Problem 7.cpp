/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    
    node(int val){
        data = val;
        next = NULL;
    }
};

void linsatend(node* &head, int val){
    
    
    
    node * n = new node(val);
    
    if(head == NULL ){
        head = n;
        return;
    }
    
    
    node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

void display(node* head){
    node* temp = head;
    while(temp->next!=NULL){
        cout << temp->data<<"->";
        temp = temp->next;
    }
    cout << temp->data;
    // cout << endl;
}
int main()
{
    
    node* head = NULL;
    linsatend(head, 1);
    linsatend(head, 2);
    linsatend(head, 3);
    linsatend(head, 55);
    
    
    
    display(head);

    return 0;
}
