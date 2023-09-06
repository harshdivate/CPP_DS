#include<iostream>
using namespace std;
#include<bits/stdc++.h>



int compress(vector<char>& chars) {

        // Just return the length of the new array 
        // create a new array of [26] members;
        // map all the elements to that array/
        // now iterate the new array is count is 
        //greater than 2 then increase the counter
        vector<char> temp;
        map<char,int> ans;
        for(int i=0;i<chars.size();i++){
            ans[chars[i]]++;
        }

        for(auto i:ans){
            temp.push_back(i.first);
            int t=i.second;
            if(t>1){
                string it=to_string(t);
                reverse(it.begin(),it.end());
                t=stoi(it);
            // 21 21%10 1
                while(t>0){
                    int value=t%10;
                    char ch='0'+value;
                    temp.push_back(ch);
                    t=t/10;
            }
            
            }
            
           
            
            
            // cout<<i.first<<" "<<i.second<<endl;
        }
        for(int i=0;i<temp.size();i++){
            chars[i]=temp[i];
        }

        return temp.size();
       
}
int main() {
    vector<char> arr={'a','b','b','b','b','b','b','b','b','b','b','b','b','b','b'};

    int ans=compress(arr);
    cout<<ans;
    for(auto i:arr){
        cout<<i<<endl;
    }
    return 0;
}