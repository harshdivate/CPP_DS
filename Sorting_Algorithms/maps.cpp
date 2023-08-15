#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr={1,2,2,3,1,4,5,12};
    int n=arr.size();
    string s="happyapple";


    //precompute
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        mpp[arr[i]]++;
    }
    
    //string hashing 
    map<char,int> mppc;
    for(int i=0;i<s.size();i++){
        mppc[s[i]]++;
    }
    cout<<mppc['p']<<"P"<<endl;
    int ans;
    cout<<"Enter the value to be searched"<<endl;
    cin>>ans;
    cout<<mpp[ans];
    return 0;
}