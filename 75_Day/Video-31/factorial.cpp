#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int findFactorial(int n){
    if (n==0) return 1;
    return n*findFactorial(n-1);
}
int main() {
    
    int n=10;
    int ans=findFactorial(n);
    cout<<"Answer is "<<ans<<endl;
    return 0;
}