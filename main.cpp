#include "linked-list.h"


int main(int argc, char const *argv[])
{
    // create object
    LinkedList l1;   
    
    int choice = 0;

    while (choice!= 8)
    {   
        cout << "Choice List" << endl;
        cout << "1. Insert Node" << endl;
        cout << "2. Print Linked List" << endl;
        cout << "3. Reverse Linked List" << endl;
        cout << "4. Get Address" << endl;
        cout << "5. Delete Node" << endl;
        cout << "6. Insert at Beginning" << endl;
        cout << "7. Get Size" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        int data;

        switch (choice){
            // insert data at the end of the list
            case 1:
                cout << "Enter number: "<< endl;
                cin >> data;
                l1.insert(data);
                break;
            // print the list
            case 2:
                l1.print();
                break;
            
            // reverse the list
            case 3:
                l1.reverse();
                l1.print();
                break;

            // get the address of the data
            case 4:
                cout << "Enter number: " << endl;
                cin >> data;
                l1.returnAddress(data);
                break;

            // delete the node
            case 5:
                cout << "Enter number: " << endl;
                cin >> data;
                l1.deleteNode(data);
                break;

            // insert at the beginning of the list
            case 6:
                cout << "Enter number: " << endl;
                cin >> data;
                l1.insertAtBeginning(data);
                break;

            // get size of the list
            case 7:
                cout << "Size: " << l1.getSize() << endl;
                break;
            default:
                break;
        }
    }
    


    return 0;
}
