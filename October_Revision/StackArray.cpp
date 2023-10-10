#include<iostream>
using namespace std;

class Stack{
    public:
    int size;
    int top;
    int *arr;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }


    void push(int data){
        if(size-top>1){
            top++;
            arr[top]=data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
        if(top==-1){
            cout<<"Stack underflow"<<endl;
        }
        else{
            arr[top]=0;
            top--;
        }
    }
    
    int peek(){
        if(top == -1){
            cout<<"Stack Underflow"<<endl;
            
        }else{
            return arr[top];
        }
        return -1;
    }

    void print(){
        if(top==-1){
            cout<<"Stack is empty"<<endl;
            return;
        }
        int tempTop=top;
        while(tempTop>=0){
            cout<<arr[tempTop]<<endl;
            tempTop--;
        }
    }
};

int main(){
    Stack s(10);
    s.push(100);
    s.push(200);
    s.push(300);
    s.print();

    return 0;
}