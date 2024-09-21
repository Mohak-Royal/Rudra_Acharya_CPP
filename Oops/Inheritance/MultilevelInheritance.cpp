#include<iostream>
using namespace std;


class GrandFather{
    private:
        string gname = "NatwarBhai";

    public:

        string getGname(){
            return gname;
        }
};

class Father : public GrandFather{
    private:
        string fname = "VipulBhai";


    public: 

        string getGFname(){
            return fname + " " + getGname();   //  VipulBhai NatwarBhai
        }
};

class Child : public Father{
    private: 
        string name = "Rudra";

    public: 
    
        void displayFullName(){
            cout << name << " " << getGFname();
        }
};



int main(){
    Child c;

    c.displayFullName();
}



// Basic Animal Hierarchy:
// Create a base class Animal with attributes like name and age. Derive a class Mammal from Animal and another class Dog from Mammal. Implement functions to display basic information about the animal, and methods specific to Dog like bark().



// Vehicle System:
// Design a Vehicle class with attributes such as make and model. Derive a class Car that adds an attribute fuelType, and further derive a class ElectricCar that adds a batteryCapacity. Write methods to display the vehicle details.


// Academic Structure:
// Create a class Person with basic details like name and age. Derive a class Student from Person, and further derive a class GraduateStudent. Add methods in GraduateStudent to show thesis details.


// Company Employee Structure:
// Implement a Person class. Derive an Employee class that adds attributes like salary and employeeID. Further derive a class Manager that adds a teamSize attribute. Implement methods to display manager details and manage the team.


// Library Management System:
// Create a class Item with attributes like title and ID. Derive a class Book from Item, and further derive a class DigitalBook. Implement methods to show whether the book is digital or physical and display book details.