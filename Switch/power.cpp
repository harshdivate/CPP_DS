#include<iostream>
using namespace std;

int pow(int a,int b){
    int ans=1;
    for(int i=1;i<=b;i++){
        cout<<ans<<endl;
        ans=ans*a;
    }
    return ans;
}
int main(){

    int a,b;
    int ans;
    cin>>a;
    cout<<"Enter b";
    cin>>b;
    ans=pow(a,b);
    cout<<ans;
    return 0;
}