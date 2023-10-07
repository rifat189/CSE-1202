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
bool isFullBinaryTree(struct Node *argNode)
{
    if (argNode == NULL)
        return true;
    if (argNode->left == NULL && argNode->right == NULL)
        return true;
    if (argNode->left && argNode->right)
        return (isFullBinaryTree(argNode->left) && isFullBinaryTree(argNode->right));
    return false;
}
int main()
{
    struct Node *root = newNode('a');
    root->left = newNode('b');
    root->right = newNode('c');
    // root->left->left = newNode('d');
    // root->left->right = newNode('e');
    // root->left->left->right = newNode('f');
    // cout<<isFullBinaryTree(root);
    if (isFullBinaryTree(root))
        cout << "It's a binary tree";
    else
        cout << "Not a binary tree";
}