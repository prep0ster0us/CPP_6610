//
// Created by ritwi on 9/22/2023.
//

#ifndef ASSIGNMENT1_STUDENTCOLLECTION_H
#define ASSIGNMENT1_STUDENTCOLLECTION_H

#define MAX_STUD 10

//#include "Student.h"

class Student {
private:
    Student list[MAX_STUD];
    int cnt;
public:
    studentCollection() {cnt=0;};
    void add(Student obj);
    int getCount() { return cnt; }
};

#endif //ASSIGNMENT1_STUDENTCOLLECTION_H
