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
        cout<<"Value Deleted is"<<value<<endl;
    }
};

void insertAtHead(Node* &head,int data){
    Node* newHead=new Node(data);
    newHead->next=head;
    head=newHead;
}

void insertAtTail(Node* &tail,int data){
    Node* newTail=new Node(data);
    tail->next=newTail;
    tail=newTail;
}

void insertAtPosition(Node* &tail,Node* &head,int position,int data){
    if(position==1){
        insertAtHead(head,data);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position-1){
        cnt++;
        temp=temp->next;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    //otherwise insert at middle
    Node* newinsert=new Node(data);
    newinsert->next=temp->next;
    temp->next=newinsert;
}


void deleteNode(Node* &tail,Node* &head,int position){
    if(position==1){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    Node* curr=head;
    Node* prev=NULL;
    int cnt=1;
    while(cnt<position-1){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
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
    Node* node1=new Node(10);
    Node* tail=node1;
    insertAtHead(node1,20);
    insertAtHead(node1,30);
    insertAtTail(tail,9);
    insertAtPosition(tail,node1,3,33);
    
    print(node1);
    

    return 0;

}