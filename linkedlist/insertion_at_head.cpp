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

// Insert new node at the head of the list
void insert_at_head(Node* &head, int d) {
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}

// Print the linked list
void print_linkedlist(Node* &head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;  // FIXED: Advance the temp pointer
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = NULL;  // Start with empty list

    insert_at_head(head, 30);
    insert_at_head(head, 20);
    insert_at_head(head, 10);

    print_linkedlist(head);

    return 0;
}
