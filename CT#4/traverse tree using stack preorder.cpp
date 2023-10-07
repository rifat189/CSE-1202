#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void preorderIterative(Node* root) {
    if (root == nullptr) {
        return; // If the tree is empty, return early.
    }

    stack<Node*> nodeStack;
    nodeStack.push(root); // Push the root node onto the stack.

    while (!nodeStack.empty()) {
        Node* current = nodeStack.top(); // Get the top node from the stack.
        nodeStack.pop(); // Pop the node from the stack.

        // Process the current node (e.g., print its value).
        cout << current->data << " ";

        // Push the right child onto the stack (if it exists).
        if (current->right) {
            nodeStack.push(current->right);
        }

        // Push the left child onto the stack (if it exists).
        if (current->left) {
            nodeStack.push(current->left);
        }
    }
}

int main() {
    // Create a sample binary tree:
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);

    cout << "Preorder traversal: ";
    preorderIterative(root);

    return 0;
}
