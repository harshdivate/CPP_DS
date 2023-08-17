#include<iostream>
using namespace std;
#include<bits/stdc++.h>



vector<string> findArmstrong(vector<int> &arr){
    vector<string> ans;
    for(int i:arr){
        int element=i;
        int sum=0;
        while(element>0){
            int remainder=element%10;
            sum+=pow(remainder,3);
            element=element/10;
        }
        if(sum==i){
            ans.push_back("It is an Armstrong number");
        }
        else{
            ans.push_back("It is not an Armstrong number");
        }
    }
    return ans;
}


int main(){
    vector<int> arr={153,371,205};
    vector<string> ans=findArmstrong(arr);
    for(string s:ans){
        cout<<s<<endl;
    }
    return 0;
}