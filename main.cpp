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
        cin >> input;

        switch (input) {
            case 1:
                addItem(itemCol, itemCol.getTotalItems());
            case 2:
                itemCol.printList();
            case 3: {
                unsigned long itemID;
                cout << "Please enter the Item ID to find: ";
                // ***** add check for ID format
                cin >> itemID;
                itemCol.findById(itemID);
            }
            case 4: {
                string itemName;
                cout << "Please enter the Item name to find: ";
                cin >> itemName;
                itemCol.findByName(itemName);
            }
            case 5:
                cout << "Quitting.." << endl;
                break;
            default:
                cout << "Invalid input! Please try again." << endl;
        }
    } while (1 <= input && input <= 5);

    return 0;
}

void addItem(ItemCollection& itemCol, int count) {
    Item temp;
    temp.read();
    itemCol.add(temp);
}
