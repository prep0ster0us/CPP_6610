//
// Created by ritwik on 9/26/2023.
//

#include <iostream>
#include "Item.hpp"

using namespace std;

void Item::print() {
    cout << "Item ID: " << id << endl;
    cout << "Item Name: " << name << endl;
    cout << "Item Cost: " << cost << endl;
    cout << "Item Quantity: " << quantity << endl;
}

void Item::read() {
    cout << "Enter Item ID: ";
    cin >> id;
    cout << "Enter Item Name: ";
    getline(cin>>ws, name);
    cout << "Enter Item Cost: ";
    cin >> cost;
    cout << "Enter Item Quantity: ";
    cin >> quantity;

}
