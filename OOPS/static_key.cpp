/*
Static Keyword:
Datamember which can be accessed from class without creating an object
*/

#include<iostream>
using namespace std;

class Hero{

    private:
    int health;

    public:
    char level;
    static int timetoComplete;
    //can only access static memebers
    static int random(){

    }

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

int Hero::timetoComplete=10;

int main(){
    Hero h;
    
    cout<<"Hero "<<Hero::timetoComplete<<endl;

    return 0;

}