#ifndef ASSIGNMENT4_ITEM_HPP
#define ASSIGNMENT4_ITEM_HPP

#include <string>
#include <vector>

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
//    void findByID(vector<Item> itemCol);
//    void findByName(vector<Item> itemCol);
    // getters
    unsigned long getId() const { return id; }
    string getName() { return name; }
};

#endif //ASSIGNMENT4_ITEM_HPP
