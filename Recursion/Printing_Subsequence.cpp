#include<iostream>
#include<bits/stdc++.h>
using namespace std;



void findSubSequence(int i,vector<int> &ans,vector<int> &arr,int n){
    if(i==n) {
        for(auto t:ans){
            cout<<t;
            
        }
        cout<<endl;
        return;
    }
    //Push the element 
    ans.push_back(arr[i]);
    // After taking the element find the subsequence 
    findSubSequence(i+1,ans,arr,n);
    //Remove the element 
    ans.pop_back();
    // After removing the element find the subsequence
    findSubSequence(i+1,ans,arr,n);
    
}

int main(){
    vector<int> arr={3,1,2};
    vector<int> ans;
    int n=arr.size();
    findSubSequence(0,ans,arr,n);
    return 0;
}