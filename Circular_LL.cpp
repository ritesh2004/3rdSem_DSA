#include<bits/stdc++.h>
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

class CLL{
    node* last = NULL;
    public:

    void insertAtBegin(int val){
        node* newNode = new node(val);
        if (last == NULL){
            last = newNode;
            last -> next = last;
        }
        else{
            newNode -> next = last -> next;
            last -> next = newNode;
        }
    }

    void insertAtEnd(int val){
        node* newNode = new node(val);
        if (last == NULL){
            last = newNode;
            last -> next = last;
        }
        else{
            newNode -> next = last -> next;
            last -> next = newNode;
        }
    }

    void insertAtPos(int val,int pos){
        node* newNode = new node(val);
        if (last == NULL){
            last = newNode;
            last -> next = last;
        }
        else if (pos == 1) insertAtBegin(val);
        else{
            node* temp = last->next;
            for (int i = 0; i < pos; i++)
            {
                /* code */
                temp = temp -> next;
                cout<<temp->data<<endl;
            }
            
        }
    }

    void display(){
        node* temp = last->next;
        cout<<"---------- Circular Linked List -----------"<<endl;
        do
        {
            /* code */
            cout<<temp->data<<"->";
            temp = temp -> next;
        } while(temp != last->next);
        cout<<"NULL"<<endl;
    }
};


int main(){
    CLL LL;
    LL.insertAtBegin(5);
    LL.insertAtBegin(10);
    LL.insertAtBegin(15);
    LL.insertAtPos(20,2);
    LL.display();
}