// Source file for 'Item' class definition

#include <iostream>
#include <iomanip>      // for formatting the output data (printing items in inventory)
#include "Item.hpp"

using namespace std;

// print all details of an item
void Item::print() {
    cout << endl;
    cout << "Item ID: " << id << endl;
    cout << "Item Name: " << name << endl;
    cout << "Item Cost: " << cost << endl;
    cout << "Item Quantity: " << quantity << endl;
}

// read user input for item details
void Item::read() {
    cout << "Enter Item ID: ";
    cin >> id;
    cout << "Enter Item Name: ";
    getline(cin>>ws, name);
    cout << "Enter Item Cost: ";
    cin >> cost;
    cout << "Enter Item Quantity: ";
    cin >> quantity;
    cout << endl << "> Successfully added " << name << " to inventory.\n\n";
}