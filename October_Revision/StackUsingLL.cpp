#include<iostream>
using namespace std;


class Node{
    public :
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
};

class Stack{
    public:

    Node *top;

    Stack(){
        top=NULL;

    }

    void push(int data){
        
        Node* newHead=new Node(data);
        newHead->next=top;
        top=newHead;
    }

    void pop(){
        if(top==NULL){
            cout<<"Stack Underflow"<<endl;
        }
        Node* temp=top;
        top=top->next;
        temp->next=NULL;
        delete temp;
    }

    int peek(){
        if(top==NULL){
            cout<<"Stack underflow"<<endl;
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
            cout<<temp->data<< " ";
            temp=temp->next;
        }
    }


};

int main(){
    Stack s;
    cout<<s.isEmpty()<<endl;
    s.push(100);
    s.push(200);
    s.push(300);
    s.print();
    s.pop();
    cout<<endl;
    s.print();
    return 0;
}