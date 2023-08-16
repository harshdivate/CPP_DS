#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Check if a given string is a palindrome or not 

// string checkPalindrome(string &s,int i,int l){
//     if(i>=l) return s ;
//     swap(s[i],s[l]);
//     return checkPalindrome(s,i+1,l-1);

// }

bool checkPalindrome(string &s,int i,int n){
    if(i>=(n/2)) return true;
    if(s[i]!=s[n-i]){
        return false;
    }
    return checkPalindrome(s,i+1,n);
}
int main(){
    string s;
    cout<<"Enter the string value"<<endl;
    cin>>s;
    string temp=s;
    bool ans=checkPalindrome(s,0,s.length()-1);

    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }


    return 0;

}