//
// Created by deend on 11/7/2021.
//

#ifndef MDERANI_HW3_Q1_STUDENT_H
#define MDERANI_HW3_Q1_STUDENT_H

#include "Person.h"
using namespace std;


class Student : public Person {
public:
    Student();
    Student(string first, string last, int day, int month, int year, int credit);
    int getCredit();
    void setCredit(int credit);
private:
    int numOfCredits;
};


#endif //MDERANI_HW3_Q1_STUDENT_H
