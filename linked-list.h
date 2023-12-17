// linked-list.h

#ifndef LINKED_LIST_H
#define LINKED_LIST_H


#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Node
{
    int data;
    Node *next;

};

class LinkedList
{
private:
    Node *head;
public:
    LinkedList(){
        head = NULL;
    }
    ~LinkedList(){
        Node *current = head;
    while (current != NULL){
        Node *next = current->next;
        delete current;
        current = next;
    }
    }

    void insert(int data);

    void print();

    void reverse();

    int returnAddress(int data);

    void deleteNode(int data);

    int getSize();

    void insertAtBeginning(int data);

};

#endif // !LIN

