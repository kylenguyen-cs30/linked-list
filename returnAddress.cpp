#include "linked-list.h"

Node* LinkedList::returnAddress(int data){
    Node* current = head;
    while(current!= nullptr){
        if(current->data == data){
            return current;
        }
    }
    cout << "Data not found in list" << endl;
    return nullptr;
}