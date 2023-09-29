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
        cout<<"Data deleted"<<value<<endl;
    }

    void push(int data){
        if(top==NULL){
            Node* newHead=new Node(data);
            top=newHead;
        }else{
            Node* newInsert=new Node(data);
            newInsert->next=top;
            top=newInsert;
        }
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
            return;
        }else{
            Node* temp=top;
            top=top->next;
            temp->next=NULL;
            delete temp;
        }
    }
    int peek(){
        if(top==NULL){
            cout<<"Stack is empty"<<endl;
            return -1;
        }
            return top->data;
    }

    bool isEmpty(){
        if(top==NULL){
            return true;
        }
        return false;
    }
    void print(){
        Node* temp=top;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
};

int main(){
    Node* s;
    s->push(100);
    s->push(200);
    s->push(300);
    
    s->print();
    cout<<"PEeak"<<s->peek()<<endl;
    s->pop();
    s->pop();
    s->pop();
    s->pop();
    s->print();
    cout<<"Stack is Empty?"<<s->isEmpty()<<endl;
    return 0;
}

