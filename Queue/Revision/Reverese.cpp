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
        cout<<"Data deleted is"<<value<<endl;
    }
};


void insertAtHead(Node* &head,int data){
    if(head==NULL){
        Node* newHead=new Node(data);
        head=newHead;
    }
    else{
        Node* newHead=new Node(data);
        newHead->next=head;
        head=newHead;
    }
}


void insertAtTail(Node* &tail,int data){
    
    if(tail==NULL){
        
        insertAtHead(tail,data);
        
    }else{
        
         Node* newTail=new Node(data);
    tail->next=newTail;
    tail=newTail;

    }
   
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }else{
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
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(position==1){
        insertAtHead(head,data);
        return ;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    // no insert at end or tail 
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    insertAtHead(head,100);
    insertAtHead(head,200);
    insertAtHead(head,300);
    insertAtHead(head,400);
    return 0;
}