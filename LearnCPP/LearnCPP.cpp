#include <iostream>
#include <vector>

struct Node {
    int value;
    Node* next;
};

void addNode(Node*& head, int value) {
    Node* n = new Node();

    n->value = value;
    n->next = nullptr;

    if (head == nullptr) {
        head = n;
        return;
    }

    Node* current = head;
    while (current->next != nullptr) {
        current = current->next;
    }
    current->next = n;
}

void printList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << "Value : " << current->value << std::endl;
        current = current->next;
    }
}

void deleteList(Node*& head) {
    std::cout << "------" << std::endl;
    Node* next = head->next;
    while (head->next != nullptr)
    {
        next = head->next;
        delete head;
        head = next;
    }
    delete head;
    head = nullptr;
    std::cout << "------" << std::endl;
}

int main() {
    Node* head = nullptr;

    addNode(head, 10);
    addNode(head, 11);
    addNode(head, 13);
    addNode(head, 15);

    printList(head);

    deleteList(head);

    printList(head);

    return 0;
}
