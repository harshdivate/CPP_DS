#include<iostream>
#include<queue>
using namespace std;


void print(queue<int> q){
    queue<int> temp=q;
    for(int i=0;i<q.size();i++){
        cout<<temp.front()<<" ";
        temp.pop();
    }
}

int main(){
    queue<int> q;
    q.push(10);
    q.push(200);
    print(q);
    return 0;
}