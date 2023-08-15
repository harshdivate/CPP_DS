#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=1;
    int printt=1;
    while(rows<=n){
        
        int col=1;
        while(col<=n-rows){
            cout<<" ";
            col++;
        }
        while(col<=n){
            cout<<printt;
            printt++;
            
            col++;
        }
        cout<<"\n";
        rows++;
    }


}