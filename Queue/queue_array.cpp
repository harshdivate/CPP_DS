#include <bits/stdc++.h> 
class Queue {
    int f;
    int size;
    int* arr;
    int r;
public:
    Queue() {
        size=100001;
        arr=new int[size];
        f=0;
        r=0;
    }

    /*----------------- Public Functions of Queue -----------------*/

    bool isEmpty() {
        if(f==r){
            return true;
        }
        return false;
    }

    void enqueue(int data) {
        if(r!=size){
            arr[r]=data;
            r++;
        }
    }

    int dequeue() {
      if(f!=r){
         int ans=arr[f];
          f++;
          return ans;
      }
      return -1;
    }

    int front() {
         if(f==r){
          return -1;
      }
     
          return arr[f];
      
    }
};

int main(){
    //write your driver code here
    return 0;
}