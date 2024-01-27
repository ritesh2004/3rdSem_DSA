#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class QUEUE{
    int front,rear;
    int arr[MAX];

    public:
    QUEUE(){
        front = -1;
        rear = -1;
    }

    void enqueue(int data){
        if (rear >= MAX - 1 )
        {
            /* code */
            cout<<"OVERFLOW"<<endl;
            exit(1);
        }
        else{
            if (front == -1){
                front = 0;
                arr[++rear] = data;
            }
            else {
                arr[++rear] = data;
            }
        }
    }

    void dequeue(){
        if (front == -1 || front > rear)
        {
            /* code */
            cout<<"UNDERFLOW"<<endl;
            exit(1);
        }
        else {
            front++;
        }
    }

    void display(){
        if (front == -1 || front > rear)
        {
            /* code */
            cout<<"UNDERFLOW"<<endl;
            exit(1);
        }
        else {
            cout<<"----------- QUEUE -------------"<<endl;
            for (int i = front; i <= rear; i++)
            {
                /* code */
                cout<<arr[i]<<endl;
            }
            
        }
    }
};

int main(){
    QUEUE q;
    q.enqueue(5);
    q.enqueue(10);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(2);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(120);
    q.enqueue(20);
    q.display();
}