/*
Task 3 — Queue using Array
FIFO
Same Queue behavior, but using a circular array.
- enqueue() → insert using rear.
- dequeue() → remove using front.
- Circular movement: (index + 1) % capacity.
  int* arr;
  int capacity;
  int front;
  int rear;
*/

#include "arrQueue.h"

#include <iostream>
using namespace std;

ArrayQueue::ArrayQueue(int size) {
  capacity = size;
  arr = new int[capacity];
  front = -1;
  rear = -1;
};
ArrayQueue::~ArrayQueue() { delete[] arr; };
void ArrayQueue::enqueue(int data) {
  if (isFull()) {
    cout << "queue is full" << endl;
    return;
  }
  if (isEmpty()) {
    front = 0;
  }
  rear = (rear + 1) % capacity;
  arr[rear] = data;
};
void ArrayQueue::dequeue() {
  if (isEmpty()) {
    cout << "queue is empty";
    return;
  }
  if (front == rear) {
    front = -1;
    rear = -1;
    return;
  }
  front = (front + 1) % capacity;
  // msh byhsel delete ehna hn3ml overwrite b3d kda
};
int ArrayQueue::peek() {
  if (isEmpty()) {
    cout << "queue is empty";
    return -1;
  }
  return arr[front];
};
bool ArrayQueue::isEmpty() { return front == -1; }
bool ArrayQueue::isFull() { return (rear + 1) % capacity == front; };
void ArrayQueue::display() {
  if (isEmpty()) {
    cout << "queue is empty";
    return;
  }
  int index = front;
  while (index != rear) {
    cout << arr[index] << "<->";
    index = (index + 1) % capacity;
  }
  cout << arr[rear];
};