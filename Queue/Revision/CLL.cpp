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
        cout<<"Deleted value is"<<value<<endl;
    }
};


void insertAtHead(Node* &head,int data){
    if(head==NULL){
        Node* newInsert=new Node(data);
        // cout<<"cmae here"<<endl;
        newInsert->next=newInsert;
        head=newInsert;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node* newHead=new Node(data);
    temp->next=newHead;
    newHead->next=head;
    head=newHead;
}

void insertAtTail(Node* &head,int data){
    if(head==NULL){
        insertAtHead(head,data);
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node* newHead=new Node(data);
    temp->next=newHead;
    newHead->next=head;
}

void insertAtPosition(Node* &head,int data,int position){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==head){
        insertAtTail(head,data);
        return;
    }
    Node* newInsert=new Node(data);
    newInsert->next=temp->next;
    temp->next=newInsert;

}

void deleteNode(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        Node* todelete=head;
        temp->next=head->next;
        head=head->next;
        todelete->next=NULL;
        delete todelete;
        return;
    }
  Node* temp=head;
  int cnt=1;
  while(cnt<position-1){
    temp=temp->next;
    cnt++;
  }
  Node* todelete=temp->next;
  temp->next=temp->next->next;
  todelete->next=NULL;
  delete todelete;
}

void print(Node* &head){
    Node* temp=head;
    do{
        cout<<temp->data<< " ";
        temp=temp->next;
    }while(temp!=head);
}
int main(){
    Node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,10);
    insertAtHead(head,15);
    insertAtHead(head,20);
    insertAtTail(head,2);
    
    insertAtPosition(head,33,3);
   print(head);
    cout<<endl;
    deleteNode(head,6);
    print(head);
    cout<<endl;
    return 0;
}