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

class LL{
    node* head;
    public:
    LL(){
        head = NULL;
    }

    void insertAtEnd(int val){
        node* newNode = new node(val);
        if (head == NULL)
        {
            /* code */
            head = newNode;
            return;
        }
        node* temp = head;
        while (temp->next)
        {
            /* code */
            temp = temp -> next;
        }
        temp -> next = newNode;
    }

    void insertAtBegin(int val){
        node* newNode = new node(val);
        if(head == NULL){
            head = newNode;
            return;
        }
        newNode->next = head;
        head = newNode;
    }

    void insertAtPos(int val,int pos){
        if (pos == 1) insertAtBegin(val);
        else{
            node* newNode = new node(val);
            node* temp = head;
            for (int i = 1; i < pos-1 && temp != NULL; i++)
            {
                /* code */
                temp = temp -> next;
            }
            if (temp == NULL)
            {
                /* code */
                cout<<"Invalid Position."<<endl;
                return;
            }
            
            newNode -> next = temp -> next;
            temp -> next = newNode;
        }
    }

    void deleteAtEnd(){
        if(head == NULL){
            cout<<"LINKED LIST EMPTY"<<endl;
            return;
        }
        node* temp = head;
        node* prev;
        while (temp->next)
        {
            /* code */
            prev = temp;
            temp = temp -> next;
        }
        if(prev == NULL){
            head = NULL;
        }
        else{
            prev -> next = NULL;
        }
        free(temp);
    }

    void deleteAtBegin(){
        if(head == NULL){
            cout<<"LINKED LIST EMPTY"<<endl;
            return;
        }
        node* temp = head;
        temp = temp -> next;
        head = temp;
    }

    void deleteAtPos(int pos){
        if (head == NULL){
            cout<<"LINKED LIST EMPTY"<<endl;
        }
        else if(pos == 1) deleteAtBegin();
        else{
            node* temp = head;
            node* prev = NULL;
            for (int i = 1; i < pos && temp->next; i++)
            {
                /* code */
                prev = temp;
                temp = temp -> next;
            }
            prev -> next = temp -> next;
            free(temp);
        }
    }

    void display(){
        cout<<"----------- Linked List ------------"<<endl;
        node* temp = head;
        while (temp)
        {
            /* code */
            cout<<temp->data<<"->";
            temp = temp->next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    LL linkedlist;
    linkedlist.insertAtEnd(5);
    linkedlist.insertAtEnd(15);
    linkedlist.insertAtEnd(22);
    linkedlist.insertAtBegin(100);
    linkedlist.insertAtPos(70,3);
    linkedlist.display();
    linkedlist.deleteAtPos(1);
    linkedlist.display();
}