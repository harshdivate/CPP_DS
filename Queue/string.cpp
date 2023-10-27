#include<iostream>
using namespace std;


int findR(string s){
    int size=s.length();
    int i=0;
    int j=size-1;
    int ans=-1;
    int f=0;
    int b=0;
    while(i<=j){
        
        cout<<s[i]<<s[j]<<endl;
        if(s[i]=='b' && s[j]=='b'){
            ans=j-i+1;
            break;
        }
        else{
            if(s[i]!='b' && s[j]!='b'){
                i++;
                j--;
            }else if(s[i]!='b'){
                i++;
            }else{
                j--;
            }
        }
    }
    return ans;
}

int main(){
    string s="aaaabbbbbbbbbcccccdddddd";
    int ans=findR(s);
    cout<<ans;
    return 0;
}