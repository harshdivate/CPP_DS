#include<iostream>
using namespace std;

void fun(int i,int n){
    if(i<1) return;
    fun(i-1,n);
    cout<<i<<endl;
}

int main(){
    int n=3;
    fun(n,n);
    return 0;
}