#include <bits/stdc++.h>
using namespace std;

int BinarySearch(int search,int low, int high, int arr[]){  
    int mid = 0;  
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == search)
        {
            return mid;
        }
        else if (arr[mid] < search){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {1,2,3,4,5};
    int id = BinarySearch(1,0,4,arr);
    cout<<"Search Element found at "<<id<<endl;
    return 0;
}