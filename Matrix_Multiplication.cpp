#include<bits/stdc++.h>
using namespace std;

void MatrixMultiply(int A[][10],int B[][10],int a,int b, int c){
    int R[b][c],sum=0;
    for (int i = 0; i < a; i++)
    {
        for (int  j = 0; j < c; j++)
        {
            sum = 0;
            for (int k = 0; k < b; k++)
            {
                sum += A[i][k] * B[k][j];
            }
            R[i][j] = sum;
        } 
        
    }
    
    cout<<"Result"<<endl;
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout<<R[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int m,n,p,q;
    // Matrix A
    cout<<"Enter Row size of Matrix A: ";
    cin>>m;
    cout<<"Enter Column size of Matrix A: ";
    cin>>n;
    int A[m][10];
    cout<<"Enter elements of Matrix A"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>A[i][j];
        }
    }

    // Matrix B
    cout<<"Enter Row size of Matrix B: ";
    cin>>p;
    cout<<"Enter Column size of Matrix B: ";
    cin>>q;
    if (n != p)
    {
        cout<<"Column size of A matrix and Row size of B matrix must be equal"<<endl;
        return 0;
    }
    
    int B[p][10];
    cout<<"Enter elements of Matrix A"<<endl;
    for (int i = 0; i < p; i++)
    {
        for (int j = 0; j < q; j++)
        {
            cin>>B[i][j];
        }
    }
    
    MatrixMultiply(A,B,m,n,q);
}