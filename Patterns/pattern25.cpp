#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    int rows=1;
    while(rows<=n){
        int col=1;
        while(col<=n-rows+1){
            cout<<col;
            col++;
        }
        int star=rows-1;

        while(star){
            cout<<"*";
            star--;;
        }

        
    //     int start = n - row + 1;
    //   while(start){
    //     cout<<start;
    //     start--;
    //   }
        star=rows-1;
        while(star){
            cout<<"*";
            star--;;
        }
        int endd=n-rows+1;
        while(endd){
            cout<<endd;
            endd--;
            // col++;
        }

        
        rows++;
        cout<<"\n";
    }


}
