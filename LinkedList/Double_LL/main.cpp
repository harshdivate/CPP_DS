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
        cout<<value<<" "<<endl;
    }
};


void insertAtHead(Node* &tail,Node* &head, int data){
    if(head==NULL){
        Node* newHead=new Node(data);
        head=newHead;
        tail=head;
    }
    else{
        Node* newInsert=new Node(data);
        newInsert->next=head;
        head->prev=newInsert;
        head=newInsert;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    if(tail==NULL){
        Node* newTail=new Node(data);
        head=newTail;
        tail=head;
    }
    else{
        Node* newTail=new Node(data);
        newTail->prev=tail;
        tail->next=newTail;
        tail=newTail;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int data, int position){
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
    Node* newInsert=new Node(data);
    newInsert->next=temp->next;
    temp->next->prev=newInsert;
    newInsert->prev=temp;
    temp->next=newInsert;

}


void deleteNode(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    else{
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
        prev->next=curr->next; //
        
        curr->next=NULL; //
        curr->prev=NULL;
        delete curr;    
    }
    


}
void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<"Data is"<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(tail,head,10);
    insertAtHead(tail,head,20);
    insertAtTail(head,tail,9);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    insertAtPosition(head,tail,33,4);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    print(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    deleteNode(head,tail,4);
    print(head);
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;

    return 0;
}