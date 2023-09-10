#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int findPow(int n){
    
    if (n==0) return 1;
    return 2*findPow(n-1);
}
int main() {
    int n=1;
    int ans=findPow(n);
    cout<<"Answer is"<<ans<<endl;

    return 0;
}