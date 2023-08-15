#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=0;
    // char ch='A';
    while(rows<n){
        int col=0;
        char ch='A'+rows;
        while(col<=rows){
            cout<<ch;
            ch++;
            col++;
        }
        rows++;
        cout<<"\n";
    }
}