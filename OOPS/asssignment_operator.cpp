#include<iostream>
using namespace std;

class Hero{
    private:
    int health;

    public:
    char level;

    void setLevel(char level){
        this->level=level;
    }
    char getLevel(){
        return level;
    }
    void setHealth(int health){
        this->health=health;
    }
    int getHealth(){
        return health;
    }
    void print(){
        cout<<"The heatlh is"<<health<<endl;
        cout<<"The level is"<<level<<endl;
    }
};
int main(){
    Hero h;
    h.setHealth(10);
    h.setLevel('C');
    h.print();
    Hero c;
    c.setHealth(100);
    c.setLevel('Z');
    c.print();
    cout<<"After Assigning"<< endl;
    h=c;
    h.print();
    c.print();
    return 0;
}