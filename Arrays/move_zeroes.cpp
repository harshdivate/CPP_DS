
#include<bits/stdc++.h>
using namespace std;
vector<int> moveZeros(int n, vector<int> &arr) {
    // Write your code here.

    vector<int> temp(arr.size());
    int j=0,zero_p=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zero_p=i;
            break;
        }
    }
    cout<<"The first zero element is "<<zero_p<<endl;

    j=zero_p+1;
    while(j<n)
    {
        if(arr[j]!=0){
            // int temp=arr[j];
            // 8arr[j]=arr[zero_p];
            // arr[zero_p]=temp;
            swap(arr[j],arr[zero_p]);
            zero_p++;
        }
            j++;
    //          for(int i=0;i<arr.size();i++){
    //             cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    }   

    for(int i=0;i<arr.size();i++){
        temp[i]=arr[i];
    }
    return temp;



}


int main(){
    #include <vector>

    vector<int> arr = {7, 93, 0, 8, 15, 0, 0, 0, 0, 0, 26, 0, 0, 0, 43, 90, 2, 0, 0, 0, 58, 94, 77, 45, 59, 19, 0, 0, 98, 0, 0, 0, 0, 0, 88, 0, 0, 0};

    int n=arr.size();
    vector<int> temp=moveZeros(n,arr);

    for(int i=0;i<temp.size();i++){
        cout<<temp[i]<<endl;
    }
    return 0;
}