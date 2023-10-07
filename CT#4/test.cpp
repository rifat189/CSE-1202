#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};
void postOrderTraverse(struct Node *node)
{
    if (node == NULL)
        return;
    postOrderTraverse(node->left);
    postOrderTraverse(node->right);
    cout << node->data << " ";
}
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(12);
    root->right = new Node(9);
    root->left->left = new Node(5);
    root->left->right = new Node(6);
    root->left->left->right = new Node(2);
    postOrderTraverse(root);
    return 0;
}