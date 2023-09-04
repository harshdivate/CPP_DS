#include<iostream>
using namespace std;
#include<bits/stdc++.h>

char findMaxChar(string name){
    int arr[26]={0};
    for(int i=0;i<name.length();i++){
        // name[i] i get either uppercase or lowercase 
        char lowerCase=tolower(name[i]);
        // Now the character is lowercase now i want to place it into array ;
        arr[lowerCase-'a']+=1;
    }
    int maxi=arr[0];
    char index=0;
    for(int i=0;i<26;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
            index=i+'a';

        }
        
    }
    return index;
}

int main(){
    string name="llllfffffggggggggwwwwwwwwwwwwwwwwwwwwwwwwwww";
    char ans=findMaxChar(name);
    cout<<"Ans is"<<ans<<endl;
    return 0;
}