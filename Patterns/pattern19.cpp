#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=1;
    while(rows<=n){
        int col=1;
        while(col<=rows-1){
            cout<<" ";
            col++;
        }
        while(col<=n){
            cout<<"*";
            col++;
        }
        cout<<"\n";
        rows++;
        
    }


}