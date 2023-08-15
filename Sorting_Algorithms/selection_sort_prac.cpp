#include<iostream>
#include <bits/stdc++.h>
using namespace std;


void selection_sort(vector<int> &arr,int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        for(int j=i;j<=n-1;j++){
            if(arr[min]>arr[j]){
                min=j;
            }
            //swap code here
            int temp=arr[min];
            arr[min]=arr[i];
            arr[i]=temp;
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}


int main(){
    vector<int> arr={13,46,24,52,20,9};
    int size=arr.size();
    selection_sort(arr,size);
    return 0;
}