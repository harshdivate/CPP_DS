#include<iostream>
using namespace std;

int main(){

    int arr[3]={1,2,2};
    int start=0;
    int size=sizeof(arr)/sizeof(int);
    cout<<"size is "<<size<<endl;
    cout<<(5^1^2^3^4^2)<<"Xor "<<endl;
    
    while(start<size){
        int element=arr[start];
       
        for(int i=0;i<size;i++)
        {
            


            if((arr[i]^element)==0 && i!=start){
                // cout<<"I is"<<arr[i]<<"   Element is "<<element<<" Adn i!=start is"<<(i!=start)<<endl;
                // cout<<"XOR ===    "<<(arr[i]^element)<<endl;
                // cout<<" Final answer "<<(arr[i]^element==0 && i!=start)<<endl;
                
                // cout<<"=============================================================="<<endl;
                cout<<"The final of final anser is"<<arr[i]<<endl;
                
            }
            
            
            
        }
        start++;
    }
    return 0;
}