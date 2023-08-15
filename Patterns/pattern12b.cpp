#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int i=1;
    // char ch='A';
    while(i<=n){
        int j=1;
        while(j<=n){
            char ch='A'+(i+j-2);
            cout<<ch;
            j++;
        }
        i++;
        cout<<endl;
    }




}
