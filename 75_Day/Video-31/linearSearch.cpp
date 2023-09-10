#include<iostream>
using namespace std;
#include<bits/stdc++.h>


bool LinearSearch(int *arr,int size,int ele){
    if(size==0){
        return false;
    }
    if(arr[0]==ele){
        return true;
    }else{
        bool remainingPart=LinearSearch(arr+1,size-1,ele);
        return remainingPart;
    }

}
int main() {
    int arr[5]={2,4,5,1,44};
    int ele=2;
    bool ans=LinearSearch(arr,4,ele);
    if (ans) {
        cout<<"Found"<<endl;
    }
    
    return 0;
}