#include<bits/stdc++.h>
using namespace std;

void MatrixAdd(int A[][10],int B[][10],int n, int m){
    int R[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            R[i][j] = A[i][j] + B[i][j];
        }
        
    }
    
    cout<<"Result"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<R[i][j]<<" ";
        }
        cout<<endl;
    }
    
}

int main(){
    int n,m;

    cout<<"Enter order of row: ";
    cin>>n;
    cout<<"Enter order of column: ";
    cin>>m;

    int A[n][10],B[n][10];
    cout<<"Enter element for A matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>A[i][j];
        }
        
    }

    cout<<"Enter element for B matrix"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>B[i][j];
        }
        
    }

    MatrixAdd(A,B,n,m);
    
}