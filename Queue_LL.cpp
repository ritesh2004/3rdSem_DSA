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

class QUEUE{
    node* front;
    node* rear;
    public:
    QUEUE(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int data){
        node* temp = new node(data);

        if (!temp)
        {
            /* code */
            cout<<"QUEUE OVERFLOW"<<endl;
            exit(1);
        }
        else {
            if (rear == NULL)
            {
                /* code */
                front = rear = temp;
                return;
            }
            else {
                rear -> next = temp;
                rear = temp;
            }
        }
    }

    void dequeue(){
        if (front == NULL)
        {
            /* code */
            cout<<"QUEUE UNDERFLOW"<<endl;
            exit(1);
        }
        else {
            node* temp = front;
            front = front -> next;

            if (front == NULL){
                rear = NULL;
            }
            free(temp);
        }
    }

    void display(){
        if (front == NULL)
        {
            /* code */
            cout<<"QUEUE UNDERFLOW"<<endl;
            exit(1);
        }
        else {
            node* temp = front;
            cout<<"------------ QUEUE -------------"<<endl;
            while (temp)
            {
                /* code */
                cout<<temp->data<<endl;
                temp = temp->next;
            }
        }
    }
};

int main(){
    QUEUE q;
    q.enqueue(4);
    q.enqueue(5);
    q.enqueue(8);
    q.display();
    q.dequeue();
    q.display();
    q.enqueue(11);
    q.display();
}