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
        if(this->next!=NULL){
            delete next;
            next=NULL;
        }
        cout<<"Data deleted is"<<value<<endl;
    }
};


void insertAtHead(Node* &head,Node* &tail,int data){
    if(head==NULL){
        Node* newHead=new Node(data);
        head=newHead;
        tail=head;
    }
    else{
     
        Node* newHead=new Node(data);
        newHead->next=head;
        head->prev=newHead;
        head=newHead;
    }
}

void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        insertAtHead(head,tail,data);
        return;
    }
    Node* newInsert=new Node(data);
    newInsert->prev=tail;
    tail->next=newInsert;
    tail=newInsert;
}


void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if(position==1){
        insertAtHead(head,tail,data);
        return ;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insertAtTail(head,tail,data);
        return;
    }
    Node* newInsert=new Node(data);
    newInsert->next=temp->next;
    newInsert->next->prev=newInsert;
    newInsert->prev=temp;
    temp->next=newInsert;
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
        return;
    }
    // cout<<"Came here 2"<<endl;
    int cnt=1;
    Node* curr=head;
    Node* prev=NULL;
    while(cnt<position){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    cout<<curr->data<<endl;
    if(curr->next==NULL){
        tail=prev;
        Node* temp=curr;
        prev->next=NULL;
        curr->prev=NULL;
        return;

    }
    // cout<<"Came heere 3"<<endl;
    prev->next=curr->next;
    curr->next->prev=prev;
    curr->next=NULL;
    curr->prev=NULL;
    delete curr;
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
    Node* tail=head;
    insertAtHead(head,tail,100);
    insertAtHead(head,tail,200);
    insertAtHead(head,tail,300);

    
    insertAtTail(head,tail,99);

    insertAtPosition(head,tail,333,5);
    
    
    print(head);
    cout<<endl;
   
    deleteNode(head,tail,5);
    print(head);
     cout<<endl;
    cout<<"Head is "<<head->data<<endl;
    cout<<"Tail is "<<tail->data<<endl;
    return 0;

}