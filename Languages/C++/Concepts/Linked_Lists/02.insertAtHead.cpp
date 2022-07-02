#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;   // data is a member variable of class Node.
    Node *next; // next is a member variable of class Node whicc is a pointer to Node.

    Node(int data) // constructor
    {
        this->data = data; // data is a member variable of class Node
        this->next = NULL; // next is a member variable of class Node whicc is a pointer to Node
    }
};
void insertAtHead(Node *&head, int data) // head is a reference to Node.
{
    // create new node
    Node *temp = new Node(data);
    // assign head to temp
    temp->next = head;
    // assign head to temp
    head = temp;
}
int main()
{
    Node *head = new Node(100);
    cout << "Data stored in head is: " << head->data << endl;
    insertAtHead(head, 2);
    cout << "Data stored in head is: " << head->data << endl;
    return 0;
}