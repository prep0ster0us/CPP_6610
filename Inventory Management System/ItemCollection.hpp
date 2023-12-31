// header file for collection of 'Item'

#ifndef ASSIGNMENT2_ITEMCOLLECTION_HPP
#define ASSIGNMENT2_ITEMCOLLECTION_HPP

#define MAX_ITEMS 100

#include <iostream>
#include <string>
#include "Item.hpp"

using namespace std;

// ItemCollection class
class ItemCollection {
private:
    Item itemList[MAX_ITEMS];
    int itemNum;

public:
    // default constructor
    ItemCollection() { itemNum = 0; }
    void add(Item& obj);
    void printList();
    void findById(unsigned long id);
    void findByName(string name);
    // getter
    int getItemNum() { return this->itemNum; }

};

#endif //ASSIGNMENT2_ITEMCOLLECTION_HPP
