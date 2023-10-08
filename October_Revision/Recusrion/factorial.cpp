#include<iostream>
using namespace std;

int findFactorial(int n){
    if (n==0) return 1;
    return n*findFactorial(n-1);
}

int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    int ans=findFactorial(n);
    cout<<"Answer is\t"<<ans<<endl;
    return 0;
}