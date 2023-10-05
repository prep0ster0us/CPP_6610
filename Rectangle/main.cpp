#include <iostream>
#include <string>
#include "Rectangle.hpp"

using namespace std;

void printInfo(Rectangle& obj);
void compareMsg(int result);

int main() {

    cout << "\n---- Program execution start ----\n";

    Rectangle r1(2.0, 7.5), r2(5.0, 3.0);
    printInfo(r1);
    printInfo(r2);

    compareMsg(r1.sameArea(r2));

    cout << "\n---- Program execution end ----\n";

    return 0;
}

void printInfo(Rectangle& obj, int id) {
    cout << "Dimensions of Rectangle " << id << ": " << endl;
    obj.show();
    cout << endl;

    cout << "AREA =      " << obj.area() << endl;
    cout << "PERIMETER = " << obj.perimeter() << endl;
}

void compareMsg(int result) {
    if(result == 1) {
        cout << "The area of 2 rectangles have the same area!" << endl;
    } else {
        cout << "The area of 2 rectangles do not have the same area!" << endl;
    }
}
