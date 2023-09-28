// Header file for 'Item' class definition

#ifndef ASSIGNMENT2_ITEM_HPP
#define ASSIGNMENT2_ITEM_HPP

#include <string>

using namespace std;

// Item class
class Item {
private:
    unsigned long id;
    string name;
    float cost;
    int quantity;

public:
    Item() {};
    // constructor for initialisation
    Item(unsigned long id, string name, float cost, int quantity) {
        this->id = id;
        this->name = name;
        this->cost = cost;
        this->quantity = quantity;
    }
    void print();
    void read();
    // getters
    unsigned long getId() { return id; }
    string getName() { return name; }
};


#endif //ASSIGNMENT2_ITEM_HPP
