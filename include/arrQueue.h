/*
Task 3 — Queue using Array
FIFO
Same Queue behavior, but using a circular array.
- enqueue() → insert using rear.
- dequeue() → remove using front.
- Circular movement: (index + 1) % capacity.
*/

#ifndef ARRQUEUE_H
#define ARRQUEUE_H

class ArrayQueue {
 private:
  int* arr;
  int capacity;
  int front;
  int rear;

 public:
  ArrayQueue(int size);
  ~ArrayQueue();
  void enqueue(int data);
  void dequeue();
  int peek();
  bool isEmpty();
  bool isFull();
  void display();
};

#endif
