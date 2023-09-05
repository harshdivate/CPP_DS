#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int main() {
    vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
    int row=arr.size();
    int col=arr[0].size();
    int ans[row][col];

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            ans[j][col-1-i]=arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;i<col;j++){
            cout<<ans[row][col];
        }
        cout<<endl;
    }


    return 0;
}