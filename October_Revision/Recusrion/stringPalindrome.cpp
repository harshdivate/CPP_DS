#include<iostream>
using namespace std;

bool findPalindrome(string s,int i,int j){
    if(s[i]!=s[j]){
        return 0;
    }
    if(i>=j){
        return 1;
    }
    //equal aithi andra
    findPalindrome(s,i+1,j-1);
}

int main(){
    string s="vscodeedocsv";
    int i=0,j=s.length()-1;
    cout<<"Last Element"<<s[j]<<endl;
    bool ans=findPalindrome(s,i,j);
    if(ans){
        cout<<"Palindrome"<<endl;
    }else{
        cout<<"Not a palindrome"<<endl;
    }
    return 0;

}