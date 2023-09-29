#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }
}


void push(Node* &top,int data){
    if(top==NULL){
        Node* newInsert=new Node(data);
        top=newInsert;
    }
    else{
            if(top!=NULL){
            Node* newInsert=new Node(data);
            newInsert->next=top;
            top=newInsert;
            }else{
                cout<<"Stack Overflow"<<endl;
            }
            
        }


    void pop()

}