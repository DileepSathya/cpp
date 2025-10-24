#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail, int d) {
    Node* temp = new Node(d);
    if (tail == NULL) {
        // If list is empty, treat this as first node (this should be handled by caller in main)
        tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

void print_linkedlist(Node* &head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = new Node(30);  // First node
    Node* tail = head;          // Tail initially points to head

    insertAtTail(tail, 20);
    insertAtTail(tail, 10);

    print_linkedlist(head);

    return 0;
}
