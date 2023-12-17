#include "linked-list.h"


int main(int argc, char const *argv[])
{
    // create object
    LinkedList l1;   
    
    int choice = 0;

    while (choice!= 9)
    {   
        cout << "Enter your choice: ";
        cout << "1. Insert Node" << endl;
        cout << "2. Print Linked List" << endl;
        cout << "3. Reverse Linked List" << endl;
        cout << "4. Get Address" << endl;
        cout << "5. Delete Node" << endl;
        cout << "6. Insert at Beginning" << endl;
        cout << "7. Insert at End" << endl;
        cout << "8. Get Size" << endl;
        cout << "9. Exit" << endl;
        cin >> choice;


        switch (choice){
            case 1:
                int data;
                cout << "Enter number: "<< endl;
                cin >> data;
                l1.insert(data);
                break;
            case 2:
                l1.print();
                break;

            default:
                break;
        }
    }
    


    return 0;
}
