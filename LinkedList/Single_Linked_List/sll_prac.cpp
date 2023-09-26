#include<iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int data){
        this->data=data;
    }
    ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
    }
};

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<"Data is "<<temp->data<< " ";
        temp=temp->next;
    }
}
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
void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if (position==1){
        insertAtHead(head,data);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* newInsert=new Node(data);
    newInsert->next=temp->next;
    temp->next=newInsert;

}

void deleteNode(Node* &head,Node* &tail,int position){
    if (position==1){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
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
    if(curr->next==NULL){
        tail=prev;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;

}


int main(){
    Node* head=new Node(100);
    Node* tail=head;
    insertAtHead(head,110);
    insertAtHead(head,120);
    insertAtHead(head,130);
    
    insertAtTail(tail,98);
    insertAtTail(tail,99);
    insertAtPosition(head,tail,33,3);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;

    print(head);
    deleteNode(head,tail,7);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    print(head);
    return 0;
}