//
// Created by ritwi on 9/22/2023.
//

#include "studentCollection.h"
void studentCollection::print() {
    for(int i=0; i<cnt; i++) {
        list[i].print();
    }
}

void studentCollection::add(Student obj) {
    if(cnt < MAX_STUD) {
        list[cnt] = obj;
        ++cnt;
    }
}