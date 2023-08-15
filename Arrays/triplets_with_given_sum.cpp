#include<iostream>
using namespace std;
#include<vector>


int main(){
    vector<int>arr={1 ,2, 3, 1, 2, 3};
    int K=6;
    vector<int>v;
    
	for(int i=0;i<arr.size();i++){
		for(int j=i+1;j<arr.size();j++){
			for(int k=j+1;k<arr.size();k++){
				if(arr[i]+arr[j]+arr[k]==K && i!=j && j!=k && k!=i)
				{
					v.push_back(arr[i]);
					v.push_back(arr[j]);
					v.push_back(arr[k]);
					
				}
			}
		}
	}
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    return 0;
}