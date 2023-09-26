#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* prev;
    Node* next;

    Node(int data){
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }

    ~Node(){
        int value=this->data;
        if(next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Deleted the data"<<value<<endl;
    }
};


void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<"Data is "<<temp->data<<" ";
        temp=temp->next;
    }

}

void insertAtHead(Node* &tail,Node* &head,int data){
    if(head==NULL){
        Node* newHead=new Node(data);
        head=newHead;
        tail=newHead;
    }
    else{
        Node* temp=new Node(data);
        head->prev=temp;
        temp->next=head;
        head=temp;

    }
    
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node* newTail=new Node(data);
        tail=newTail;
        head=newTail;
    }
    else{
        Node* temp=new Node(data);
        tail->next=temp;
        temp->prev=tail;
        tail=temp;
    }
    
}
void insertAtPosition(Node* &head,Node*&tail,int data,int position){
    if (position==1){
        insertAtHead(tail,head,data);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }
    Node* newNode=new Node(data);
    temp->next->prev=newNode;
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->prev=temp;

}

void deletion(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    //else differenct position;
    else{
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<=position-1){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            tail=prev;
        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* head=NULL;
    Node* tail=NULL;
    head=new Node(1);
    tail=head;
    insertAtHead(tail,head,2);
    insertAtHead(tail,head,3);
    insertAtTail(head,tail,99);
    insertAtPosition(head,tail,33,3);
    insertAtPosition(head,tail,44,5);
    print(head);
    deletion(head,tail,6);
    print(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    return 0;
}