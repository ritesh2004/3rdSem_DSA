#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;

    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

class DLL{
    node* head;
    public:
    DLL(){
        head = NULL;
    }

    void insertAtEnd(int val){
        node* newNode = new node(val);
        if (head == NULL){
            head = newNode;
        }
        else{
            node* temp = head;
            while (temp->next)
            {
                /* code */
                temp = temp->next;
            }
            newNode->prev = temp;
            temp->next = newNode;
        }
    }

    void insertAtBegin(int val){
        node* newNode = new node(val);
        if (head == NULL){
            head = newNode;
        }
        else{
            node* temp = head;
            newNode -> next = temp;
            temp -> prev = newNode;
            head = newNode;
        }
    }

    void insertAtPos(int data,int pos){
        node* newNode = new node(data);
        if (head == NULL) head = newNode;
        else if(pos == 1) insertAtBegin(data);
        else{
            node* temp = head;
            for (int i = 1; i < pos-1; i++)
            {
                /* code */
                temp = temp -> next;
            }
            if (temp == NULL){
                cout<<"Postion Invalid"<<endl;
                return;
            }
            newNode -> next = temp -> next;
            temp -> next = newNode;
            newNode -> prev = temp;
        }
    }

    void deleteAtEnd(){
        node* temp = head;
        if (head == NULL){
            delete temp;
        }
        else {
            while (temp->next)
            {
                /* code */
                temp = temp -> next;
            }
            temp = temp -> prev;
            temp -> next = NULL;
        }
    }

    void deleteAtBegin(){
        node* temp = head;
        if (head == NULL){
            free(temp);
            return;
        }
        temp = temp -> next;
        head = temp;
    }

    void deleteAtPos(int pos){
        node* temp = head;
        if (head == NULL) free(temp);
        else if (pos == 1) deleteAtBegin();
        else{
            for (int i = 1; i < pos; i++)
            {
                /* code */
                temp = temp -> next;
            }
            node* prev = temp -> prev;
            node* next = temp -> next;
            prev -> next = next;
            temp -> prev = prev;
        }
    }

    void display(){
        node* temp = head;
        cout<<"---------- Doubly Linked List ----------"<<endl;
        while (temp)
        {
            /* code */
            cout<<temp->data<<"->";
            temp = temp -> next;
        }
        cout<<"NULL"<<endl;
    }
};

int main(){
    DLL LL;
    LL.insertAtEnd(5);
    LL.insertAtEnd(8);
    LL.insertAtEnd(10);
    LL.insertAtBegin(100);
    LL.insertAtPos(20,3);
    LL.deleteAtPos(3);
    LL.display();
}