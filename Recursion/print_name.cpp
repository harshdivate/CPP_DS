#include<iostream>
using namespace std;



void func(int i,int n){
    cout<<"Harsh"<<endl;
    i++;
    if(i==n) return ;
    func(i,n);
}

int main(){
    int n=4;
    func(0,4);
    return 0;

}