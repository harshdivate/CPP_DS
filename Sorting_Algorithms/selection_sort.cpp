#include<iostream>

using namespace std;

void selection_sort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        int min=i;
        int value=0;
        for(int j=i;j<=n-1;j++){
            if(arr[j]<arr[min]){
               min=j;
               
            }
        }
        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
        
    }
}

void bubble_sort(int arr[],int n){
    for(int i=n-1;i>=1;i--)
        for(int j=0;j<=i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }



int main(){
    int arr[7]={10,12,2,40,11,3,22};
    int n=sizeof(arr)/sizeof(int);
    
    //selction sort begin
    // selection_sort(arr,n);
    bubble_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
}