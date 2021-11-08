//
// Created by deend on 11/7/2021.
//
#include <iostream>
#include "Student.h"
using namespace std;

Student::Student(){
    numOfCredits = 0; // initializing default constructor/numofCredits variable
}
//now initializing secondary constructor
Student::Student(string first, string last, int day, int month, int year, int credit) : Person(first, last, year, day, month){
    numOfCredits = credit;
}
//now writing accessor function to gain access to private variable
int Student::getCredit() {
    return numOfCredits;
}

//writing set function
void Student::setCredit(int credit) {
    numOfCredits = credit;
}

