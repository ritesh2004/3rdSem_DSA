#include <bits/stdc++.h>
#include<typeinfo>
using namespace std;

class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class STACK
{
    node *top;
public:
    STACK()
    {
        top = NULL;
    }
    void push(int data)
    {
        node *temp = new node(data);
        if (!temp)
        {
            /* code */
            cout << "OVERFLOW" << endl;
            exit(1);
        }
        else
        {
            temp->next = top;
            top = temp;
        }
    }

    void pop()
    {
        if (top == NULL)
        {
            /* code */
            cout << "UNDERFLOW" << endl;
            exit(1);
        }
        else
        {
            node *temp;
            temp = top;
            top = top->next;
            temp->next = NULL;
            free(temp);
        }
    }

    void display()
    {
        if (top == NULL)
        {
            /* code */
            cout << "UNDERFLOW" << endl;
            exit(1);
        }
        else
        {
            node *temp = top;
            cout << "---------STACK---------" << endl;
            while (temp != NULL)
            {
                /* code */
                cout<<"--------------"<<endl;
                cout << temp->data << endl;
                cout << temp->next << endl;
                cout<<"--------------"<<endl;
                temp = temp->next;
            }
        }
    }
};

int main()
{
    STACK st;
    st.push(5);
    st.push(1);
    st.push(10);
    st.push(59);
    st.display();
    // st.pop();
    // st.display();
}