#include<iostream>
using namespace std;

class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }else{
            cout<<"Stack Overflow"<<endl;
        }
        // if(top>size-1){
        //     cout<<"Stack Overflow"<<endl;
        //     return;
        // }
        // top++;
        // arr[top]=element;
    }
    void pop(){
        cout<<"TOp count in pop is "<<top<<endl;
        if(top>=0){
            
            top--;
        }
        else{
            cout<<"Stack Underflow"<<endl;
            
        }
            
    }

    int peek(){
        if(top>=0){
            return arr[top];
        }else{
            cout<<"Empty"<<endl;
            return -1;
        }
        
    }
    
    bool isEmpty(){
        if(top==-1){
            return true;
        }
        return false;
    }

    void print(){
        if(top==-1){
            cout<<"Stack Is Empty"<<endl;
            return;
        }
        while(top>=0){
            cout<<arr[top]<<" ";
            top--;
        }
    }

};

int main(){

    Stack st(5);

    st.push(22);
    st.push(43);
    st.push(44);
    st.push(22);
    st.push(43);
    st.push(44);

    cout << st.peek() << endl;

    st.pop();

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
    st.print();
    
   
    return 0;
}