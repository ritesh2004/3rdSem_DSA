#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int low,int mid,int high){
    int temp[20];
    int left = low;
    int right = mid + 1;
    int k = 0;
    while (left <= mid && right <= high)
    {
        /* code */
        if (arr[left] <= arr[right])
        {
            /* code */
            temp[k] = arr[left];
            k++;
            left++;
        }
        else{
            temp[k] = arr[right];
            k++;
            right++;
        }
    }

    while (left <= mid)
    {
        /* code */
        temp[k] = arr[left];
        k++;
        left++;
    }

    while (right <= high)
    {
        /* code */
        temp[k] = arr[right];
        k++;
        right++;
    }
    
    for (int i = low; i <= high; i++)
    {
        /* code */
        arr[i] = temp[i - low];
    }
}


void mergeSort(int arr[],int low,int high){
    if (low == high)
        return;
    int mid = (low + high) / 2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
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
    mergeSort(arr,0,n-1);
    cout<<"------------ Sorted Array -----------"<<endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}