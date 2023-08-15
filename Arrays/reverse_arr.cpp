#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    
    int swap=0;
    int len=size-1;
    for(int i=0;i<size/2;i++){
        if(i!=size/2){
            swap=arr[i];
            arr[i]=arr[size-1-i];
            arr[size-1-i]=swap;
        }
        
    }
    for(int i=0;i<=len;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}