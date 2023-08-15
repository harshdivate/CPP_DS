#include<iostream>
using namespace std;


int bits(int n){
    int count=0;
    while(n!=0){
        if(n&1==1){
            count++;
        }
        n=n>>1;
    }
    return count;
}
int main(){

    int a,b;
    cin>>a>>b;
    int abit=bits(a);
    int bbit=bits(b);
    cout<<"Total bits"<<abit+bbit<<endl;

    return 0;

}