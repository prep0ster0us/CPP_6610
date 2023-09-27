//
// Created by ritwik on 9/26/2023.
//

#include "Item.hpp"
#include "ItemCollection.hpp"

void ItemCollection::add(Item obj) {
    if(itemNum < MAX_ITEMS) {
        itemList[itemNum] = obj;
        ++itemNum;
    }
}

void ItemCollection::printList() {
    for(int i=0; i<itemNum; i++) {
        itemList[i].print();
        cout << endl;
    }
}

void ItemCollection::findById(unsigned long id) {
    for(int i=0; i<itemNum; i++) {
        if(itemList[itemNum].getId() == id) {
            cout << "> Here are the details for the item you are looking for:-" << endl;
            itemList[itemNum].print();
            return;
        }
    }
    cout << "> Error fetching information!" << endl;
}

void ItemCollection::findByName(string name) {
    for(int i=0; i<itemNum; i++) {
        if(itemList[itemNum].getName().compare(name)==0) {
            cout << "> Here are the details for the item you are looking for:-" << endl;
            itemList[itemNum].print();
            return;
        }
    }
    cout << "> Error fetching information!" << endl;
}

