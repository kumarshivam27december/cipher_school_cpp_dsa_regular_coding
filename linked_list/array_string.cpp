#include <iostream>

struct Node {
    char data;
    Node* next;
};

Node* insertNode(Node* head, char data, int index) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    // Insert at the beginning
    if (index == 0) {
        newNode->next = head;
        return newNode;
    }

    Node* current = head;
    int currIndex = 0;

    // Traverse the list to find the index
    while (current != NULL && currIndex < index) {
        current = current->next;
        currIndex++;
    }

    // If index is out of bounds
    if (current == NULL) {
        std::cout << "Invalid index." << std::endl;
        return head;
    }

    // Insert at the given index
    newNode->next = current->next;
    current->next = newNode;

    return head;
}

void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

int main() {
    int n;
    // std::cout << "Enter the number of characters: ";
    std::cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    // std::cout << "Enter the characters: ";
    for (int i = 0; i < n; i++) {
        char data;
        std::cin >> data;

        Node* newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;

        if (head == NULL) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    int index;
    // std::cout << "Enter the index after which you want to insert: ";
    std::cin >> index;

    char character;
    // std::cout << "Enter the character to be inserted: ";
    std::cin >> character;

    head = insertNode(head, character, index);

    std::cout << "Updated list: ";
    printList(head);

    return 0;
}
