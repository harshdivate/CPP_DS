#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    int num=5;
    int *ptr=&num;
    num=num+1;
    cout<<*ptr<<endl;
    return 0;
}