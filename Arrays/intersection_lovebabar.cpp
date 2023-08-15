#include<iostream>
#include <bits/stdc++.h> 
#include<vector>
using namespace std;


int main(){

    int m= 6;int n= 4;
    std::vector< int > v;
    int arr1[6]={1 ,2 ,2 ,2, 3, 4};
    int arr2[4]={2 ,2 ,3 ,3};

    if(m>n){
        int arr_index=0;
        while(arr_index<m)
        {
            int element=arr1[arr_index];
            for(int i=0;i<n;i++){
                if(element==arr2[i]){
                    v.push_back(element);
                    arr2[i]=INT_MIN;
                    break;
                }
            }
            arr_index++;
        }
    }
    else{




        int arr_index=0;
        while(arr_index<n)
        {
            int element=arr1[arr_index];
            for(int i=0;i<m;i++){
                if(element==arr2[i]){
                    v.push_back(element);
                    arr1[i]=INT_MIN;
                    break;
                }
            }
            arr_index++;
        }

    }

    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }


    return 0;
}