#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    string s="happyapple";

    int n=s.size();
    char c;
   
    //Precompute
    // int hash[26]={0};
    // for(int i=0;i<n;i++){
    //     hash[s[i]-'a']++;
    // }

    // 
    int hash[256]={0};
    for(int i=0;i<s.size();i++){
        hash[s[i]]++;
    }

    cout<<"Enter Character"<<endl;
    cin>>c;
    cout<<hash['p']<<endl;
    return 0;
}