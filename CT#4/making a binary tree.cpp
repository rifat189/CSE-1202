#include <iostream>
using namespace std;
struct Node
{
    char data;
    struct Node *left, *right;
};
struct Node *newNode(char x)
{
    struct Node *node = (struct Node *)malloc(sizeof(struct Node));
    node->data = x;
    node->left = NULL;
    node->right = NULL;
    return node;
}
// just for checking the tree
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
    struct Node *root = newNode('a');
    root->left = newNode('b');
    root->right = newNode('c');
    root->left->left = newNode('d');
    root->left->right = newNode('e');
    root->left->left->right = newNode('f');
    postOrderTraverse(root);
}