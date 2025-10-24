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

void insert_at_position(Node* &head, Node* &tail, int position, int d) {
    Node* newNode = new Node(d);

    // Insert at head (position 1)
    if (position == 1) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the node before the target position
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // Insert at tail if position is after the last node
    if (temp == tail || temp->next == NULL) {
        temp->next = newNode;
        tail = newNode;
    } else {
        // Insert in middle
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

void print(Node* &head) {
    if (head == NULL) {
        cout << "List empty" << endl;
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
    Node* head = new Node(30);
    Node* tail = head;

    insert_at_position(head, tail, 1, 20);  // Insert at beginning
    insert_at_position(head, tail, 2, 25);  // Insert in middle
    insert_at_position(head, tail, 4, 40);  // Insert at end

    print(head);

    return 0;
}
