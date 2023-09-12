#include <iostream>

using namespace std;

struct Node {
  int data;
  Node* next;
};

Node* createNode(int data) {
  Node* newNode = new Node();
  newNode->data = data;
  newNode->next = nullptr;
  return newNode;
}

void printList(Node* head) {
  while (head != nullptr) {
    cout << head->data << " ";
    head = head->next;
  }
  cout << endl;
}

Node* rearrangeLinkedList(Node* head) {
  Node* evenHead = nullptr;
  Node* evenTail = nullptr;
  Node* oddHead = nullptr;
  Node* oddTail = nullptr;

  Node* currentNode = head;
  while (currentNode != nullptr) {
    if (currentNode->data % 2 == 0) {
      if (evenHead == nullptr) {
        evenHead = currentNode;
        evenTail = currentNode;
      } else {
        evenTail->next = currentNode;
        evenTail = currentNode;
      }
    } else {
      if (oddHead == nullptr) {
        oddHead = currentNode;
        oddTail = currentNode;
      } else {
        oddTail->next = currentNode;
        oddTail = currentNode;
      }
    }
    currentNode = currentNode->next;
  }

  if (evenHead == nullptr) {
    return oddHead;
  } else {
    evenTail->next = oddHead;
    return evenHead;
  }
}

int main() {
  int n;
  cin >> n;

  int data;
  Node* head = nullptr;
  Node* currentNode = nullptr;

  for (int i = 0; i < n; i++) {
    cin >> data;
    Node* newNode = createNode(data);
    if (head == nullptr) {
      head = newNode;
      currentNode = newNode;
    } else {
      currentNode->next = newNode;
      currentNode = newNode;
    }
  }

  head = rearrangeLinkedList(head);
  printList(head);

  return 0;
}
