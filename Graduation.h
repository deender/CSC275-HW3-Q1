//
// Created by deend on 11/7/2021.
//

#ifndef MDERANI_HW3_Q1_GRADUATION_H
#define MDERANI_HW3_Q1_GRADUATION_H

#include "Student.h"

using namespace std;

class gradStudent: public Student{
public:
    gradStudent();
    gradStudent(string first, string last, int day, int month, int year, int credit);
    bool isGrad();
private:
    bool canGrad;
};


class Graduation {

};


#endif //MDERANI_HW3_Q1_GRADUATION_H
