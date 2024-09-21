#include<iostream>
using namespace std;

class Father{
    public: 

        double fproperty = 50000;
};

class Mother{
    public: 

        double mproperty = 25000;
};



class Child : public Father , public Mother{
    public: 

        void display(){
            cout << "I have total property of: " << fproperty+mproperty;
        }
};


int main(){
    Child c;

    c.display();
}



// Vehicle and Insurance System:
// Create a base class Vehicle and another base class Insurance. Derive a class CarInsurance that inherits from both Vehicle and Insurance. Implement methods to display vehicle and insurance details.

// Employee Skills:
// Implement a base class Employee and two additional classes TechnicalSkills and SoftSkills. Derive a class Engineer that inherits from both Employee and TechnicalSkills. Derive a Manager that inherits from Employee and SoftSkills. Implement methods to show the employee's skills.

// Student and Athlete:
// Create a class Person. Create two more classes, Student and Athlete, that have different responsibilities. Derive a class StudentAthlete that inherits from both Student and Athlete, and implement methods to display academic and athletic performance.

// Device and Appliance:
// Design two base classes: Device (with attributes like deviceName) and Appliance (with attributes like applianceType). Derive a class SmartAppliance that inherits from both and adds functionality specific to smart devices. Implement methods to show device details.

// Artist and Teacher:
// Create a class Person. Then create two more classes: Artist and Teacher. Derive a class ArtTeacher that inherits from both Artist and Teacher. Implement methods to manage both teaching and creating artwork.