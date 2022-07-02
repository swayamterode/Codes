#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void traverse(Node *&head)
{
    cout << "Elements in the linked list are: ";
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = new Node(100);
    Node *node1 = new Node(454);
    head->next = node1;
    Node *node2 = new Node(3);
    node1->next = node2;

    traverse(head);
    return 0;
}