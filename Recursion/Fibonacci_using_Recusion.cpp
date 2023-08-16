#include<iostream>
using namespace std;


int findFibonacci(int n){
    if(n<=1) return n;
    return findFibonacci(n-1)+findFibonacci(n-2);
    
}
int main(){
    int n=11;
    int ans=findFibonacci(n);
    cout<<"Answer is"<<ans<<endl;
    return 0;
}