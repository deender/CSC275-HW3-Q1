//
// Created by deend on 11/7/2021.
//
#include <iostream>
#include "Employee.h"
using namespace std;
 //first initializing default constructor
Employee::Employee(int id, string first, string last, int day, int month, int year): Person(first, last, year, day, month) {
    ID = 1;
}
//getter function, allows us to reach private variable ID
int Employee::getID() {
    return ID;
}
//setter function
void Employee::setID(int id) {
    ID = id;
}