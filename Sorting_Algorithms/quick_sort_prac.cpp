#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int partition(vector<int> &arr,int low,int high){
    int pivot=arr[low];
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<= pivot && i <= high-1 ){
            i++;
        }
        while(arr[j]>pivot && j>=low-1){
            j--;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        
    }
    swap(arr[low],arr[j]);
        return j;
}
void qs(vector<int> &arr,int low,int high){
    if(low<high){
        int pI=partition(arr,low,high);
        qs(arr,low,pI-1);
        qs(arr,pI+1,high);
    }
}

int main(){
    vector<int> arr={4,6,2,5,7,9,1,3};
    int n=arr.size();
    qs(arr,0,n-1);
     for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int count=1;
    int num=16;
    while(num>1){
        count++;
        num=num/2;
    }
    cout<<"Count"<<count<<endl;
    return 0;
}