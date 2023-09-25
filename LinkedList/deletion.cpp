#include<iostream>
using namespace std;



class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data=data;
        this->next=NULL;

    }

   ~Node(){
        int value=this->data;
        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
        cout<<"The memory is free of the data"<<value<<endl;
   }
   
};




void insertAtHead(Node* &head,int data){
    Node* newInsert=new Node(data);
    newInsert->next=head;
    head=newInsert;
}
// [10|NULL] [10|->20]
// [20|NULL]
void insertAtTail(Node* &tail,int data){
    Node* newTail=new Node(data);
    tail->next=newTail;
    tail=newTail;
}

void print(Node* &head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

void insertAtPosition(Node* &head,Node* &tail,int data,int position){
    if (position==1){
        insertAtHead(head,data);
        return;
    }
    int cnt=1;
    Node* temp=head;
    while(cnt<position-1){
        temp=temp->next;
        cnt++;
    }
    
    if (temp->next==NULL){
        insertAtTail(tail,data);
        return;
    }
    // [10|->11][11|->12]  [30}->11]
    Node* newNode=new Node(data);
    newNode->next=temp->next;
    temp->next=newNode;

}


void deleteNode(Node* &head,int position){
    if (position==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        //deleting the differenct nodes
        Node* curr=head;
        Node* prev=NULL;
        int cnt=1;
        while(cnt<position){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}



int main(){
    Node* head=new Node(100);
    Node* tail=head;
    cout<<"1"<<endl;
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout<<"1"<<endl;
    //print(head);
    insertAtHead(head,101);
    cout<<"2"<<endl;
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout<<"2"<<endl;
    //print(head);
    insertAtHead(head,102);
    cout<<"3"<<endl;
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout<<"3"<<endl;
    //print(head);
    insertAtTail(tail,99);
    cout<<"4"<<endl;
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout<<"4"<<endl;
    //print(head);
    
    insertAtTail(tail,98);
    cout<<"5"<<endl;
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout<<"5"<<endl;
    //print(head);
    insertAtPosition(head,tail, 22,6);
    cout<<"6"<<endl;
    cout << "head " << head -> data << endl;
    cout << "tail " << tail -> data << endl;
    cout<<"6"<<endl;
    //print(head);

    deleteNode(head,3  );


    cout<<endl<<endl<<endl<<endl;
    print(head);
    return 0;


}