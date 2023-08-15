#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    cout<<0<<endl;
    cout<<1<<endl;
        int a=0;
        int b=1;
        for(int i=2;i<=n;i++){
            int next=a+b;
            
            a=b;
            b=next;
            cout<<next<<endl;
            
        }
}