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

void insertAtTail(Node* &head,int data){
    if (head==NULL){
        insertAtHead(head,data);
    }
    Node* newNode=new Node(data);
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    

}

void deletion(Node* &head,int position){
    if (position==1){
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        Node* todelete=head;
        temp->next=head->next;
        head=head->next;
        todelete->next=NULL;
        delete todelete;
    }
    else{
        Node* temp=head;
        int cnt=1;
        while(cnt<position){
            temp=temp->next;
            cnt++;
        }
        Node* todelete=temp->next;
        
        temp->next=temp->next->next;
        todelete->next=NULL;
        delete todelete;

    }
}

void print(Node* &head){
    Node* temp=head;
   do{
    cout<<temp->data<<" ";
    temp=temp->next;
   }while(temp!=head);
}

int main(){
    Node* head=NULL;
    insertAtHead(head,100);
    insertAtHead(head,200);
    insertAtHead(head,300);
    insertAtTail(head,99);
    deletion(head,1);
    
    print(head);

    return 0;
}