/**** program to create a menu-driven inventory management system ****/

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
        cout << "----------------------------------------------------------------------------------------" << endl;
        cout << "SELECT: ";
        cin >> input;

        switch (input) {
            case 1:
                // 1. Add New Item
                addItem(itemCol, itemCol.getItemNum());
                break;
            case 2:
                // 2. Print Item List
                itemCol.printList();
                break;
            case 3: {
                // 3. Find Item by ID
                unsigned long itemID;
                cout << "\nPlease enter the Item ID to find:  ";
                cin >> itemID;
                itemCol.findById(itemID);
                break;
            }
            case 4: {
                // 4. Find Item by Name
                string itemName;
                cout << "\nPlease enter the Item name to find:  ";
                getline(cin>>ws, itemName);
                itemCol.findByName(itemName);
                break;
            }
            case 5:
                // 5. Quit
                cout << "Quitting.." << endl;
                return 0;
            default:
                cout << "> Invalid input! Please try again.\n" << endl;
                break;
        }
    } while (true);
}

// add an Item to ItemCollection
void addItem(ItemCollection& itemCol, int count) {
    Item temp;
    temp.read();
    itemCol.add(temp);
}
