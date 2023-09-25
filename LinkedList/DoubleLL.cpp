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
};


void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<"Data"<<temp->data<<" ";
        temp=temp->next;
    }

}

int getLength(Node* &head){
    Node* temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insertAtHead(Node* &head,int data){
    Node* newNode=new Node(data);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
}

void insertAtTail(Node* &tail,int data){
    Node* newTail=new Node(data);
    tail->next=newTail;
    newTail->prev=tail;
    tail=newTail;
}

void insertAtPosition(Node* &head,Node* &tail,int position,int data){
    if (position==1){
        insertAtHead(head,data);
        return;
    }
    Node* temp=head;

   
    //insert at position which is not head or tail
    int cnt=1;
    
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next->prev=newNode;
    temp->next=newNode;
    newNode->prev=temp;
    
}
int main(){
    Node* node1=new Node(100);
    Node* head=node1;
    Node* tail=node1;
    // print(head);
    
    insertAtHead(head,999);
    insertAtHead(head,666);
    insertAtHead(head,777);
    insertAtTail(tail,000);
    insertAtTail(tail,1);
    insertAtPosition(head,tail,2,2222);

    print(head);
    int length=getLength(head);
    cout<<"Length is "<<length<<endl;
    return 0;



}