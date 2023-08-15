#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void merge(vector<int> &arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int> temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
           
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;b

    }
    for(int i=low;i<=high;i++){
       arr[i]=temp[i-low];
    }
}

void mergeSort(vector<int> &arr,int low,int high){
    if(low>=high) return;
    
    int mid=(low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

// void insertion_sort(vector<int> &arr,int n){
//     for(int i=0;i<n;i++){
//         int j=i;
//         while(j>0 && arr[j-1]>arr[j]){
//             int temp = arr[j - 1];
//             arr[j - 1] = arr[j];
//             arr[j] = temp;
//             j--;
//         }
//     }
// }

void insertion_sort(vector<int> &arr,int n){
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
}


int main(){
    vector<int> arr={9, 4, 7, 6, 3, 1, 5} ;
    int size=7;
    // mergeSort(arr,0,arr.size()-1);
    insertion_sort(arr,size);
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
   
    return 0;
}