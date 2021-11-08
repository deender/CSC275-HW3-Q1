#include <iostream>
#include "Person.h"
#include "Employee.h"
#include "Student.h"
#include "Graduation.h"
using namespace std;

int main()
{
    Person p1("Tony", "Stark", 1, 21, 1950);
    cout << p1.getName() << " born on: " << p1.getBirthdate() << endl;

    Employee e1(3000, "Tony", "Stark", 1, 21, 1950);
    cout <<"ID: " << e1.getID() << " \nEmployee name: " << e1.getName() << " \nBorn on: " << e1.getBirthdate() << endl;

    gradStudent g1("Tony", "Stark", 1, 21, 1950, 45);
    if(g1.isGrad()){
        cout << "This student has graduated!" << endl;
    }
    else{
        cout << "This student has not yet met the requirements for graduation" << endl;
    }
    return 0;
}
