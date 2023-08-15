#include<iostream>
using namespace std;
int main(){
    int n=432;
    int sum=0;
    int mul=1;
    while(n>10){
        int last=n%10;
        sum=sum+last;
        mul=mul*last;
        n=n/10;
    }
    sum=sum+(n%10);
    mul=mul*(n%10);
    int ans=mul-sum;
    cout<<endl;
    cout<<ans;
    cout<<"Hello my nameis ";

}