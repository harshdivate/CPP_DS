#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void rotateArray(vector<int> &arr,int n,int d){
    int temp[d];

    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }

    // Now shift the remainng elements from d+1 elements
    for(int i=0;i<n-d;i++)
    {
        arr[i]=arr[i+d];
    }
    // n-d =4
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-n+d];
    }
}

int main(){

    vector<int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int d=3;
    rotateArray(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    return 0;

}