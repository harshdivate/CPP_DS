#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr,int n){
    for(int i=0;i<arr.size();i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
        
    }
}

int main(){

    vector<int> arr={9, 4, 7, 6, 3, 1, 5};
    int n=arr.size();
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}