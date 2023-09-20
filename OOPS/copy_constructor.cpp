#include<iostream>
using namespace std;


class Hero{
    private:
    int health;

    public:
    Hero(){
        cout<<"Default constructor called"<<endl;
    }

    int getHealth(){
        return this->health;
    }

    void setHealth(int h){
        this->health=h;
    }

    char level;

    void print(){
        cout<<"Print method called"<<endl;
    }


};

int main(){
    Hero suresh;
    Hero r(suresh);
    cout<<"R heatlh"<<r.getHealth()<<endl;
    Hero *h=new Hero();
    h->setHealth(10);
    cout<<"Health"<<h->getHealth()<<endl;
    h->print();
    return 0;
}