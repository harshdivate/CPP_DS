#include<iostream>
using namespace std;

int main(){

    int arr[5]={2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;
    int swap=0;
    while (start<=end){
        if(start!=end){
            swap=arr[start];
            arr[start]=arr[end];
            arr[end]=swap;
        }
        start++;
        end--;
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    
    return 0;
}