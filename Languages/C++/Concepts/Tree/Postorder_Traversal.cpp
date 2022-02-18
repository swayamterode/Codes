/**
 * @file Postorder_Traversal.cpp
 * @author Swayam Terode (swayamterodex@gamil.com)
 * @brief Postorder Traversal of Binary Tree.
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
void printPostorder(struct Node *node)
{
    if (node == NULL)
        return;

    printPostorder(node->left);
    printPostorder(node->right);

    cout << node->data << " ";
}
int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(6);
    cout << "The Postorder of the Binary Tree is :";
    printPostorder(root);
    return 0;
}