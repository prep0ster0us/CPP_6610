//
// Created by ritwik on 9/26/2023.
//

#ifndef ASSIGNMENT2_ITEM_HPP
#define ASSIGNMENT2_ITEM_HPP

#include <string>

using namespace std;

class Item {
private:
    unsigned long id;
    string name;
    float cost;
    int quantity;

public:
    Item() = default;
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
    float getCost() { return cost; }
    int getQuantity() { return quantity; }

    // setters
    void setId(unsigned long id) { this->id = id; }
    void setName(string name) { this->name = name; }
    void setCost(float cost) { this->cost = cost; }
    void setQuantity(int quantity) { this->quantity = quantity; }

};


#endif //ASSIGNMENT2_ITEM_HPP
