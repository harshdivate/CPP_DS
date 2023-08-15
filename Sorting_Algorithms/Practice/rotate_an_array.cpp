#include<iostream>
#include<bits/stdc++.h>
using namespace std;



/** 
 * ! Rotate an Array by d Places 
 * ! Brute Force Approach : 
 * ! First will store the d elements in an temporary array
 * ! Then from d+1 till n will make the elements move from d to 0 and so on 
 * ! At last from d+1 to n will push the temporary array elements
*/

void rotateArray(vector<int> &arr,int n,int d){
    vector<int> temp;
    for(int i=0;i<d;i++){
        temp.push_back(arr[i]);
    }
    
    
    for(int i=0;i<n-d;i++){
        arr[i]=arr[i+d];
    }
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-n+d];
    }
}

/**
 * ! Optimal Solution 
 * ! First Rotate the array from from 0 to d 
 * ! then rotate the remaining array 
 * ! then from 0 to n rotate the array
*/


void reverse_array(vector<int> &arr,int start,int end){
    while(start<=end){
        int temp=arr[start];
        arr[start]=arr[end];
        arr[end]=temp;
        start++;
        end--;
    }
}
void optimal(vector<int> &arr,int n,int d){
    reverse_array(arr,0,d-1);
    reverse_array(arr,d,n-1);
    reverse_array(arr,0,n-1);
}


int main(){
    vector<int> arr={1,2,3,4,5,6,7};
    int n=arr.size();
    int d=3;


    // rotateArray(arr,n,d);
    optimal(arr,n,d);

    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}