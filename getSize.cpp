#include "linked-list.h"

int LinkedList::getSize(){
    Node* current = head;

    int count = 0;
    while (current!= nullptr){
        count++;
        current = current->next;
    }
    return count;
    
}