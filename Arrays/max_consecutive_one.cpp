#include<iostream>
#include <bits/stdc++.h>
using namespace std;



int max_consecutive(std::vector<int> &arr,int n){
    int count=0;
    int temp_max=0;
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        else {
            if(count>temp_max){
                temp_max=count;
            }
            count=0;
            
        }
            

        
        cout<<"Count is"<<count<<endl;
    }
    return temp_max;

}
int main(){
    std::vector<int> arr={1,1,0,1,1,1,1};
    int size=arr.size();
    int max=max_consecutive(arr,size);
    // cout<<max<<endl;

    return 0;
}