#include<iostream>
#include<stack>
using namespace std;



int main(){
    stack<int> s;
    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    s.push(3);
    s.push(2);
    cout<<"Size of two elements"<<s.size()<<endl;
    cout<<"Top element of stack is"<<s.top()<<endl;
    return 0;
}