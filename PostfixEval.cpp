#include<bits/stdc++.h>
using namespace std;

int PostfixEvaluate(string postfix){
    int l = postfix.size();
    stack<int> STACK;

    for (int i = 0; i < l; ++i)
    {
        /* code */
        if (isdigit(postfix[i])){
            STACK.push(postfix[i] - '0');
        }
        else {
            int val1 = STACK.top();
            STACK.pop();
            int val2 = STACK.top();
            STACK.pop();
            switch (postfix[i])
            {
            case '+':
                STACK.push(val1 + val2);
                break;
            case '-':
                STACK.push(val2 - val1);
                break;
            case '*':
                STACK.push(val1 * val2);
                break;
            case '/':
                STACK.push(val2 / val1);
                break;
            }
        }
    }
    
    return STACK.top();
}

int main(){
    string postfix = ("231*+9-");
    cout<<PostfixEvaluate(postfix)<<endl;
}