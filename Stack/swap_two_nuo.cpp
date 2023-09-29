#include<iostream>
using namespace std;


int main(){
    string a="harsh";
    string b="divate";
    //harshdivate a=a+b b=(0,a.length()-b.length()) ,a=a.length(),b.length()
    cout<<"A"<<a<<endl;
    cout<<"B "<<b<<endl;
    a=a+b;
    b=a.substr(0,a.length()-b.length());
    a=a.substr(b.length(),a.length());
    cout<<"A"<<a<<endl;
    cout<<"b"<<b<<endl;

    return 0;
}