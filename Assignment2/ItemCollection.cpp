// source file for collection of 'Item'

#include "Item.hpp"
#include "ItemCollection.hpp"

// add Item object to ItemCollection list
void ItemCollection::add(Item& obj) {
    if(itemNum < MAX_ITEMS) {
        itemList[itemNum] = obj;
        ++itemNum;
    }
}

// print details of all items in inventory
void ItemCollection::printList() {
    cout << "\n>>> ITEMS IN INVENTORY <<<" << endl;
    for(int i=0; i<itemNum; i++) {
        itemList[i].print();
    }
    cout << endl;
}

// find item using specified item ID
void ItemCollection::findById(unsigned long id) {
    for(int i=0; i<itemNum; i++) {
        if(itemList[i].getId() == id) {
            cout << "\n> Here are the details for the item you are looking for:- ";
            itemList[i].print();
            cout << endl;
            return;
        }
    }
    cout << "> Error fetching information! Item does not exist in inventory.\n" << endl;
}

// find item using specified item name
void ItemCollection::findByName(string name) {
    for(int i=0; i<itemNum; i++) {
        if(itemList[i].getName().compare(name)==0) {
            cout << "\n> Here are the details for the item you are looking for:- ";
            itemList[i].print();
            cout << endl;
            return;
        }
    }
    cout << "> Error fetching information! Item does not exist in inventory.\n" << endl;
}