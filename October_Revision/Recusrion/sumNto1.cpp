#include<iostream>
using namespace std;

int findSum(int t,int n){
    if (t==n) return n;

    return t+findSum(t+1,n);
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int ans=findSum(1,n);
    cout<<"Answer is"<<ans<<endl;
    return 0;
}