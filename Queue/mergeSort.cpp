#include<iostream>
using namespace std;
#include<bits/stdc++.h>

void merge(vector<int> &arr,int low,int mid,int high){
    int i=0;
    int j=mid+1;
    vector<int> temp;
    while(j<=high && i<=mid){
        if(arr[j]>arr[i]){
            temp.push_back(arr[i]);
            i++;
        }else{
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(j<=high){
        temp.push_back(arr[j]);
        j++;
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    // for(int i=0;i<temp.size();i++){
    //     cout<<temp[i]<<" ";
    // }
    
    for(int i=low;i<=high;i++){
        arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int low,int high){
    if(low>=high){
        return;
    }
    int mid=(high+low)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
     vector<int> arr = {9, 4, 7, 6, 3, 1, 5}  ;
    int n = 7;

    // cout << "Before Sorting Array: " << endl;
    // // for (int i = 0; i < n; i++) {
    // //     cout << arr[i] << " "  ;
    // // }
    // cout << endl;
    mergeSort(arr, 0, n - 1);
    cout << "After Sorting Array: " << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }
    cout << endl;
    return 0 ;
}