#include "linked-list.h"

void LinkedList::insertAtBeginning(int data){
    
    //create a node
    Node* newNode = new Node();
    newNode->data = data;


    // point new node to the current head
    newNode->next = head;

    // update head to point to new node. 
    head = newNode;
}