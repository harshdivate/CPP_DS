#include<iostream>
#include<bits/stdc++.h>
using namespace std;


void bubble_sort(vector<int> &arr,int n){
    for(int i=n-1;i>=1;i--){
       
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                //swap
                int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
        
    }   
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
vector<int> arr={13,46,24,52,20,9};
    int size=arr.size();
    bubble_sort(arr,size);
    return 0;

}