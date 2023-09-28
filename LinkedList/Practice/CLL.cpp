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
    if(head==NULL){
        Node* newHead=new Node(data);
        head=newHead;
        return;
    }
    else{
        Node* temp=head;
        while(temp!=head){
            temp=temp->next;
        }
        Node* newInsert=new Node(data);
        newInsert->next=head;
        temp->next=newInsert;
        head=temp;
    }
    
}

void insertAtTail(Node* &head,int data){
    if(head==NULL){
        insertAtHead(head,data);
        return;
    }
    Node* newInsert=new Node(data);
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    newInsert->next=temp->next;
    temp->next=newInsert;

}

void insertAtPosition(Node* &head,int data,int position){
    if (position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==head){
        insertAtTail(head,data);
        return;
    }
    Node* newInsert=new Node(data);
    temp->next=newInsert;
    newInsert->next=temp->next;

}

void print(Node* head){
    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    while(temp!=head);
   
}

int main(){
    Node* head=NULL;
    
    insertAtHead(head,100);
    insertAtHead(head,200);
    insertAtTail(head,300);
    insertAtPosition(head,33,1);
   
    print(head);


    return 0;
}