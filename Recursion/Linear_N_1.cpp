#include<iostream>
using namespace std;


void linear_p(int n){
    cout<<n<<endl;
    n--;
    if(n==0) return;
    linear_p(n);
}

int main(){
    int n=13;
    linear_p(n);
    return 0;
}