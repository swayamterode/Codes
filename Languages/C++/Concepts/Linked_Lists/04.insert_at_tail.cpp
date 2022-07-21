#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data; // data of the node
    Node *next;
    Node(int data)
    {
        this->data = data; // this->data is the same as this->data = data;
        this->next = NULL; // this->next is the same as this->next = NULL;
    }
};
void insertAtTail(Node *&tail, int d) // insert at Tail
{
    Node *temp = new Node(d);
    tail->next = temp;
    tail = temp;
}
void printList(Node *&head) // prints the list
{
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
    Node *node1 = new Node(77);
    Node *tail = node1;
    Node *head = node1;
    cout << "Insert at TAIL ()" << endl;
    insertAtTail(tail, 88);
    insertAtTail(tail, 10);
    insertAtTail(tail, 555);
    insertAtTail(tail, 20);
    printList(head);
    return 0;
}