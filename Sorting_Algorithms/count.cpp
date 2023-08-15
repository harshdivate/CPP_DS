#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// vector<int> countFrequency(int x, vector<int> &arr){
//     // Write your code here.
//     vector<int> temp;
//     int hash[100000];
//     for(int i=0;i<arr.size();i++){
//         hash[arr[i]]++;
//     }
//     for(int i=0;i<arr.size();i++){
//         temp[i]=hash[arr[i]];
//     }
//     return temp;
// }

int main(){
    vector<int> arr={1,3,1,9,2,7};
    int s=arr.size();
    int n=6;


    vector<int> temp(n);
    map<int,int> mpp;
    for(int i=0;i<s;i++){
        mpp[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        temp[i]=mpp[arr[i+1]];
    }
    cout<<mpp[1]<<endl;
    for(int i=0;i<n;i++){
        cout<<"I is "<<i+1<<" frequency is "<<temp[i]<<" "<<endl;
    }

     


    return 0;
}