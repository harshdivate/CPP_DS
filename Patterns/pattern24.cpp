#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=1;
    while(rows<=n){
        int col=1;
        while(col<=n-rows){
            cout<<" ";
            col++;
        }
        while(col<=n){
            cout<<col;
            col++;
        }

        int start=rows-1;
        while(start){
            cout<<start;
            start--;
        }
        
        
        rows++;
        cout<<"\n";
    }

}