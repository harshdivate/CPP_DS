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
    Node* newNode=new Node(data);
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
    newNode->next=temp->next;
    temp->next=newNode;
}

void deleteNodewithPosition(Node* &head,Node* &tail,int position){
    if(position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
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

void insertAtTailwithHead(Node* &head,int data){
    Node* newTail=new Node(data);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newTail;

}

void print(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }

}
int main(){
    Node* node1=new Node(10);
    Node* head=node1;
    Node* tail=node1;
    insertAtHead(head,20);
    insertAtTail(tail,33);
    insertAtHead(head,27);
    insertAtTail(tail,999);
    insertAtPosition(head,tail,444,3);
    print(head);
    cout<<endl;
    deleteNodewithPosition(head,tail,1);
    
    print(head);
    cout<<endl;
    cout<<"Head"<<head->data<<endl;
    cout<<"Tail"<<tail->data<<endl;
    
    return 0;
}