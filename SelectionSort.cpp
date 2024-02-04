#include<bits/stdc++.h>
using namespace std;

void selectionSort(int arr[],int n){
    int min;
    for (int i = 0; i <= n-2; i++)
    {
        /* code */
        min = i;
        for (int j = i; j <= n-1; j++)
        {
            /* code */
            if (arr[min] > arr[j])
                min = j;
        }
        swap(arr[min],arr[i]);
    }
    
}

void swap(int a,int b){
    int temp = b;
    b = a;
    a = temp;
}

int main(){
    int arr[10],n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    selectionSort(arr,n);
    cout<<"-------- Sorted Array ---------"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}