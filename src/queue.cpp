#include "queue.h"

#include <iostream>
using namespace std;

Queue::Queue() {
  head = nullptr;
  tail = nullptr;
}

Queue::~Queue() {
  Node* current = head;
  while (current != nullptr) {
    Node* temp = current;
    current = current->next;
    delete temp;
  }
  head = nullptr;
  tail = nullptr;
}
void Queue::enqueue(int data) {
  // 10 20 30 ==push hena===
  Node* newNode = new Node;
  newNode->data = data;
  if (head == nullptr && tail == nullptr) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
};

void Queue::dequeue() {
  //  ====pop==== 10 20 30
  if (head == nullptr) {
    return;
  }
  Node* temp = head;
  if (head == tail) {
    head = nullptr;
    tail = nullptr;
  } else {
    head = head->next;
    head->prev = nullptr;
  }
  delete temp;
};
int Queue::front() {
  if (head == nullptr) {
    return -1;
  }
  return head->data;
};
bool Queue::isEmpty() { return head == nullptr; };

void Queue::display() {
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