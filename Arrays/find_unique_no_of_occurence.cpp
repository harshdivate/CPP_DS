#include<iostream>
#include <vector>
using namespace std;


int main(){

        int arr1[10]= {1,2,2,1,1,3,4,4,4,4};
        std::vector< int > arr;
        int count_arr[1001]={};
        int size=sizeof(arr1)/sizeof(int);
        
        // arr.push_back(1);
        // arr.push_back(2);
        // arr.push_back(3);
        int start=0;
        while(start<size){
            int count=0;
            int element=arr1[start];
                for(int i=0;i<size;i++){
                    if(arr1[i]==element && arr1[i]!=0){
                        count++;
                        arr1[i]=0;
                    }
                }
                start++;
                if(count!=0){
                        arr.push_back(count);
                }
                
        }


    for(int i=0;i<size;i++){
    cout<<arr[i]<<endl;
}
    return 0;   
}