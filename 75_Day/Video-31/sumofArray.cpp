#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int  findSum(int arr[],int n){
    if (n<0){
        return 0;
    }
    return arr[n]+findSum(arr,n-1);
}
int main() {
    
    int arr[5]={1,2,3,4,5};
    int ans=findSum(arr,4);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}