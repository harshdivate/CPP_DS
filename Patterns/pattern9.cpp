#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int i=1;
    char ch=65;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<ch;
            
            j++;
        }
        i++;
        ch++;
        cout<<endl;
    }


}
