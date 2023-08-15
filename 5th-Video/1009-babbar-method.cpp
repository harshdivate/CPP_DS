#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int store=n;
    int count=0;
    int mask=0;
    while(n!=0){
        n=n>>1;
        count++;
    }
    while(count){
        mask=mask<<1;
        mask=mask|1;
        
        count--;
    }
    cout<<mask<<endl;
    int ans=mask&(~store);
    cout<<ans;
}