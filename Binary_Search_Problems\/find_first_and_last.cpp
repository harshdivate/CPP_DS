#include<iostream>

using namespace std;
#include <bits/stdc++.h> 

void firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int first_position=0;
    int last_postion=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==k){
            first_position=i;
            break;
        }
    }
    cout<<"First_position"<<first_position<<endl;
    for(int i=arr.size()-1;i>=0;i--){
        if(arr[i]==k){
            last_postion=i;
            break;
        }
    }
    cout<<"Last Position"<<last_postion<<endl;

    if(first_position==0 && last_postion==0){
      cout<<"The element does not exist"<<endl;
    }
    else{
        cout<<"The element does exist"<<endl;
        cout<<"The first position is "<<first_position<<endl;
        cout<<"The last position is"<<last_postion<<endl;
    }
    // return {first_position,last_postion};
}


int main(){
    vector<int> arr={0, 5, 5 ,4,4,4,6 ,6, 6};
    int n=arr.size();
    int k=4;
    firstAndLastPosition(arr,n,k);
    // for(int i:ans){
    //     cout<<i<<endl;
    // }
    return 0;
}