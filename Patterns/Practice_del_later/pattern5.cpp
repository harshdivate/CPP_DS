#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int i=1;
    int counter=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<counter;
            counter++;
            j++;
        }
        cout<<endl;
        i++;

    }
}