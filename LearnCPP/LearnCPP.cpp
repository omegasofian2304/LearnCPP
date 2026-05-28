#include <iostream>
#include <vector>

struct Node {
    int value;
    Node* next;
};

int main() {
    int count = 0;

    Node n1;
    n1.value = 10;
    n1.next = nullptr;

    Node n2;
    n2.value = 15;
    n2.next = nullptr;

    Node n3;
    n3.value = 30;
    n3.next = nullptr;


    Node n4;
    n4.value = 46;
    n4.next = nullptr;

    Node n5;
    n5.value = 65;
    n5.next = nullptr;

    n1.next = &n2;

    n2.next = &n3;

    n3.next = &n4;

    n4.next = &n5;
    
    Node* current = &n1;


    while (current != nullptr) {
        std::cout << "Value : " << current->value << std::endl;
        current = current->next;
        count++;
    }

    std::cout << "Total nodes : " << count << std::endl;

    return 0;
}
