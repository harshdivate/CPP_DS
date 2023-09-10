#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int a=10;
    int *p=&a;
    cout<<&a<<endl;
    cout<<*(p+1)<<endl;
    return 0;
}