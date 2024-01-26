#include<bits/stdc++.h>
using namespace std;

bool isOperator(char c){
    return (!isalpha(c) && !isdigit(c));
}

int getPriority(char c){
    if (c == '-' || c == '+'){
        return 1;
    }
    else if (c == '*' || c == '/'){
        return 2;
    }
    else if (c == '^'){
        return 3;
    }
    return 0;
}

string InfixToPostfix(string infix){
    infix = '(' + infix + ')';
    int size = infix.size();
    stack<char> operator_stack;
    string output;

    for (int i = 0; i < size; i++)
    {
        if (isalpha(infix[i]) || isdigit(infix[i])){
            output += infix[i];
        }
        else if (infix[i] == '('){
            operator_stack.push('(');
        }
        else if (infix[i] == ')'){
            while (operator_stack.top() != '(')
            {
                output += operator_stack.top();
                operator_stack.pop();
            }
            operator_stack.pop();
        }
        else {
            if (isOperator(operator_stack.top()))
            {
                if (infix[i] == '^')
                {
                    while (getPriority(infix[i]) <= getPriority(operator_stack.top()))
                    {
                        output += operator_stack.top();
                        operator_stack.pop();
                    }
                }
                else{
                    while (getPriority(infix[i]) < getPriority(operator_stack.top()))
                    {
                        /* code */
                        output += operator_stack.top();
                        operator_stack.pop();
                    }
                    
                }
                operator_stack.push(infix[i]);
                
            }
            
        }
    }

    while (!operator_stack.empty())
    {
        /* code */
        output += operator_stack.top();
        operator_stack.pop();
    }
    return output;
}

int main(){
    string infix = ("x+y*z/w+u");
    cout<<InfixToPostfix(infix)<<endl;
}