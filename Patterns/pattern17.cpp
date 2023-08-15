#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=1;
    while(rows<=n){
        int cols=1;
        while(cols<=n-rows){
            cout<<" ";
            cols++;
        }
        while(cols<=n){
            cout<<"*";
            cols++;
        }
        rows++;
        cout<<"\n";
    }
}