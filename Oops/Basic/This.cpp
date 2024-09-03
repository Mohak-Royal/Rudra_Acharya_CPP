// This Keyword: 
// > It is a keyword which is used as a pointer which points to the current object.
// > It is used to access the instance variables of the current object.
// > It is used to access the methods of the current object.
// > It is used to access the constructor of the current object.
// > It is used to return the current object from the method.
// > It is used to pass the current object as a parameter to the method.

#include<iostream>
using namespace std;

class A{
    int a;

    public:
        void set(int a){
            this->a = a;
        }

        void display(){
            cout << "a = " << a;
        }
}a;



int main(){
    a.set(45);
    a.display();
}



// Task : 

// 1. "Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee* other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee."
// 2. "Design a class 'Car' to model different cars owned by individuals. Each car has a unique license plate number and a fuel level. Implement a member function 'refuel(double liters)' that takes the amount of fuel to be added and uses the 'this' pointer to update the fuel level of the current car."
// 3. "Develop a class 'BankCustomer' to represent a customer's account in a bank. Each customer has a name, account number, and current balance. Write a member function 'withdraw(double amount)' that takes an amount to be withdrawn and uses the 'this' pointer to deduct the specified amount from the customer's balance."
// 4. "Create a class 'Book' to represent a book in a library. Each book has a title, author, and availability status. Implement a member function 'borrowBook()' that uses the 'this' pointer to mark the current book as borrowed when a library user borrows it."
// 5. "Design a class 'MobilePhone' to model a mobile phone owned by a person. Each phone has a unique phone number and a contact list. Write a member function 'addContact(string name, string number)' that takes a name and phone number as parameters and uses the 'this' pointer to add the contact to the current phone's contact list."