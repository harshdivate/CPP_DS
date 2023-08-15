#include<iostream>
using namespace std;

int main(){
    int a;
    int b;
    char op;
    cout<<"Enter the value of a";
    cin>>a;
    cout<<"Enter the value of b";
    cin>>b;
    cout<<"Enter opertor";
    cin>>op;
    switch(op){
        case '+':cout<<"The sum of a and b is";
                cout<<a+b;
                cout<<endl;
                break;

        case '-':cout<<"The minux";
                cout<<a-b;
                break;
        case '*':cout<<"the multiply";
                cout<<a*b;
                break;
    }

    return 0;
}