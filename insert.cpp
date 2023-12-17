#include "linked-list.cpp"

void LinkedList::insert(int data){
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    
    // if head is null, make newNode the head
    if (head == nullptr){
        head = newNode;
    }else{
        Node* current = head;
        while (current->next    != nullptr){
            current = current->next;
        }
        current->next = newNode; // newNode is now the last node
        
    }
    
}