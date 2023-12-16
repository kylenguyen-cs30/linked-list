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
    LinkedList(/* args */);
    ~LinkedList();

    void insert(int data);

    void print();

    void reverse();

    int returnAddress(int data);

    void deleteNode(int data);

    int getSize();

    void insertAtBeginning(int data);

    void insertAtEnd(int data);
};




int main(int argc, char const *argv[])
{
    // create object   
    
    return 0;
}




LinkedList::LinkedList(/* args */)
{
}

LinkedList::~LinkedList()
{
}
