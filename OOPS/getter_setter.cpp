#include<iostream>
using namespace std;


class Hero{
    
    
    private:
    int health;

    public:
    char level;
    Hero(){
        cout<<"Constructor called"<<endl;
    }


    //parameterized constructor
    Hero(int health){
        this.fhealth=health;
    }

    void print(){
        cout<<"Level is "<<level<<endl;
    }

    int gethealth(){
        return health;
    }

    void setHealth(int t){
        health=t;
    }
};
int main(){
    //static allocation
    Hero h1;

    //dynamic allocation
    Hero *b=new Hero;
    cout<<"Health "<<b->gethealth()<<endl;
    cout<<"Level is "<<b->level<<endl;
    cout<<"The health before setting"<<h1.gethealth()<<endl;
    h1.setHealth(100);
    cout<<"The health after setting"<<h1.gethealth()<<endl;

    return 0;
}