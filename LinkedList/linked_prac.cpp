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

void insertAtHead(Node* &head,int data ){
    Node* temp=new Node(data);
    temp->next=head;
    head=temp;
}

void insertAtTail(Node* &last,int data){
    //[10|NULL]
    Node* temp=new Node(data);
    last->next=temp;
    
}

void printLinkedList(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
    cout<<temp->data<<endl;
    temp=temp->next;
    }
    
}
void insertAtMiddle(Node* tail,Node* &head,int n,int data){
    if (n==1){
        insertAtHead(head,data);
    }
    Node* temp=head; 
    int cnt=1;
    while(cnt<n-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,data);
    }
    //now i am that position
    Node* newInsert=new Node(data);
    
    newInsert->next=temp->next;
    temp->next=newInsert;
    
}

int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;

    
    insertAtHead(head,100);
    insertAtTail(tail,20);
    insertAtMiddle(tail,head,3,222);
    printLinkedList(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    return 0;
}