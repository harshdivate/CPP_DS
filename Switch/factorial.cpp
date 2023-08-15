#include<iostream>
using namespace std;

int factorial(int num){
    int ans=1;
    for (int i=num;i>=1;i--){
        ans=ans*i;
    }
    return ans;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    cout<<"Enter the value of r"<<endl;
    cin>>r;
    int nfact=factorial(n);
    

    int rfact=factorial(r);

    int nrfact=factorial(n-r);
    int lastans=nfact/(rfact*nrfact);
    cout<<lastans;
    return 0;
}