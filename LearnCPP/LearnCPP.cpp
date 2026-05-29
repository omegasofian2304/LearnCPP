#include <iostream>

struct Node {
    int value;
    Node* left;
    Node* right;
};

void insertNode(Node*& root, int value) {
    if (root == nullptr) {
        Node* n = new Node;
        n->value = value;
        n->left = nullptr;
        n->right = nullptr;
        root = n;
        return;
    }

    Node* temp = root;
    while (true) {
        if (value > temp->value)
        {
            if (temp->right == nullptr) {
                Node* n = new Node;
                n->value = value;
                n->left = nullptr;
                n->right = nullptr;
                temp->right = n;
                return;
            }
            temp = temp->right;
        }
        else if (value < temp->value)
        {
            if (temp->left == nullptr) {
                Node* n = new Node;
                n->value = value;
                n->left = nullptr;
                n->right = nullptr;
                temp->left = n;
                return;
            }
            temp = temp->left;
        }
        else if (value == temp->value) {
            return;
        }
    }
}

void printInOrder(Node* root) {
    if (root == nullptr) return;

    printInOrder(root->left);
    std::cout << root->value << std::endl;
    printInOrder(root->right);
}

void search(Node* root, int value) {

    if (root == nullptr) {
        std::cout << "Not found!" << std::endl;
        return;
    }
    else if (root->value == value) {
        std::cout << "Found !";
        return;
    }

    else if (value > root->value) {
        search(root->right, value);
    }
    else if (value < root->value) {
        search(root->left, value);
    }
}

int main() {

    Node* root = nullptr;
    insertNode(root, 30);
    insertNode(root, 45);
    insertNode(root, 23);
    insertNode(root, 70);
    insertNode(root, 32);
    insertNode(root, 156);
    insertNode(root, 21);

    printInOrder(root);

    search(root, 21);
    return 0;
}
