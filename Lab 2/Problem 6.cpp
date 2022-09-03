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

void linsatbeg(node* &head, int val){
    node* n = new node(val);
    n->next = head;
    head = n;
}
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
int c = 0;
int search(node* head, int key){
    node* temp = head;
    
    while(temp!=NULL){
        if(temp->data== key){
            return c;
        }
        c++;
        temp=temp->next;
    }
    return -1;
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
    linsatend(head, 4);
    
    linsatbeg(head, 55);
    cout << search(head, 10) << endl;
    
    

    return 0;
}
