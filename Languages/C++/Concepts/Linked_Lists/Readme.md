<div align = "center">

# Linked List ⛓️

</div>

**A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.**

## Introduction of Linked List

<details>

**Linked lists are of two types:**

1. Singly Linked List
2. Doubly Linked List

We will first look at **SINGLY LINKED LIST**.

- In the linked list we do not have to store the element continuously.
- In the linked list the elements can be stored at a random address.
- In the linked list we will always save the address of the first element / Node.
- We should always save the address of the first element of the linked list. Then we say to the rest elements to save the address of other elements as well.

</details>

## Node Classification

<details>

In each node, two or three parts are depending on whether we use the Singly Linked list or doubly Linked List.

Node has two partitions:

1. Data
2. Address of next element that is **POINTER**.

| Data | Address |

NOTE: The last element of the linked list will always have the address as **NULL**, which means the linked list has terminated.

```cpp
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
```

✔️ **OUTPUT**

![Node Implementation](../img/1.Node_Implementation.png)

</details>

<!--
## How to store the Linked List

<details>

There is no **Data-Type** which can store the address as well as the data of the Node so we create our user-defined Data Structure which is **class**.

Each element of the Linked list is called a NODE.

![Node](https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png)

```cpp
class Node {
    public:
    int data;
    Node * next; //Node of Node so we used Node and * is POINTER and next is a variable name.
}
```
</details>
-->

## Insert an element at Head

<details>

We can insert elements at the head of the Linked List!

**CODE**:

> ```cpp
> void insertAtHead(Node *&head, int data) // head is a reference to Node.
> {
>    // create new node
>    Node *temp = new Node(data);
>    // assign head to temp
>    temp->next = head;
>    // assign head to temp
>    head = temp;
> }
> ```

- Why do we use & (reference)?

> Because we do not want to make copy of the orignal data

**Let's implement the full code** :

```cpp
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;   // data is a member variable of class Node.
    Node *next; // next is a member variable of class Node which is a pointer to Node.

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
```

✔️ **OUTPUT**

![InsertAtHead](./../img/2.InsertatHead.png)

</details>

## Traversing a Linked List

<details>

> ```cpp
> void traverse(Node *&head)
> {
>    cout << "Elements in the linked list are: ";
>    Node *temp = head;
>    while (temp != NULL)
>    {
>        cout << temp->data << " ";
>        temp = temp->next;
>    }
>    cout << endl;
> }
> ```

**Full Code**:

```cpp
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
```

✔️ **OUTPUT**

![traversing](./../img/3.traverse.png)

</details>
