#include<iostream>
#include<vector>
using namespace std;

void reverseArray(vector<int> &arr,int i,int j){
    if (i>=j) return;
    swap(arr[i],arr[j]);
    reverseArray(arr,i+1,j-1);
}

int main(){
    vector<int> arr={1,2,3,4,5};
    int i=0,j=arr.size()-1;
    reverseArray(arr,i,j);
    for(int k=0;k<arr.size();k++){
        cout<<arr[k];
    }
    return 0;
}