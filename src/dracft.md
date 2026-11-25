
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