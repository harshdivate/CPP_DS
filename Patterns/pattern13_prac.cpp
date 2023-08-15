#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=0;
    while(rows<n){
        int cols=0;
        while(cols<=rows){
            char ch='A'+rows;
            cout<<ch;
            cols++;
        }
        cout<<"\n";
        rows++;
    }

}