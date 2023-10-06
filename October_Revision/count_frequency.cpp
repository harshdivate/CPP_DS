#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &arr){
   vector<int> temp;
   unordered_map<int, int> map;
 
    for (int i = 0; i < n; i++)
        map[arr[i]]++;
 
    // Traverse through map and print frequencies
    for (auto x : map)
        cout << x.first << " " << x.second << endl;
    return temp;
}


int main(){

    vector<int> arr={11,14,8,3,12,14,1,7,4,3};
    int n=10,x=14;
    vector<int> m;
    m=countFrequency(n,x,arr);
    // for(int i=0;i<m.size();i++){
    //     cout<<m[i];
    // }
    return 0;
}