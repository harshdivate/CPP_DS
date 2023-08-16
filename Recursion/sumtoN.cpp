#include<iostream>
using namespace std;




// void sumtoN(int n,int sum){
//     if(n<1){
//         cout<<sum<<endl;
//         return;
//     }
//     sumtoN(n-1,sum+n);

// }

//*Method 2 

int sumtoN(int n){
    if(n==0) return 0;
    return n+sumtoN(n-1);
}

int main(){
    int n=10;
    int ans=sumtoN(10);
    cout<<"Answer is\t"<<ans<<endl;
    return 0;
}