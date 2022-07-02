#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data) // constructor
    {
        this->data = data; // data is a member variable of class Node
        this->next = NULL; // next is a member variable of class Node whicc is a pointer to Node
    }
};
int main()
{
    Node *head = new Node(1);
    cout << "Data stored in head is: " << head->data << endl;
    cout << "Address stored in head is: " << head->next << endl;
    return 0;
}