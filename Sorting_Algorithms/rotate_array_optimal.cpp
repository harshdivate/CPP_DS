#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Reverse(vector<int> &arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}

void Rotatetoleft(vector<int> &arr,int n,int d){
    Reverse(arr,0,d-1);
    Reverse(arr,d,n-1);
    Reverse(arr,0,n-1);
}
int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int d=3;
    Rotatetoleft(arr,n,d);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}