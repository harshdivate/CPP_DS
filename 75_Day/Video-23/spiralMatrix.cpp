#include<iostream>
using namespace std;
#include<bits/stdc++.h>


vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rows=matrix.size();
        int cols=matrix[0].size();
        vector<int> temp;
        int i=0,j=0;
        while(i<rows && j<cols){
            //print the rowws
            cout<<matrix[i][j]<<endl;
            i++;
            

        }

}
int main() {
    vector<vector<int>> arr={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    vector<int> ans;
    ans=spiralOrder(arr);
    return 0;
}