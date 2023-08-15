#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=1;

    while(rows<=n){
        int col=1;
        int len=n-rows+1;
        while(col<=len){
            cout<<"X";
            col++;
        }
        rows++;
        cout<<"\n";
    }


}