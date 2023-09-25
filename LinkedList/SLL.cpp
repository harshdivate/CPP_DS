//Single Linked List 
/*
  I
  I
[ 10 | -> ]


[12 | -> ]
[9 | ->Null]

*/

// Insertion into Singly Linked List

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
};

void insertAtHead(Node* &head,int data){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main(){
    Node* n=new Node(10);

    
    insertAtHead(n,100);
    insertAtHead(n,999);
    insertAtHead(n,212);
    print(n);
    // print(n);
    return 0;
}

