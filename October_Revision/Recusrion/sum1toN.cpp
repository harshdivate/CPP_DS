#include<iostream>
using namespace std;

int findSum(int n){
    if(n==0) return 0;
    return n+findSum(n-1);
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int ans=findSum(n);
    cout<<"Answer is"<<ans<<endl;
    return 0;
}