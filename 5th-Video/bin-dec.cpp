#include<math.h>
#include <iostream>
using namespace std;


int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int answer=0;
    int i=0;
    while(n!=0){
        int bit=n%10;
        if(bit!=0){
            answer=pow(2,i)+answer;
            
           
        }
        i++;
        n=n/10;
    }
    
    
    cout<<answer;

}