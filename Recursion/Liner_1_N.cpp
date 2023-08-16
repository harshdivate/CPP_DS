#include<iostream>
using namespace std;


void linear_p(int i,int n){
    cout<<i<<endl;
    i++;
    if(i>n) return;
    linear_p(i,n);
}

int main(){
    int n=13;
    linear_p(1,n);
    return 0;
}