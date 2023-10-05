//
// Created by ritwik on 10/5/2023.
//

#ifndef CPP_6610_RECTANGLE_HPP
#define CPP_6610_RECTANGLE_HPP

class Rectangle {
private:
    float length;
    float width;
public:
    Rectangle(float length, float width);
//    Rectangle() {};
    float perimeter();
    float area();
    void show();
    int sameArea(Rectangle obj);
    //setters
    void setLength(float newLength) { length = newLength; }
    void setWidth(float newWidth) { width = newWidth; }
};

#endif //CPP_6610_RECTANGLE_HPP
