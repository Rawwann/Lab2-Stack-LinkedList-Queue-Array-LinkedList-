#include <iostream>

#include "arrQueue.h"
#include "queue.h"
#include "stack.h"
using namespace std;

int main() {
  Stack s;
  Queue q;
  ArrayQueue a(4);
  cout << "\n================Stack_LinkedList================\n";
  s.push(10);
  s.push(20);
  s.push(30);
  s.display();
  cout << "\n======================\n";
  s.pop();
  s.display();
  cout << "\n======================\n";
  cout << "peek: " << s.peek();
  cout << "\n======================\n";
  cout << "stack is empty?: " << s.isEmpty();
  cout << "\n==============Queue_LinkedList===================\n";
  q.enqueue(40);
  q.enqueue(50);
  q.enqueue(60);
  q.display();
  cout << "\n======================\n";
  q.dequeue();
  cout << "After first dequeue: ";
  q.display();
  cout << "\n======================\n";
  cout << "front: " << q.front();
  cout << "\n======================\n";
  q.dequeue();
  cout << "After second dequeue: ";
  q.display();
  q.dequeue();
  cout << "\nAfter third dequeue: \n";
  q.display();
  cout << "queue is empty?: " << q.isEmpty();
  cout << "\n================ArrayQueue=====================\n";
  cout << "empty?: " << a.isEmpty() << endl;
  a.enqueue(70);
  a.enqueue(80);
  a.enqueue(90);
  a.enqueue(100);
  a.display();
  cout << "\n======================\n";
  a.dequeue();
  a.dequeue();
  cout << "After dequeue: ";
  a.display();
  cout << "\n======================\n";
  a.enqueue(110);
  a.enqueue(120);
  a.enqueue(130);
  a.display();
  cout << "\n======================\n";
  cout << "peek: " << a.peek() << endl;
  cout << "empty?: " << a.isEmpty() << endl;
  cout << "full?: " << a.isFull() << endl;
  ;
}
