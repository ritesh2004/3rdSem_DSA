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

class CQ{
    node* front;
    node* rear;
    public:
    CQ(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int val){
        node* temp = new node(val);
        if (!temp)
        {
            /* code */
            cout<<"QUEUE OVERFLOW"<<endl;
            return;
        }
        else if (front == NULL)
        {
            /* code */
            rear = front = temp;
        }
        else{
            rear -> next = temp;
            rear = temp;
        }

        rear->next = front;
    }

    void dequeue(){
        if (front == NULL)
        {
            /* code */
            cout<<"QUEUE UNDERFLOW"<<endl;
            return;
        }
        else if (front == rear){
            front = rear = NULL;
        }
        else{
            node* temp = front;
            front = front -> next;
            free(temp);
        }

        rear->next = front;
    }

    void display(){
        if (front == NULL)
        {
            /* code */
            cout<<"QUEUE UNDERFLOW"<<endl;
            return;
        }
        node* temp = front;
        cout<<"------------ CIRCULAR QUEUE ------------"<<endl;
        while (temp)
        {
            /* code */
            cout<<temp->data<<endl;
            temp = temp->next;
        }
        
    }
};

int main(){
    CQ queue;
    queue.enqueue(5);
    queue.enqueue(10);
    queue.enqueue(7);
    queue.enqueue(8);
    queue.enqueue(9);
    queue.display();
    queue.dequeue();
    queue.dequeue();
    queue.display();

}