#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int i=1;
    while(i<=n){
        int j=i;
        while(j<=i){
            cout<<i-j+1;
            j--;
        }