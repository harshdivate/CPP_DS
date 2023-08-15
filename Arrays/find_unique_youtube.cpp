#include<iostream>
using namespace std;

int main(){

    int arr[7]={2, 3, 1, 6, 3, 6, 2};
    int size=sizeof(arr)/sizeof(int);
    int start=arr[0];
    for(int i=1;i<size;i++){
        start=start^arr[i];
    }
    cout<<start<<endl;
    return 0;
}