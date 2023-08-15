#include<iostream>
#include<bits/stdc++.h>
using namespace std;


// Brute Force method;
// Though Process
/**
 * ! Though Process : 
 * ! First count all the zeroes and store it in counter 
 * ! Then  store all the non-zero numbers in an temporary array or use can use the samme array 
 * ! Then how much the count is that many zeroes you add to end of array
 *
*/
void move_zeroes(vector<int> &arr,int n){
    int count=0;
    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count++;

        }
        else{
            temp.push_back(arr[i]);
        }
    }
    for(int i=0;i<=count;i++){
        temp.push_back(0);
    }
    for(int i=0;i<temp.size();i++){
        arr[i]=temp[i];
    }
}



/**
 * ! Optimal Solution using Two Pointer method
 * ! First pointer should point at the first zeroth (j) element and next pointer should point  (i) at next element from zeroth element
 * ! Check if the ith element is non-zero then swap the jth element and ith element and incerease both pointer if the ith element is also a zero then
 * ! simply increase the  ith pointer till it finds the non-zero element
 * 
*/

void optimal(vector<int> &arr,int n){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    int i=j+1;
    while(i<n){
        if(arr[i]!=0){
            // Swap 
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j++;
        }
        else{
            i++;
        }
    }


}
int main(){
    vector<int> arr={1,0,2,3,2,0,0,4,5,1};
    int n=arr.size();
    // move_zeroes(arr,n);
    optimal(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}