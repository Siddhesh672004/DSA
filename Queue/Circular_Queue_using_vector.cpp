#include <iostream>
using namespace std;

class CirQueue {
  public:
    int *arr;
    int size;
    int front;
    int rear;

    CirQueue(int size){
      this->size = size;
      arr = new int [size];
      front = -1;
      rear = -1;
    }

    void push(int data) {
      if((rear+1 == front) || (front == 0 && rear == size-1)){
        cout<<"Q is full"<<endl;
      }      
      else if(front == -1){
          front = rear = 0;
          arr[rear] = data;
          cout<<"Inserted"<<data<<endl;
        }
      else if(rear == size-1 && front != 0){
          rear = 0;
          arr[rear] = data;
          cout<<"Inserted"<<data<<endl;
      }
      else{
          rear++;
          arr[rear] = data;
          cout<<"Inserted"<<data<<endl;
      }
    }

    void pop(){
      //empty check 
      if(front == -1){
        cout<<"Q is empty, cannot pop"<<endl;
      }
      //single element
      else if(front == rear){
        front = rear = -1;
      }
      //circular nature
      else if(front == size-1){
        front = 0;
      }
      else{
        front++;
      }
     
    }

};

int main() {
  CirQueue q(10);

  q.push(5);
  q.push(45);
  q.push(41);
  q.push(3);
  q.push(25);
  q.push(12);


  
  return 0;
}