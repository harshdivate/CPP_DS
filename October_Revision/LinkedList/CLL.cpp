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
        cout<<"here"<<endl;
        Node* newHead=new Node(data);
        newHead->next=newHead;
        head=newHead;
    }
    else{
        Node* temp=head;        
        cout<<"here 2"<<endl;


        while(temp->next!=head){
            temp=temp->next;
        }
        Node* newHead=new Node(data);
        temp->next=newHead;
        newHead->next=head;
        head=newHead;
    }
}

void insertAtTail(Node* &head,int data){
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node* newInsert=new Node(data);
    newInsert->next=temp->next;
    temp->next=newInsert;
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
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNode(Node* &head,int position){
    if(position==1){
        Node* temp=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        Node* todelete=temp->next;
        temp->next=todelete->next;
        todelete->next=NULL;
        head=temp->next;
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
    temp->next=todelete->next;
    todelete->next=NULL;
    delete todelete;
}
void print(Node* &head){
            cout<<"here print"<<endl;

    Node* temp=head;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
        
    }while(temp!=head);
    cout<<endl;
}

int main(){
    Node* head=NULL;
    insertAtHead(head,100);
    insertAtHead(head,200);
    insertAtTail(head,90);
    insertAtPosition(head,80,4);
 
    print(head);
       deleteNode(head,2);
       print(head);
    return 0;

}