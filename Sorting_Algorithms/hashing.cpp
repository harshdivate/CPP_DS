#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int count(vector<int> &arr,int n,int number){
    int hash[13]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
}   
    return hash[number];

}

int main(){
    vector<int> arr={1,3,2,1,3};
    int n=arr.size();
    int number;
    cout<<"Enter number"<<endl;
    cin>>number;
    int ans=count(arr,n,number);
    cout<<"Answer"<<ans<<endl;
    return 0;
}