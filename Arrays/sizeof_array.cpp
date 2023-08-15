#include<iostream>
using namespace std;


void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<"Value of index is"<<arr[i]<<endl;
    }
}
int  main(){
    int myarr[10]={1,2,3,4,5,6,7,8,9,10};
    cout<<sizeof(myarr);
    printArray(myarr,10);
    return 0;
}