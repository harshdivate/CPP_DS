#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int flag=1;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"Not Prime"<<endl;
            flag=0;
        }
        
    }
    if(flag==1){
        cout<<"Prime";
    }
    else{
        cout<<"Not Prime";
    }


}