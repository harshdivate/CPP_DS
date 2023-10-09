#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node* prev;

    Node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node* newHead=new Node(data);
    head->prev=newHead;
    newHead->next=head;
    head=newHead;
}

void insertAtTail(Node* &head,int data){
    Node* newInsert=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newInsert;
    newInsert->prev=temp;
    
}

void insertAtPosition(Node* &head,int data,int position){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    Node* newInsert=new Node(data);
    if(temp->next==NULL){
        insertAtTail(head,data);
        return;
    }
    cout<<"Temp data"<<temp->data<<endl;
    newInsert->next=temp->next;
    newInsert->next->prev=newInsert;
    newInsert->prev=temp;
    temp->next=newInsert;
}


void deleteNode(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        head=temp->next;
        delete temp;
    }
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    
    curr->next->prev=prev;
    prev->next=curr->next;
    delete curr;
}


void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}


int main(){
    Node* head=new Node(100);
    Node* tail=head;
    insertAtHead(head,200);
    insertAtTail(head,90);
    insertAtHead(head,300);
    insertAtTail(head,80);
    insertAtPosition(head,999,6);
    print(head);
    deleteNode(head,3);
    print(head);
    return 0;
}