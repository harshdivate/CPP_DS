#include<iostream>
#include<bits/stdc++.h>
using namespace std;

pair<int,int> maxMin(vector<int> arr){
    map<int,int> ans;
    for(int i=0;i<arr.size();i++){
        ans[arr[i]]++;
    }
    //now all the frequency is stored in arr
    int maxi=INT_MIN,mini=INT_MAX;
    for(auto i:ans){
        maxi=max(maxi,i.second);
        mini=min(mini,i.second);
    }
    return make_pair(maxi,mini);
}

int main(){
    vector<int> arr={10,5,10,15,10,5};
    pair<int,int> a=maxMin(arr);
    cout<<a.first<<a.second<<endl;
    return 0;
}
