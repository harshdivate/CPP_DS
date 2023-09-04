#include<iostream>
using namespace std;
#include<bits/stdc++.h>


void reversee(char str[]){
    int length=0;
    for(int i=0;str[i]!='\0';i++){
        length++;
    }
    int l=0;
    int h=length-1;
    while(l<=h){
        swap(str[l],str[h]);
        l++;
        h--;
    }
    cout<<"Reversed"<<str<<endl;
}

int main(){
    char str[20];
    cout<<"Enter your name"<<endl;
    cin>>str;
    reversee(str);
    return 0;
}