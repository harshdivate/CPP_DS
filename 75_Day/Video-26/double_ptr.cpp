#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
//First example
/*
   int first=8;
   int second=18;
   int *ptr=&second;
   *ptr=9;
   cout<<first<<" "<<second<<endl;

*/

// Second Example
    int first=6;
    // p is pointing to address of first
    int *p=&first;
    // 
    int *q=p;
    (*q)++;
    cout<<p<<endl;
    cout<<first<<endl;
    return 0;
}