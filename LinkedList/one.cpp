#include<iostream>
using namespace std;

class Node{
    //implementation of node
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
       
    }

    voidInsertAtHead(Node* &head,int d){}


};



int main(){
    Node* newNode=new Node(10);
    cout<<newNode->data;
    cout<<newNode->next;
    return 0;
}