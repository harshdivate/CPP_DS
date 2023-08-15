#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the  value of n";
    cin>>n;
    int rows=1;
    while(rows<=n){
        int col=1;
        while(col<=rows){
            char ch='A'+n-rows+col-1;
            cout<<ch;
            col++;
        }
        rows++;
        cout<<"\n";
    }
}