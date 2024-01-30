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
            last = newNode;
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
            node* temp = last;
            for (int i = 0; i < pos-1; i++)
            {
                /* code */
                temp = temp->next;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }

    void deleteAtEnd(){
        node* temp = last->next;
        if (last == NULL)
        {
            /* code */
            return;
        }

        do{
            /* code */
            temp = temp -> next;
        }while (temp->next != last);

        temp->next = last->next;
        last = temp;
    }

    void deleteAtBegin(){
        node* temp = last->next;
        if (last == NULL)
        {
            /* code */
            return;
        }
        else{
            last -> next = temp -> next;
        }
    }

    void deleteAtPos(int pos){
        node* temp = last;
        if (last == NULL) return;
        else if(pos == 1) deleteAtBegin();
        else{
            for (int i = 0; i < pos-1 && temp->next != last; i++)
            {
                /* code */
                temp = temp -> next;
            }
            temp -> next = temp -> next -> next;
        }
    }

    void display(){
        node* temp = last;
        if (last == NULL)
        {
            /* code */
            cout<<"Empty Linked List"<<endl;
            return;
        }
        
        cout<<"---------- Circular Linked List -----------"<<endl;
        do
        {
            /* code */
            temp = temp -> next;
            cout<<temp->data<<"->";
        } while(temp != last);
        cout<<"NULL"<<endl;
    }
};


int main(){
    CLL LL;
    LL.insertAtEnd(5);
    LL.insertAtEnd(10);
    LL.insertAtEnd(15);
    LL.insertAtBegin(1);
    LL.insertAtPos(20,3);
    LL.deleteAtPos(3);
    LL.display();
}