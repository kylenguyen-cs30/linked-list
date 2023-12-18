#include "linked-list.h"

void LinkedList::deleteNode(int data){
    Node* current = head;
    Node* previous = nullptr;

    while(current != nullptr && current->data != data){
        previous = current;
        current = current->next;
    }

    // node not found
    if(current == nullptr){
        return;
    }

    // remove node
    if(previous == nullptr){
        //remove head node
        head = current->next;
    }else{
        previous->next = current->next;
    }

    delete current;
}