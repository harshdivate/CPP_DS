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
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Deleted the Data"<<value<<" ";
    }
};

void insertAtHead(Node* &head,int d){
    Node* newInsert=new Node(d);
    if(head==NULL){
        newInsert->next=newInsert;
        head=newInsert;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=newInsert;
    newInsert->next=head;
    head=newInsert;
}

void print(Node* &head){
    Node* temp=head;
   do{
    cout<<temp->data<<" ";
    temp=temp->next;
   }while(temp!=NULL);
}

int main(){
    Node* head=NULL;
    insertAtHead(head,100);
    print(head);

    return 0;
}