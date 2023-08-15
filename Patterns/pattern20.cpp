#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=1;
    while(rows<=n){
        int cols=1;
        // Space print
        while(cols<=rows-1){
            cout<<" ";
            cols++;
        }
        while(cols<=n){
            cout<<rows;
            cols++;
        }
        cout<<"\n";
        rows++;
    }


}