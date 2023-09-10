#include<iostream>
using namespace std;
#include<bits/stdc++.h>

// [1 2 2 1]
// Element present at the last index is '1' and is a superior element since there are no integers to the right of it.
// Element present at index 2 (0-indexed) is '2' and is greater than all the elements to the right of it.
// There are no other superior elements present in the array.
// Hence the final answer is [1,2].
int findSuperior(vector<int> &ans){
    vector<int> a;
    vector<int> temp;
    for(int i=0;i<ans.size();i++){
        int ele=ans[i];
        int flag=1;
        for(int j=i+1;j<ans.size();j++){
            if(ans[j]>=ele){
                flag=0;
                break;
            }
        }
        if(flag==1){
            temp.push_back(ele);
        }

    }
    sort(temp.begin(),temp.end());
    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<< " ";
    }
    // return temp;
    
return 33;
}
int main() {
    vector<int> ans={1,2,3,2};
    int i=0;

    int as=findSuperior(ans);
    // cout<<as<<endl;
   

    return 0;
}