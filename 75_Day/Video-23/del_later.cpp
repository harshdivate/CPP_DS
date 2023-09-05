#include<bits/stdc++.h>
#include<iostream>
using namespace std;

vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    //find the first zeorth element index
    int zI=-1;
    for(int i=0;i<a.size();i++){
        if(a[i]==0){
            zI=i;
            break;
        }
    }
    if(zI==-1) return a;
    // now i have the first zeroth index
    int j=zI+1;
    while(j<a.size()){
        if(a[j]==0){
            j++;
        }
        //else it is non-zero element;
        //swap and increament the pointer
        else{
        swap(a[zI],a[j]);
        zI++;
        j++;

        }
    }
    return a;
}

int main(){
    vector<int> arr={7, 93, 0, 8, 15, 0, 0, 0, 0 ,0, 26, 0, 0, 0, 43, 90, 2, 0, 0, 0, 58, 94, 77, 45, 59, 19, 0 ,0 ,98, 0, 0, 0, 0, 0, 88, 0, 0, 0};
    int n=arr.size();
    vector<int> ans=moveZeros(n,arr);
    for(int i:ans){
        cout<<i<<" ";
    }
    return 0;
}