#include <bits/stdc++.h> 
#include<iostream>
using namespace std;

#include <bits/stdc++.h> 
bool checkPalindrome(string s)
{
    // Write your code here.
    
    vector<char> storage;
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90){
            //convert to lowecase and push
            char ch=tolower(s[i]);
            storage.push_back(ch);
        }else if(s[i]>=97 && s[i]<=122){
            storage.push_back(s[i]);
        }
    }
    // Now only characters are stored in vector;
    // Iterate through the vector 
    int n=storage.size()-1;
    for(int i=0;i<=n;i++){
        cout<<storage[i]<<""<<endl;
        if(storage[i]!=storage[n-i]){
            return false;
            
        }
    }
    return true;

}

int main(){
    bool ans=checkPalindrome("A1b22Ba");

    if(ans){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;

}