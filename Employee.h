//
// Created by deend on 11/7/2021.
//

#ifndef MDERANI_HW3_Q1_EMPLOYEE_H
#define MDERANI_HW3_Q1_EMPLOYEE_H

#include "Person.h"
using namespace std;


class Employee : public Person {
public:
    Employee();
    Employee(int id, string first, string last, int day, int month, int year);
    int getID();
    void setID(int id);

private:
    int ID;
};


#endif //MDERANI_HW3_Q1_EMPLOYEE_H
