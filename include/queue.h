#ifndef QUEUE_H
#define QUEUE_H
#include "node.h"
class Queue {
 private:
  Node* head;
  Node* tail;

 public:
  Queue();
  ~Queue();
  void enqueue(int data);
  void dequeue();
  int front();
  bool isEmpty();
  void display();
};

#endif