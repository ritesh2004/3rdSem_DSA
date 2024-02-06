#include<iostream>
using namespace std;

void TowerOfHanoi(int n,char source,char auxiliary,char destination){
    if (n == 1){
        cout<<"Move disk 1 from "<<source<<" to "<<destination<<endl;
        return;
    }
    TowerOfHanoi(n-1,source,destination,auxiliary);
    cout<<"Move disk "<<n<<" from "<<source<<" to "<<destination<<endl;
    TowerOfHanoi(n-1,auxiliary,source,destination);
}

int main(){
    int n;
    cin>>n;
    TowerOfHanoi(n,'S','H','D');
}