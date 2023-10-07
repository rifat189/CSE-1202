#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void inorderIterative(Node* root) {
    if (root == nullptr) {
        return; // If the tree is empty, return early.
    }

    stack<Node*> nodeStack;
    Node* current = root;

    while (current || !nodeStack.empty()) {
        while (current) {
            nodeStack.push(current);
            current = current->left;
        }

        // Process the current node (e.g., print its value).
        current = nodeStack.top();
        nodeStack.pop();
        cout << current->data << " ";

        current = current->right;
    }

    cout << endl;
}

int main() {
    // Create a sample binary tree:
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder traversal: ";
    inorderIterative(root);

    return 0;
}
