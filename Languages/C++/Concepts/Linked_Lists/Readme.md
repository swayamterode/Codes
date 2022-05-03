# Linked List

A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations. The elements in a linked list are linked using pointers.

**1. Introduction of Linked List**
<details>
  <summary > Click to Expand </summary>

  **Linked lists are of two types:**

1. Singly Linked List
2. Doubly Linked List

We will first look at **SINGLY LINKED LIST**.

* In the linked list we do not have to store the element continuously.
* In the linked list the elements can be stored at a random address.
* In the linked list we will always save the address of the first element / Node.
* We should always save the address of the first element of the linked list. Then we say to the rest elements to save the address of other elements as well.

## Node Classification

In each node, there are two or three parts depending on whether we use the Singly Linked list or doubly Linked List.

Node has two partitions:

1. Data
2. Address of next element that is **POINTER**.

| Data | Address |

NOTE: The last element of the linked list will always have the address as **NULL**,  which means the linked list has terminated.

---

## How to store the Linked List

There is no **Data-Type** which can store the address as well as the data of the Node so we create our user-defined Data Structure which is **class**.

Each element of the Linked list is called a NODE.

<img src= "https://media.geeksforgeeks.org/wp-content/cdn-uploads/gq/2013/03/Linkedlist.png" alt = "Node">

```cpp
class Node {
    public:
    int data;
    Node * next; //Node of Node so we used Node and * is POINTER and next is a variable name.
}
```
</details>
