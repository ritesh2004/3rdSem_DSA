#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[],int i,int n){
    int largest = i;
    int left = 2*i + 1;
    int right = 2*i + 2;
    if (left < n && arr[left] > arr[largest])
    {
        /* code */
        largest = left;
    }
    if (right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if (largest != i){
        swap(arr[i],arr[largest]);
        heapify(arr,largest,n);
    }
}

void heapSort(int arr[],int n){
    for (int i = n/2 - 1; i >= 0; i--)
    {
        /* code */
        heapify(arr,i,n);
    }
    for (int i = n-1; i > 0; i--)
    {
        /* code */
        swap(arr[0],arr[i]);
        heapify(arr,0,i-1);
    }
    
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
    heapSort(arr,n);
    cout<<"---------- Sorted Array -----------"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
}