#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character\n";
    cin>>ch;
    if (ch>=48 && ch<=57){
        cout<<"This is numeric";
    }
    else if (ch>=65 && ch<=90){
        cout<<"This is Uppercase\n";
    }
    else if(ch>=98 && ch<=122){
        cout<<"This is lowercase\n";
    }
    else{
        cout<<"Enter correct value\n";
    }
}