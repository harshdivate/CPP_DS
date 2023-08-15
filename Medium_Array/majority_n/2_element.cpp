#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &v) {
	// Write your code here
	map<int,int> key;
	for(int i=0;i<v.size();i++){
		int element=v[i];
		int counter=0;
		for(int j=0;j<v.size();j++){
			if(v[j]==element){
				counter++;
			}
		}
		key[element]=counter;
	}
	int nbytwo=v.size()/2;
	for(auto i:key){
		if(i.second>nbytwo){
			return i.first;
		}
	}
	return -1;
}


int main(){
    vector<int> v={-53, 75 ,56 ,56, 56 };
    int ans=majorityElement(v);
    cout<<"Answer is"<<ans<<endl;
    return 0;

}