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
        first=0;
        arr=new int[size];
        last=0;
      
    }

    void enqueue(int data){
  
        if(first!=size-1){
            arr[first]=data;
            first++;
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

    void isEmpty(){
        if(first!=last){
            cout<<"Not Empty";
        }else{
            cout<<"Empty";

        }
    }

    void peek(){
        if(first!=last){
            cout<<arr[first];
        }else{
            cout<<-1;
        }
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
    void details(){

        cout<<"First\t"<<first<<endl;
        cout<<"Last\t"<<last<<endl;
    }
};

int main(){
    queue q(3);
    q.isEmpty();
    // q.enqueue(10);
    // q.enqueue(20);
    // q.enqueue(30);
    q.details();
    // q.peek();
    // q.enqueue(30);
    cout<<endl;
    // q.print();
    return 0;
}