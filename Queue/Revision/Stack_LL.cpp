#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node* top=NULL;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Data deleted is "<<value<<endl;
    }
    void push(int data){
        if(top==NULL){
            Node* newHead=new Node(data);
            top=newHead;
        }
        else{
            Node* newHead=new Node(data);
            newHead->next=top;
            top=newHead;
        }
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
        }
        else{
            Node* temp=top;
            top=top->nextl
            temp->next=NULL;
            delete temp;
        }

    }
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
        }
        else{
            return top->data;
        }
        return -1;
    }

    bool isEmpty(){
        if(top==NULL){
            return true;
        }
        return false;
    }
    void print(){
        
    }
}

int main(){
    Node* s;
    s.push(10);
    return 0;
}