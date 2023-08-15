#include<iostream>
using namespace std;

int isPrime(int n){
    int flag=1;
    for(int i=2;i<n;i++){
        if(n%i==0){
            flag=0;
            break;
        }
    }
    if(flag==0){
        return 0;
    }
    else{
        return 1;
    }

}

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int ans=isPrime(n);
    if(ans){
        cout<<"Number is Prime"<<endl;
    }
    else{
        cout<<"Number is not Prime"<<endl;
    }

    return 0;

}