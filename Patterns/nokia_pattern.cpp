#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int counter=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){
            cout<<counter;
            if(j<i){
                cout<<"*";
            }
            counter++;
        }// for(int k=)
        cout<<endl;
        
       
        // for(int j=i;j>=1;j--){
        //     cout<<counter;
        //     counter--;
        // }
        // cout<<endl;
    }


    // for(int i=4;i>=1;i--){
    //     int beginning=counter-(i);
    //     for(int j=1;j<=i;j++){
    //         cout<<beginning;
    //         if(beginning!=1){
    //             cout<<"*";
    //         }
            

    //         beginning++;
    //         counter--;
    //     }
    //     cout<<endl;
    // }
    for(int i=n;i>=1;i--){
        // int beginning=
        for(int j=1;j<=i;j++){

            cout<<counter-(i-j+1);
            if(i>j){
                cout<<"*";
            }
            
        }
       counter=counter-i;
        cout<<endl;
    }
    cout<<counter;

    return 0;
}