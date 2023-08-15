#include<iostream>
using namespace std;
int main(){
    int amt;
    cout<<"Enter the amount";
    cin>>amt;
    int hundred;
    int fifty;
    int twenty;
    int one;
    switch(1){
        case 1:hundred=amt/100;
                amt=amt%100;
            
        case 2:fifty=amt/50;
                amt=amt%50;

        case 3:twenty=amt/20;
                amt=amt%20;
        case 4:one=amt/1;
                amt=amt%1;
                break;

    }

    cout<<"Hundreds is "<<hundred<<endl;
    cout<<"Fifty is"<<fifty<<endl;
    cout<<"Twenty is"<<twenty<<endl;
    cout<<"one is"<<one<<endl;
}