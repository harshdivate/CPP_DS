#include<iostream>
using namespace std;

class Stack{
    public:
    int top;
    int size;
    int *arr;

    Stack(int size){
        this->size=size;
        top=-1;
        arr=new int[size];  
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
    }

    void pop(){
          if (top >= 0) {
        top--;
    } else {
        cout << "Stack underflow" << endl;
    }

    }
    int peek(){
        if(top<0){
            cout<<"Stack is empty"<<endl;
        }
        else{
            return arr[top];
        }
        return -1;

    }

    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }
    void print(){
        cout<<"Top "<<top<<endl;
        if(top==-1){
            cout<<"Stack is empty"<<endl;
        }
        int sample=top;
        while(sample>=0){
            cout<<arr[sample]<<" ";
            sample--;
        }
    }
};

int main(){
    // Stack s(5);
    // s.push(100);
    // s.push(200);
    // s.push(300);
    // s.push(400);
    // s.push(500);
    // s.push(600);
    // s.print();

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;
    cout<<"Before Popping"<<endl;
    st.print();
    st.pop();
    cout<<"AFter Popping"<<endl;
    st.print();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }


    return 0;
}