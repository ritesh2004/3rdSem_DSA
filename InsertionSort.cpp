#include<bits/stdc++.h>
using namespace std;

void insertionSort(int arr[],int n){
    int key,j;
    for (int i = 1; i < n; i++)
    {
        /* code */
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j]>key )
        {
            /* code */
            arr[j+1] = arr[j];
            j = j - 1;
        }
        arr[j+1] = key;
    }
}

int main(){
    int arr[5] = {5,4,3,2,1};
    int size = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr,size);
    cout<<"---------- Sorted Array -----------"<<endl;
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}