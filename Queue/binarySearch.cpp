#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int binaryearch(int arr[],int n ,int k){
    int i=0;
    int j=n-1;
    while(i<=j){
        int mid=(i+j)/2;
        if(arr[mid]==k){
            return mid;
        }
        if(arr[mid]>k){
            j=mid-1;
        }
        else{
            i=mid+1;
        }
    }
    return -1;
}

int main(){
    int arr[10]= {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n=sizeof(arr)/sizeof(int);
    int k=72;
    int index=binaryearch(arr,n,k);
    cout<<index;
    return 0;
}