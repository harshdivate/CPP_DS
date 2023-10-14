#include<iostream>
using namespace std;

class queue{
    public:
    int size;
    int first=-1;
    int last=-1;
    int* arr;

    queue(int size){
        this->size=size;
        
        arr=new int[size];
      
    }

    void enqueue(int data){
  
        if(first!=size-1){
            first++;
            arr[first]=data;
        }else{
            cout<<"Queue is Full"<<endl;
        }
    }

    void dequeue(){
        if(first==last){
            cout<<"Queue is Empty"<<endl;
        }else{
            first--;
        }
    }

    bool isEmpty(){
        if(first!=last){
            return false;
        }
        return true;
    }

    int peek(){
        if(first!=last){
            return arr[first];
        }
        return -1;
    }
    void print(){
        if(first!=last){
            int temp=first;
            for(int i=temp;i>=0;i--){
                cout<<arr[temp]<<endl;
                temp--;
            }
        }else{
            cout<<"Queue is Empty"<<endl;
        }
    }
};

int main(){
    queue q(3);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(30);
    cout<<endl;
    q.print();
    return 0;
}