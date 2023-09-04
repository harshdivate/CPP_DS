#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main(){
    char str[20];
    string name;
    cout<<"Enter your name"<<endl;
    cin>>str;
    int count=0;
    for(int i=0;i<20;i++){
        if(str[i]=='\0'){
            break;
        }else{
            count++;
        }
        cout<<"The count at"<<i<<"is"<<count<<endl;
    }
    cout<<"The lenght of string is "<<count<<endl;


    return 0;
}