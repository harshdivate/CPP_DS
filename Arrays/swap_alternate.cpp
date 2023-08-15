#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(int);
    int start=0;
    int end=size-1;
    while(start<size){
        if(start+1<size){
            swap(arr[start],arr[start+1]);
           
        }
        
        start+=2;
    }

    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}


// int main(){
//     int arr[5]={1,2,3,4,5};
//     int size=sizeof(arr)/sizeof(int);
//     int start=0;
//     int end=size-1;
//     while(start<size){
//         if(start!=size){
//             swap(arr[start],arr[start+1]);
           
//         }
//         else{
//             arr[start]=arr[size-1];
//         }
//         start+=2;
//     }

//     for(int i=0;i<size;i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }