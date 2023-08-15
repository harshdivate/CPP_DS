#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int i=1;
    char str='A';
    while(i<=n){
        int j=1;
        while(j<=i){
            char x='A'+i-1;
            cout<<x;
            j++;
        }
        i++;
        cout<<endl;
    }


}