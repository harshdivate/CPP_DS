#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int findFibonacci(int n){
    if (n==0){
        return 0;}
    if (n==1){
        return 1;
    }  
    
    return findFibonacci(n-1)+findFibonacci(n-2);
    
}
int main() {
    
    int n=5;
    int ans=findFibonacci(n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}