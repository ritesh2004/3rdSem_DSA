#include<bits/stdc++.h>
using namespace std;

#define MAX 10

class STACK{
    int arr[MAX],front,top;
    public:
    STACK(){
        top = -1;
    }

    int push(int val){
        if (top >= MAX-1)
        {
            cout<<"OVERFLOW"<<endl;
            return 0;
        }
        else{
            arr[++top] = val;
            return val;
        }
    }

    int pop(){
        if (top == -1)
        {
            cout<<"UNDERFLOW"<<endl;
            return 0;
        }
        else{
            top--;
        }
    }

    int peek(){
        if (top == -1) {
            cout<<"UNDERFLOW"<<endl;
            return 0;
        }
        else{
            return arr[top];
        }
    }

    void display(){
        cout<<"----------STACK---------"<<endl;
        if (top == -1)
        {
            /* code */
            cout<<"UNDERFLOW"<<endl;
            return;
        }
        
        for (int i = 0; i <= top; i++)
        {
            /* code */
            cout<<arr[i]<<endl;
        }
    }
};

int main(){
    STACK st;
    st.push(5);
    st.push(7);
    st.push(9);
    st.push(0);
    st.push(1);
    st.display();
    st.pop();
    st.pop();
    st.pop();
    st.display();
}