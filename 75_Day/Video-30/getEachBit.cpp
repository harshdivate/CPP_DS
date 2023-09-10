#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int n=5;
    while(n>=0){
        cout<<"N Value is"<<n<<endl;
        int bit=n&1;
        n=n<<1;
        
        cout<<"Bit "<<bit<<endl;
    }
    return 0;
}