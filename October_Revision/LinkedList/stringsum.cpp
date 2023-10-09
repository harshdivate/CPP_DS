#include<iostream>
using namespace std;
#include<bits/stdc++.h>


    int compress(vector<char>& chars) {
        map<char,int> mpp;
        vector<char> ans;
        for(int i=0;i<chars.size();i++){
            mpp[chars[i]]++;
        }
        //now values are mapped such are a=2,b=2;

        int len=1;
        for(auto i:mpp){
            ans.push_back(i.first);
            ans.push_back(i.second);
            len++;
        }
        return len;
            }

int main(){

    vector<char> chars={"a","a","a","b","b","c","c"};
    int ans=compress(chars);
    cout<<"Asnwerse"<<ans<<endl;
    return 0;
}