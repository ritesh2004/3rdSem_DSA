#include<bits/stdc++.h>
using namespace std;

int LinearSearch(int search,int size, int arr[]){
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == search)
        {
            return i;
        }
        
    }
    return -1;
}

int main(){
    int arr[5] = {2,1,7,8,10};
    cout<<"Search element found at "<<LinearSearch(10,5,arr)<<endl;
    return 0;
}