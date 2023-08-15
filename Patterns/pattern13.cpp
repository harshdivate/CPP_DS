#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    // char ch='A';
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char ch='A'+i-1;
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }
}