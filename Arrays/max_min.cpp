#include<iostream>
using namespace std;



void MaxMin(int arr[],int size){
   
    int max=arr[0];
    int min=arr[0];
    for (int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Max Value is"<<max<<endl;
    cout<<"Min value is"<<min<<endl;
}
int main(){


    int myarr[4]={20,-4,11,1000};
    int size=sizeof(myarr)/sizeof(int);
    MaxMin(myarr,size);
    return 0;
}