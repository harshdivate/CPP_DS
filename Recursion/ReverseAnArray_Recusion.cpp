#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// void reverseArray(vector<int> &arr,int l,int r){
//     if(l>=r){
//         return;
//     }
//     swap(arr[l],arr[r]);
//     reverseArray(arr,l+1,r-1);
// }


//Reverse an Array using single variable 
void reverseArray(vector<int> &arr,int i,int n){
    if(i>=(n/2)){
        return ;
    }
    swap(arr[i],arr[n-i-1]);
    reverseArray(arr,i+1,n);

}



int main(){
    vector<int> arr={1,2,3,4,2};
    reverseArray(arr,0,arr.size());
    for(int i:arr){
        cout<<i<<endl;
    }
    return 0;
}