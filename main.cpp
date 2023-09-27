#include <iostream>
#include <string>
#include "Item.hpp"
#include "ItemCollection.hpp"

using namespace std;

void addItem(ItemCollection &itemCol, int count);

int main() {

    int input;
    ItemCollection itemCol;

    do {
        cout << "--------------------------- Inventory management system menu ---------------------------" << endl;
        cout << "1. Add New Item" << endl;
        cout << "2. Print Item List" << endl;
        cout << "3. Find Item by ID" << endl;
        cout << "4. Find Item by Name" << endl;
        cout << "5. QUIT" << endl;
        cout << "SELECT: ";
        cin >> input;

        switch (input) {
            case 1:
                addItem(itemCol, itemCol.getTotalItems());
                break;
            case 2:
                itemCol.printList();
                break;
            case 3: {
                unsigned long itemID;
                cout << "\nPlease enter the Item ID to find:  ";
                // ***** add check for ID format
                cin >> itemID;
                itemCol.findById(itemID);
                break;
            }
            case 4: {
                string itemName;
                cout << "\nPlease enter the Item name to find:  ";
                cin >> itemName;
                itemCol.findByName(itemName);
                break;
            }
            case 5:
                cout << "Quitting.." << endl;
                return 0;
            default:
                cout << "> Invalid input! Please try again.\n" << endl;
                break;
        }
    } while (true);

//    return 0;
}

void addItem(ItemCollection& itemCol, int count) {
    Item temp;
    temp.read();
    itemCol.add(temp);
}
