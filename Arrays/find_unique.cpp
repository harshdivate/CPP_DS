#include<iostream>
using namespace std;

int main(){
//     9
// 1 3 1 3 6 6 7 10 7
    // int arr[9]={1,3,1,3,6,0,7,6,7};
    int arr[5]={2, 4 ,7 ,2, 7};
    
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int unique_index=0;
    while(start<size){
        int element=arr[start];
        int count=0;
        for(int i=0;i<size;i++){
            if(arr[i]==element && i!=start){
                count++;
            }
        }
        if(count==0){
            cout<<arr[start]<<endl;
        }
        start++;
        
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}



// int count=0;
//         for(int i=0;i<size;i++){
//             if(arr[i]==element && i!=){
//                 arr[i]=0;
//             }
//         }