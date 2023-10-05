//
// Created by ritwik on 10/5/2023.
//

#include <iostream>
#include "Rectangle.hpp"

Rectangle::Rectangle(float width, float length) {
    this->length = length;
    this->width = width;
}

float Rectangle::area() {
    return length*width;
}

float Rectangle::perimeter() {
    return (length+width)*2;
}

void Rectangle::show() {
    std::cout << "Length = " << length << std::endl;
    std::cout << "Width = "  << width  << std::endl;
}

int Rectangle::sameArea(Rectangle obj) {
    if((length*width) == (obj.length*obj.width)) {
        return 1;
    } else {
        return 0;
    }
}