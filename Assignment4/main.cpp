#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include "Item.hpp"

using namespace std;

void addItem(vector<Item> &itemCol);
void printList(vector<Item> &itemCol);
void findItemByID(vector<Item> &itemCol, unsigned long &itemID);
void findItemByName(vector<Item> &itemCol, string &itemName);

int main() {

    int input;
    vector<Item> itemCol;

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
                addItem(itemCol);
                break;
            case 2:
                // 2. Print Item List
                printList(itemCol);
                break;
            case 3: {
                // 3. Find Item by ID
                unsigned long itemID;
                cout << "\nPlease enter the Item ID to find:  ";
                cin >> itemID;
                findItemByID(itemCol, itemID);
                break;
            }
            case 4: {
                // 4. Find Item by Name
                string itemName;
                cout << "\nPlease enter the Item name to find:  ";
                getline(cin>>ws, itemName);
                findItemByName(itemCol, itemName);
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

// add an Item to vector collection
void addItem(vector<Item>& itemCol) {
    Item temp;
    temp.read();
    itemCol.push_back(temp);
}

// print Item list stored
void printList(vector<Item>& itemCol) {
    // check if list is empty
    if((int)itemCol.size() == 0) {
        cout << "> Error finding any items! List is empty..." << endl;
    }
    // if not empty, print out details of each item
    vector<Item>::iterator it1;
    for(it1=itemCol.begin(); it1 < itemCol.end(); it1++) {
        it1->print();
        cout << endl;
    }
    cout << endl;
}

// find item using itemID
void findItemByID(vector<Item>& itemCol, unsigned long& itemID) {
    vector<Item>::iterator it1;
    for(it1=itemCol.begin(); it1 < itemCol.end(); it1++) {
        if(it1->getId() == itemID) {
            cout << "Item found!" << endl;
            it1->print();
            cout << endl;
            return;
        }
    }
}

// find item using itemID
void findItemByName(vector<Item>& itemCol, string& itemName) {
    vector<Item>::iterator it1;
    for(it1=itemCol.begin(); it1 < itemCol.end(); it1++) {
        if(it1->getName() == itemName) {
            cout << "Item found!" << endl;
            it1->print();
            cout << endl;
            return;
        }
    }
}
