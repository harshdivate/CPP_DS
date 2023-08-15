#include<iostream>
using namespace std;


int fibonacci(int n){
    int a=0,b=1;
    int next_ans=0;
    for (int i=3;i<=n;i++){
        next_ans=a+b;
        a=b;
        b=next_ans;
    }
    return next_ans;

}
int main(){

    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int nth_term=fibonacci(n);
    cout<<nth_term;
    return 0;
}