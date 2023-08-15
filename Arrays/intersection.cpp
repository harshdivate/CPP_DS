#include <bits/stdc++.h> 
#include<iostream>
#include <vector>   
using namespace std; 

int main(){
    int m= 6;int n= 4;
    
    std::vector< int > v;
    int arr1[6]={1 ,2 ,2 ,2, 3, 4};
    int arr2[4]={2 ,2 ,3 ,3};
    
	if(m>n){
		


int arr1_index=0;
		int arr2_index=0;
		while(arr2_index<n){
		
		int element=arr2[arr2_index];
		for(int i=0;i<m;i++){
			if(element^arr1[i]==0){
				v.push_back(element);
				arr1_index++;
				arr2_index++;
			}
			else{
				i++;
			}
		}
	}
	}




    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}

	
	
	// Write your code here.
	
	
