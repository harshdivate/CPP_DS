#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void move(vector<int> &arr,int n){
    vector<int> temp;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;
        }
        if(arr[i]!=0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i< n-count;i++){
        arr[i]=temp[i];
    }
    for(int i=n-count;i<n;i++){
        arr[i]=0;
    }
}

void optimal_move(vector<int> &arr,int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }

    // After finding the first zero element place the ith index after the j;
    int i=j+1;
    while(i<=n-1){
        if(arr[i]!=0){
            // swap(arr[j],arr[i]);
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            j++;
            i++;

        }
        else if(arr[i]==0){
            i++;
        }
    }
}


int main(){
    vector<int> arr={1,0,2,3,2,0,0,4,5,1};
    int n=arr.size();
    int d=3;
    optimal_move(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}