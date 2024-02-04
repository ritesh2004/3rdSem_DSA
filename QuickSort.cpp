#include<bits/stdc++.h>
using namespace std;


int quick(int arr[],int low,int high){
    int pivot = low;
    int i = low;
    int j = high;
    while (i < j)
    {
        /* code */
        while (arr[i] <= arr[pivot] && i <= high)
        {
            /* code */
            i++;
        }
        while (arr[j] > arr[pivot] && j >= low)
        {
            /* code */
            j--;
        }
        if (i < j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;
    return j;
}

void quickSort(int arr[],int low,int high){
    if (low < high){
        int partition = quick(arr,low,high);
        quickSort(arr,low,partition-1);
        quickSort(arr,partition+1,high);
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
    quickSort(arr,0,n-1);
    cout<<"---------- Sorted Array ----------"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}