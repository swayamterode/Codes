#include<bits/stdc++.h>
using namespace std;
class ll
{
    public:
    int data;
    ll *next;
};
int main(){
//intializing the head of the linked list
    ll *head = NULL;
//creating two new node    
    ll *second = NULL;
    ll *third = NULL;
//dynamically allocate memory
    head = new ll();
    second = new ll();
    third = new ll();
//assigning data to the node
    head ->data = 1;
    head->next = second;
//assigning data to the node
    second->data = 23;
    second->next = third;
//assigning data to the node
    third->data = 33;
    third->next = NULL;
//printing the data of the node
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
}
