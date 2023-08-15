#include<iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int flag=1;
    int i=2;
    while(i<n){
        if(n%i==0){
            flag=0;
            break;
        }
        else{
            i++;
        }
    }
    if(flag==1){
        cout<<"Prime number"<<endl;
    }
    else{
        cout<<"Not a prime number"<<endl;
    }
}