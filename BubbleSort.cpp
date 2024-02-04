#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int arr[],int l){
    for (int i = 0; i <= l-1; i++)
    {
        /* code */
        int isSwaped = 0;
        for (int j = 0; j <= l-i-1; j++)
        {
            /* code */
            if (arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isSwaped = 1;
            }
            if (isSwaped == 0)
                break;
        }
        
    }
    
}

void swap(int a,int b){
    a = a + b;
    b = a - b;
    a = a - b;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    BubbleSort(arr,n);
    cout<<"---------- Sorted Array ----------"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}