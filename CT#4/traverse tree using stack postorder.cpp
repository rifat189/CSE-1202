#include <iostream>
#include <stack>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) : data(val), left(nullptr), right(nullptr) {}
};

void postorderIterative(Node* root) {
    if (root == nullptr) {
        return; // If the tree is empty, return early.
    }

    stack<Node*> nodeStack;
    stack<Node*> outputStack;

    nodeStack.push(root); // Push the root node onto the stack.

    while (!nodeStack.empty()) {
        Node* current = nodeStack.top(); // Get the top node from the stack.
        nodeStack.pop(); // Pop the node from the stack.

        // Push the current node onto the outputStack.
        outputStack.push(current);

        // Push the left child onto the stack (if it exists).
        if (current->left) {
            nodeStack.push(current->left);
        }

        // Push the right child onto the stack (if it exists).
        if (current->right) {
            nodeStack.push(current->right);
        }
    }

    // Print the postorder traversal by popping nodes from the outputStack.
    cout << "Postorder traversal: ";
    while (!outputStack.empty()) {
        Node* node = outputStack.top();
        outputStack.pop();
        cout << node->data << " ";
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
    postorderIterative(root);

    return 0;
}
