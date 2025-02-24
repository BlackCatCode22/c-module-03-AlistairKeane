#include <iostream>
using namespace std;

// Definition of the Node struct
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insertAtEnd(Node** head, int newData) {
    Node* newNode = new Node();
    Node* last = *head;

    newNode->data = newData;
    newNode->next = nullptr;

    if (*head == nullptr) {
        *head = newNode;
        return;
    }

    while (last->next != nullptr) {
        last = last->next;
    }

    last->next = newNode;
}

// Function to delete a node by value
void deleteNode(Node** head, int key) {
    Node* temp = *head;
    Node* prev = nullptr;

    if (temp != nullptr && temp->data == key) {
        *head = temp->next;
        delete temp;
        return;
    }

    while (temp != nullptr && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == nullptr) return;

    prev->next = temp->next;
    delete temp;
}

// Function to display all nodes in the list
void displayList(Node* node) {
    while (node != nullptr) {
        cout << node->data << " -> ";
        node = node->next;
    }
    cout << "nullptr" << endl;
}

int main() {
    Node* head = nullptr;

    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);
    insertAtEnd(&head, 4);

    cout << "Linked List: ";
    displayList(head);

    deleteNode(&head, 3);
    cout << "After deleting 3: ";
    displayList(head);

    return 0;
}
