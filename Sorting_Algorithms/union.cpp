#include<iostream>
#include<bits/stdc++.h>
using namespace std;


vector < int > sortedArray(vector < int > &a, vector < int > &b) {
    // Write your code here
    int i=0;
    int j=0;
    vector<int> temp;
    
    int asize=a.size();
    int bsize=b.size();
    while(i<asize && j<bsize){
        if(a[i]==b[j]){
            temp.push_back(a[i]);
            i++;
            j++;
        }
        else if(a[i]>b[j]){
            // if(temp.size()==0){
            //      temp.push_back(b[j]);
            // }
            // else {

            
            // if(temp.back()!=b[j]){
            //     temp.push_back(b[j]);
            // }
            // }
            if(temp.size()!=0){
                if(temp.back()!=b[j]){
                    temp.push_back(b[j]);
                }
            }
            else{
                temp.push_back(b[j]);
            }
           
            j++;

        }
        else {
            if(!temp.empty()){
                if(temp.back()!=a[i]){
                     temp.push_back(a[i]);
                }
            }
            else{
                 temp.push_back(a[i]);
            }
           
            i++;
        }
        for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
    }
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }

    while(i<a.size()){
        if(a[i]!=temp.back()){
             temp.push_back(a[i]);
            
        }
         i++;
    }

  while(j<b.size()){
        if(b[j]!=temp.back()){
             temp.push_back(b[j]);
           
        }
         j++;
    }
    return temp;
    
    
}
int main(){
    vector<int> arr={1,1,2,3,5,5,5,10,10};
    vector<int> b={2,4,7,10,10};

 
    vector<int> temp =sortedArray(arr,b);
    cout<<"Final Answer is"<<endl;
    cout<<"-------------------------------"<<endl;
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
    return 0;

}