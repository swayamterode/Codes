/**
 * @file Preorder_Traversal.cpp
 * @author Swayam Terode(swayamterodex@gmail.com)
 * @brief Preorder Traversal of Binary Tree.
 * @version 0.1
 * @date 2021-12-19
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <bits/stdc++.h>
using namespace std; 
struct Node
{
    int data;
    struct Node *left, *right;
};
Node *newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
void printPreorder(struct Node *node)
{
    if (node == NULL)
        return;

    cout << node->data << " ";

    printPreorder(node->left);

    printPreorder(node->right);
}
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printPreorder(root);
    return 0;
}
