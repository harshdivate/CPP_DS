#include<iostream>
using namespace std;
#include<bits/stdc++.h>
#include<utility>



pair<int,int> findElement(int arr[][3],int element,int row,int colums){
    for(int i=0;i<row;i++){
        for(int j=0;j<colums;j++){
            if(arr[i][j]==element){
                return make_pair(i,j);
            }
        }
    }
    return make_pair(-1,-1);
}
int main() {
    

    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    //Printing the array
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j];
    //     }
    //     cout<<endl;
    // }
    cout<<"Enter the element"<<endl;
    int element;
    cin>>element;
    pair<int,int > result=findElement(arr,element,3,3);
    if(result.first!=-1){
        cout<<"i\t:"<<result.first<<"j\t:"<<result.second<<endl;
    }else{
        cout<<"Element not found"<<endl;
    }
    return 0;
}