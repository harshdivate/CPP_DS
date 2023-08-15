#include <bits/stdc++.h>
using namespace std;



void Reverse(vector<int> &arr,int m){
    int low=m;
    int high=arr.size()-1;
    while(low<=high){
        //swap the numbers
        int temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
}
int main() {

    vector<int> arr = {27 ,14 ,25 ,10 ,19 ,23 ,29 ,15 ,15 ,19 } ;
    int n = arr.size();
    int m=2;

   Reverse(arr,m);
   for (int i = 0; i < n; i++) {
        cout << arr[i] << " "  ;
    }

    return 0 ;
}