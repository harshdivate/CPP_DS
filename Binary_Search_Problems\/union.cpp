#include<iostream>
using namespace std;
#include<bits/stdc++.h>

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    vector<int> temp;
    
    int i=0;
    int j=0;
    int n=a.size();
    int m=b.size();
    while(i<n && j<m){
        if(a[i]==b[j])
        {
            temp.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j] && temp.back()!=b[j]){
            temp.push_back(b[j]);
            j++;
        }
        else if(b[j]>a[i] && temp.back()!=a[i])
        {
           
            temp.push_back(a[i]);
            i++;
            
            
        }
    }
    while(i<a.size()){
        if(temp.back()!=a[i]){
            temp.push_back(a[i]);
           
        }
         i++;
       
    }
    while(j<b.size()){
        if(temp.back()!=b[j]){
            temp.push_back(b[j]);
        }
        
        j++;
    }
    return temp;
}

int main(){
    vector<int> arr={1,2,3,4,5};
    vector<int> b={2,3,5};
    vector<int>temp=sortedArray(arr,b);
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
}