//
// Created by ritwi on 9/26/2023.
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

void Item::add(unsigned long id, string name, float cost, int quantity) {

}
