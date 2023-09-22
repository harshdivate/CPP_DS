#include<iostream>
using namespace std;


//Interface: also called pure abstract classes

class Base{
    public:
    virtual void display()=0;
};

class Derived:public Base{
    public:
    void display(){
        cout<<"Harsh"<<endl;
    }
};
int main(){
    Base* b;
    Derived d;
    b=&d;
    b->display();
    return 0;
}