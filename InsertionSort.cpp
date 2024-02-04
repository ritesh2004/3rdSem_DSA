#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    int j;
    for (int i = 0; i < n; i++)
    {
        /* code */
        j = i;
        while (j > 0 && arr[j-1] > arr[j] )
        {
            /* code */
            swap(arr[j-1],arr[j]);
            j = j - 1;
            cout<<"Runs"<<endl;
        }
    }
}

void swap(int a,int b){
    int temp = b;
    b = a;
    a = temp;
}

int main(){
    int arr[10];
    int size;
    cin>>size;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    
    insertionSort(arr,size);
    cout<<"---------- Sorted Array -----------"<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}