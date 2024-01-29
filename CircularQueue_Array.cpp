#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class CQ{
    int front,rear,arr[MAX];
    public:
    CQ(){
        front = rear = -1;
    }

    void enqueue(int data){
        if ((front==-1 && (rear == MAX - 1)) || (((rear + 1) % MAX) == front))
        {
            /* code */
            cout<<"QUEUE OVERFLOW"<<endl;
            exit(1);
        }
        else if(front == -1 && rear == -1){
            front = rear = 0;
            arr[rear] = data;
        }
        else if(rear == MAX-1 && front != -1){
            rear = 0;
            arr[rear] = data;
        }
        else{
            arr[++rear] = data;
        }
    }

    void dequeue(){
        if (front == -1 && rear == -1)
        {
            /* code */
            cout<<"QUEUE UNDERFLOW"<<endl;
            exit(1);
        }
        else if(front == rear){
            front = -1;
            rear = -1;
        }
        else if(front == MAX-1){
            front = 0;
        }
        else{
            front++;
        }
    }

    void display(){
        if (front == -1 && rear == -1)
        {
            /* code */
            cout<<"QUEUE UNDERFLOW"<<endl;
            exit(1);
        }
        else{
            cout<<"------------ CIRCULAR QUEUE ------------"<<endl;
            for (int i = front; i <= rear; i++)
            {
                /* code */
                cout<<arr[i]<<endl;
            }
            
        }
    }
};

int main(){
    CQ queue;
    queue.enqueue(5);
    queue.enqueue(7);
    queue.enqueue(15);
    queue.enqueue(2);
    queue.enqueue(1);
    queue.display();
    queue.dequeue();
    queue.dequeue();
    queue.dequeue();
    queue.display();
    queue.enqueue(45);
    queue.display();
}