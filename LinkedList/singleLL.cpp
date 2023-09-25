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
    Node* newNode=new Node(data);
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &tail,int data){
    Node* lastNode=new Node(data);
    lastNode->next=tail->next;
    tail=lastNode;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}


int main(){
    Node* head=new Node(10);
    Node* tail=head;
    insertAtHead(head,11);
    insertAtTail(head,9);
    print(head);
    return 0;
}