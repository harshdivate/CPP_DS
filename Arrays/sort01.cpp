#include<iostream>
using namespace std;


int main(){


    int arr[6]={0,1,1,0,0,1};
    int size=sizeof(arr)/sizeof(int);

    int i=0;
    int j=size;
    while(i<j){
        if(arr[i]==0){
            i++;
        }
        if(arr[j]==1){
            j--;
        }
        if(arr[i]==1 && arr[j]==0){
            arr[j]=1;
            arr[i]=0;
            i++;
            j--;
        }

    }
    for(int k=0;k<size;k++){
        cout<<arr[k]<<endl;
    }

    return 0;
}