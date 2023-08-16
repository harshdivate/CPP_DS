#include<iostream>
using namespace std;



int factN(int n){
    if(n==0) return 1;
    return n*factN(n-1);
}
int main(){
    int n=4;
    int ans=factN(n);
    cout<<"Answer is \t"<<ans<<endl;
    return 0;
}