#include<bits/stdc++.h>
using namespace std;
#include<iostream>

vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    //Intituion
    // Take a element 
    // iterate over i+1 index check if is greater than 
    // all the element on its right
    // if true then push it to vecot
    vector<int> temp;
    for(int i=0;i<a.size();i++){
        int element=a[i];
        bool flag=true;
        for(int j=i+1;j<a.size();j++){
            if(element<=a[j]){
                flag=false;
                break;
            }
        }
        if(flag==true){
            temp.push_back(element);
        }
    }
    sort(temp.begin(),temp.end());
    return temp;
}


int main(){
    vector<int> a={142,145,41,13,41};
    vector<int> arr;
    arr=superiorElements(a);
    for(auto i : arr){
        cout<<i<<endl;
    }
    return 0;
}