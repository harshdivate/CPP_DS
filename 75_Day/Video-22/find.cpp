#include<iostream>
using namespace std;
#include<bits/stdc++.h>


string removeDuplicates(string s) {
        int i=0;
        int j=i+1;
        while(j<=s.size() && j<=s.length()){
            if(s[i]==s[j]){
                s.erase(s[i]);
                s.erase(s[j]);
            }else{
                i++;
                j++;
            }
        }
    return s;
}

int compress(vector<char>& chars) {

        // Just return the length of the new array 
        // create a new array of [26] members;
        // map all the elements to that array/
        // now iterate the new array is count is 
        //greater than 2 then increase the counter


        int arr[26]={0};
        for(int i=0;i<chars.size();i++){
            int index=chars[i]-'a';
            arr[index]++;
        }
        int counter=0;
        for(int i=0;i<26;i++){
            if(arr[i]>1){
                counter++;
            }
        }
        cout<<"Counter value is"<<counter<<endl;
        return counter*2;
        
    }

int main(){
    vector<char> chars = {'a','a','b','b','c','c','c'};
    int ans=compress(chars);
    cout<<ans;
    
    return 0;
}