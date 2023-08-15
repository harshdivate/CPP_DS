#include<iostream>
using namespace std;
int main(){
    char ch='A';
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=0;
    while(rows<n){
        int cols=0;
        while(cols<=rows){
            cout<<ch;
            ch++;
            cols++;
        }
        cout<<"\n";
        rows++;
    }
}