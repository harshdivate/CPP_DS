#include<iostream>
using namespace std;
#include<bits/stdc++.h>


int findCount(int n){
    if (n==1) return 1;
    return n+findCount(n-1);
}
int main() {
    
    int n=5;
    int ans=findCount(n);
    cout<<"Answers is "<<ans<<endl;
    return 0;
}