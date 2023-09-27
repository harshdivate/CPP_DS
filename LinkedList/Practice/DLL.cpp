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

void insertAtHead(Node* &head,int data){
    Node* newNode=new Node(data);
    head->prev=newNode;
    newNode->next=head;
    head=newNode;
}

void insertAtTail(Node* &tail,int data){
    if (tail==NULL){
        Node* newTail=new Node(data);
        tail=newTail;
    }
    else{
        Node* newTail=new Node(data);
        newTail->prev=tail;
        tail->next=newTail;
        tail=newTail;
    }
}

void insertAtPositon(Node* &head,Node* &tail,int data,int position){
    if ( position == 1 ){
        insertAtHead( head , data );
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<position){
        temp=temp->next;
        cnt++;
    }
    if ( temp->next== NULL){
        insertAtTail(tail,data);
        return;
    }
    Node* newInsert=new Node(data);
    temp->next->prev=newInsert;
    newInsert->next=temp->next;
    temp->next=newInsert;
    newInsert->prev=temp;

}

void deletionNode(Node* &head,Node* &tail,int position){
    if (position==1){
        Node* temp=head;
        head=temp->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    else{
        //someother positon;
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        if(curr->next==NULL){
            prev->next=NULL;
            curr->prev=NULL;
            delete curr;
            tail=prev;
            return;
        }
        prev->next=curr->next;
        curr->next->prev=prev;
        curr->prev=NULL;
        curr->next=NULL;
        delete curr;
        
    }
}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* n1=new Node(100);
    Node* head=n1;
    Node* tail=n1;
    insertAtHead(head,200);
    insertAtTail(tail,99);
    insertAtTail(tail,44);
    print(head);
    cout<<endl;
    insertAtPositon(head,tail,33,3);
    
    cout<<endl<<"Before Deletion"<<endl;
    print(head);
    cout<<endl;

    deletionNode(head,tail,5);
    cout<<"After deletion"<<endl;
    print(head);
    cout<<endl;
    cout<<"Head is"<<head->data<<endl;
    cout<<"Tail is"<<tail->data<<endl;
    return 0;

}