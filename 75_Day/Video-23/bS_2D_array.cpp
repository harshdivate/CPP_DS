#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    vector<int> temp;
    for(int i=0;i<10;i++){
        temp.push_back(i);
    }
    
    for(int i=2;i<10;i++){
        for(int j=i+1;j<10;j++){
            if(!(temp[j]==0)){
                if(j%i==0){
                    temp[j]=0;
                    
                }
            }
        }
    }
    int count=0;
    for(auto i:temp){
        if(i>1 && i!=0){
            count++;
        }
    }
    cout<<count;
    return 0;
}