#include "stack.h"

#include <iostream>
using namespace std;

Stack::Stack() {
  head = nullptr;
  tail = nullptr;
};
Stack::~Stack() {
  Node* current = head;
  while (current != nullptr) {
    Node* temp = current;
    current = current->next;
    delete temp;
  }
  head = nullptr;
  tail = nullptr;
};
void Stack::push(int data) {
  Node* newNode = new Node;
  newNode->data = data;
  // awel push both empty
  if (head == nullptr && tail == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
};
void Stack::pop() {
  if (head == nullptr) {
    return;
  }
  Node* temp = tail;
  if (head == tail) {
    head = nullptr;
    tail = nullptr;
  } else {
    temp->prev->next = nullptr;
    tail = temp->prev;
  }
  delete temp;
};
int Stack::peek() {
  if (head == nullptr) {
    return -1;
  }
  return tail->data;
};
bool Stack::isEmpty() { return head == nullptr; };
void Stack::display() {
  if (head == nullptr) {
    return;
  }
  Node* temp = head;
  while (temp != nullptr) {
    cout << temp->data;
    if (temp->next != nullptr) {
      cout << "<->";
    }
    temp = temp->next;
  }
};