//const keyword
//object creation 
// const type function
// initialization list
/*
Const Member functions are those functions which are denied to change 
their data members of their class


*/
#include<iostream>
using namespace std;
class Name{
    public:
    int x;

    void setX(int x){
        this->x=x;
    }

    int  getX() const{
      
        return x;

    }
 
};

int main(){
    Name n;
    n.setX(10);
    cout<<n.getX()<<endl;
    return 0;
}