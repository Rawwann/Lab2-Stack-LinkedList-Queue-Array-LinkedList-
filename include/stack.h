#ifndef STACK_H
#define STACK_H

#include "node.h"

class Stack {
 private:
  Node* head;
  Node* tail;

 public:
  Stack();
  ~Stack();
  void push(int data);
  void pop();
  int peek();
  bool isEmpty();
  void display();
};

#endif