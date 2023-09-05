#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int findLargestSum(int arr[][3],int row,int col){
    map<int,int> temp;
    for(int i=0;i<row;i++){
        int sum=0;
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
        }
        temp[i]=sum;
    }

    // Now my row and sum is sotread
    int maxi=0;
    for(auto it:temp){
        maxi=max(maxi,it.second);
    }
    return maxi;



}

int main() {
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int result=findLargestSum(arr,3,3);
    cout<<"Result"<<result<<endl; 
    return 0;
}