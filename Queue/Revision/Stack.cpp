#include<iostream>
using namespace std;


class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }else{
            cout<<"stack overflow"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }else{
            cout<<"Data deleted is "<<arr[top]<<endl;
            top--;
        }
    }

    int peek(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;

        }
        else{
            return arr[top];
        }
        return -1;
    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

    void print(){
        int temp=top;
        while(temp>=0){
            cout<<arr[temp]<<" ";
            temp--;
        }
        }
    
};


int main(){
    Stack s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.pop();
    s.print();
    return 0;
}