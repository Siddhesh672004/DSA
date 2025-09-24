#include <iostream>
using namespace std;

class Queue {
  public:
    int *arr;
    int size;
    int front;
    int rear;

    Queue(int size){
      this->size = size;
      arr = new int [size];
      front = 0;
      rear = 0;
    }

    void push(int data) {
      if(rear == size){
        cout<<"Q is full"<<endl;
      }
      else{
        arr[rear] = data;
        rear++;
        cout<<"Data inserted"<<endl;
      }
    }

    void pop(){
      if(front == rear){
        cout<<"Q is underflow"<<endl;
      }
      else{
        arr[front] = -1;
        front++;
        if(front == rear){
          front = 0;
          rear = 0;
        }
      }
    }

    int getFront(){
      if(front == rear){
        cout<<"Q is empty"<<endl;
        return -1;
      }
      else{
        return arr[front];
      }
    }

    bool isEmpty(){
      if(front == rear){
        return true;
      }
      else{
        return false;
      }
    }

    int getSize(){
      return rear - front;
    }
};

int main() {
  Queue q(10);

  q.push(5);
  q.push(45);
  q.push(41);
  q.push(3);
  q.push(25);
  q.push(12);

  cout<<"Size of q is: "<<q.getSize()<<endl;
  q.pop();
  cout<<"Size of q is: "<<q.getSize()<<endl;

  cout<<"front element is: "<<q.getFront()<<endl;

  if(q.isEmpty()){
    cout<<"Q is empty"<<endl;
  }
  else{
    cout<<"Q is not empty";
  }
  return 0;
}