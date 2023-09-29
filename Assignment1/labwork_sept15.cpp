//
// Created by ritwik on 9/17/2023.
//

// Deign a simple system which takes in the class strength for a course and prints out details of each student
// max students in class = 10, throw error if it exceeds it

#include <iostream>
#include <string>

// #define MAX_STUDENTS 10     // another way of defining constant value variable (same purpose as "const int <>")

using namespace std;

// standard convention to have first letter of struct name as capital
struct Student {
    string name;
    int id;
    float gpa;
};

const int MAX_STUDENTS = 10;

void readInfo(Student sList[], int count);
void printInfo(Student sList[], int count);

int main() {

    cout << "Enter total number of students in the class:" << endl;
    int num;
    cin >> num;
    // since prompting and checking for error for input, use do..while loop in place of while loop
    while(num > MAX_STUDENTS) {
        cout << "ERROR! Total number of students cannot be more than " << MAX_STUDENTS << endl;
        cout << "Enter number of students: ";
        cin >> num;
    }

    Student sList[MAX_STUDENTS];
    readInfo(sList, num);
    printInfo(sList, num);

    return 0;
}

void readInfo(Student sList[], int count) {
    cout << "Enter details of the students: " << endl;
    for(int i=0; i<count; i++) {
        cout << endl << "Student " << i+1 << endl;
        cout << "Enter Name: ";
        // since this is for name, use getline() instead of cin
        getline(cin>>ws, sList[i].name);
        cout << "Enter ID: ";
        cin >> sList[i].id;
        cout << "Enter GPA: ";
        cin >> sList[i].gpa;
    }
}

void printInfo(Student sList[], int count) {
    cout << endl << "Here are the student details: " << endl;
    for(int i=0; i<count; i++) {
        cout << sList[i].name << " (student ID " << sList[i].id << ") has a GPA of " << sList[i].gpa << endl;
    }
}
