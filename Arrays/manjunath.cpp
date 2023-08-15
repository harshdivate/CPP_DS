#include<iostream>
using namespace std;


void makeZero(int arr[],int size,int index,int prod){
    cout<<"Inside makeZero"<<endl;
    cout<<index<<endl;
    for(int i=0;i<size;i++){
        if(i!=index){
            arr[i]=0;
        }
        else{
            arr[index]=prod;
        }
    }
}

void makeAllZero(int arr[],int size){
    for(int i=0;i<size;i++){
        arr[i]=0;
    }
}
int main(){

    int arr[5]={2,5,3,2,1};
    
    int size=sizeof(arr)/sizeof(int);
    int product=1;
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count++;
        }
    }
    cout<<"Count is"<<count<<endl;
    
    for(int i=0;i<size;i++){
        if(arr[i]!=0){
            product=product*arr[i];
        }
        
    }
    for(int i=0;i<size;i++){
        if(count==1 && arr[i]==0){
            makeZero(arr,size,i,product);
            cout<<"Breaking";
            break;
        }
        else if(count>1){
            makeAllZero(arr,size);
            cout<<"Breaking Make ALl Zero"<<endl;
            break;
        }
        else{
            cout<<"In else loop"<<endl;
            arr[i]=product/arr[i];
        }
    }
    // cout<<product<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    return 0;

}