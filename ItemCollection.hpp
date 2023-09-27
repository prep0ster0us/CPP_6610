//
// Created by ritwik on 9/26/2023.
//

#ifndef ASSIGNMENT2_ITEMCOLLECTION_HPP
#define ASSIGNMENT2_ITEMCOLLECTION_HPP

#define MAX_ITEMS 100

 #include "Item.hpp"
#include <iostream>
#include <string>

using namespace std;

class ItemCollection {
private:
    Item itemList[MAX_ITEMS];
    int itemNum;

public:
    ItemCollection() { itemNum = 0; };
    void add(Item obj);
    void printList();
    void findById(unsigned long id);
    void findByName(string name);
    // getter
    const int getTotalItems() { return this->itemNum; }

    // setter
//    void setTotalItems(int itemNum) { this->itemNum = itemNum; }
};

#endif //ASSIGNMENT2_ITEMCOLLECTION_HPP
