//
// Created by deend on 11/7/2021.
//
#include <iostream>
#include "Student.h"
#include "Graduation.h"

using namespace std;

gradStudent::gradStudent() { //default constructor
    canGrad = false;
}

gradStudent::gradStudent(string first, string last, int day, int month, int year, int credit): Student(first, last, day, month, year, credit){
    if(credit > 30 || credit > 120){
        canGrad = true;
    }
}

bool gradStudent::isGrad() {
    return canGrad;
}