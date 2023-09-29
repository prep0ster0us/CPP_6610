/*
//
// Created by ritwi on 9/22/2023.
//

#ifndef ASSIGNMENT1_LABWORK_SEPT22_H
#define ASSIGNMENT1_LABWORK_SEPT22_H
*/

#include <iostream>
#include <string>

using namespace std;

class labwork_sept22 {

};

int main() {

    return 0;
}



//#endif //ASSIGNMENT1_LABWORK_SEPT22_H

// Multi Module programming

/*
 * Modules = group of functions which pertain to a specific feature (eg:
 *
 * Including custom header -> #include "example.hpp"    // for custom modules, use '""' (path is relative to main function)
 * Including standard header -> #include <string>       // for standard libraries, use "<>" (since path known)
 *
 *
 *
 * Header Guard (for custom header file)
 * - this helps to resolve if there are multiple include statements in the source file (using this header). It won't throw error, no matter how many times its getting included
 *
 * syntax:
 *  <start of file>
 *  #ifndef <varname>
 *  #define <varname>
 *
 *  <contents of header file>
 *
 *  <endif>
 *
 *  example:
 *  #ifndef STUDENT_HPP
 *  #define STUDENT_HPP
 *
 *  class Student {
 *  ...........
 *  ...........
 *  ...........
 *  }
 *
 *  #endif
 *
 *
 * STRUCTURE
 * - basically a function, only differences being it has same name as class and is called automatically when object of class is created
 * - always a public function
 * - no return type
 * - default constructor has no arguments (needs to be implemented in case made custom constructor)
 *  syntax for setting default constructor
 *  METHOD - 1
 *      Student() {
 *          name = "test"
 *          id = "0123"
 *          gpa = "4.5"
 *      }       // this assigns these values when an object is created and not initialized explicitly
 *      <in class definition / header file>
 *      Student();
 * METHOD - 2
 *      <in class definition / header file>
 *      Student()=default;
 * */

#include <iostream>
#include <string>
//#include "Student.h"
#include "studentCollection.h"

void readStudent(studentCollection& col, int cnt);
//void printStudent(studentCollection col, int cnt);

using namespace std;

int labwork_sept22() {

    Student::studentCollection col;

    readStudent(col, cnt);
    col.print();

    return 0;
}

void readStudent(studentCollection col, int cnt) {
    Student temp;
    for(int i=0; i<cnt; i++) {
        temp.read();
        col.add(temp);
    }
}