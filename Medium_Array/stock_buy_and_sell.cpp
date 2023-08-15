#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> temp;
        if(prices.size()==1){
            return 0;
        }
        for(int i=0;i<prices.size();i++){
            int element =prices[i];
            if(i!=prices.size()-1){
                 for(int j=i+1;j<prices.size();j++){
                int diff=prices[j]-prices[i];
                if(diff>0){
                    temp.push_back(diff);
                }
            }
            }
           
        }
        cout<<"The size of tmep is"<<temp.size()<<endl;
         if (temp.empty()) {
            return 0;
        }
        int maxElement = INT_MIN; // Initialize maxElement with the first element
    
    for (int  i = 0; i < temp.size(); i++) {
        cout<<"Temp is"<<temp[i]<<endl;
        if (temp[i] > maxElement) {

            maxElement = temp[i];
        }
    }
    cout<<"Mx is"<<maxElement<<endl;
        // int profit=0;
        // for(int i=0;i<temp.size();i++){
        //     cout<<"Temp at "<<temp[i]<<endl;
        //     if(temp[i]>profit){
        //         profit=prices[i];
        //     }
        // }
        return maxElement;
    }
};

int main(){
    vector<int> v={3,2,6,5,0,3};
    Solution s= Solution();


    int ans=s.maxProfit(v);
    cout<<endl<<"Answer is"<<ans<<endl;
    return 0;
}