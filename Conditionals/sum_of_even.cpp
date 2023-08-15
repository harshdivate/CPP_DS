#include <iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    int sum=0;
    cout<<"Enter the value of n";
    cin>>n;
    while(i<=n){
        if(i%2==0){
            sum=sum+i;
        }
        
        i++;
    }
    cout<<"The sum is "<<sum<<endl;
}