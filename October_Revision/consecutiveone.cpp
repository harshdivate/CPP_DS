#include<iostream>
using namespace std;

#include<bits/stdc++.h>

int consecutiveOnes(vector<int>& arr){
    int maxlen=INT_MIN;
    
    for(int i=0;i<=arr.size();i++){
        if(arr[i]==1){
            int len=1;
            for(int j=i+1;j<=arr.size();j++){
                if(arr[j]==1){
                    len++;
                    
                }
                if(arr[j]==0){
                    maxlen=max(maxlen,len);
                    cout<<"Max Len"<<maxlen;
                    break;
                }
            }
        }
    }
    return maxlen;
}


int main(){
    vector<int> arr={0,1,1,0,1,1,1};
    int ans=consecutiveOnes(arr);
    cout<<ans<<endl;
    return 0;
}