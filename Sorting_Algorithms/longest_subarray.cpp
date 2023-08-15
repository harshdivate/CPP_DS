#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){

    vector<int> arr={2,2,4,1,3};
    int n=arr.size();
    int k=2;
    vector<int> temp;
    for(int i=0;i<n;i++){
        int sum=0;
        int length=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            length++;
            if(sum==k){
                temp.push_back(length);
                
                break;
            }
            
        }


    }
    int max=temp[0];
    for(int i=0;i<temp.size();i++){
        if(temp[i]>max){
            max=temp[i];
        }
    }
    cout<<max;
    
    return 0;

}