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





// Problem 1: School Management System
// Create a School Management System using multilevel inheritance. Create a base class "Person" with attributes like name and age. Derive two classes "Student" and "Teacher" from the "Person" class. Then, derive a class "Admin" from the "Teacher" class. Implement functions to display information and manage the roles of students, teachers, and administrators.

// Problem 2: Banking System
// Design a Banking System using multilevel inheritance. Create a base class "Account" with attributes like account number, balance, and account holder name. Derive two classes "SavingsAccount" and "CurrentAccount" from the "Account" class. Then, derive a class "LoanAccount" from the "SavingsAccount" class. Implement functions to deposit, withdraw, and calculate interest for different account types.

// Problem 3: Vehicle Hierarchy
// Model a vehicle hierarchy using multilevel inheritance. Create a base class "Vehicle" with attributes like make, model, and year. Derive two classes "Car" and "Motorcycle" from the "Vehicle" class. Then, derive a class "Sportscar" from the "Car" class. Implement functions to display vehicle details and calculate specifications for each type of vehicle.

// Problem 4: Online Shopping System
// Develop an Online Shopping System using multilevel inheritance. Create a base class "Product" with attributes like product ID, name, and price. Derive two classes "Electronics" and "Clothing" from the "Product" class. Then, derive a class "Shoes" from the "Clothing" class. Implement functions to add products to the cart, calculate total prices, and manage product categories.

// Problem 5: Animal Kingdom
// Create an Animal Kingdom simulation using multilevel inheritance. Create a base class "Animal" with attributes like species and habitat. Derive two classes "Mammal" and "Bird" from the "Animal" class. Then, derive a class "Parrot" from the "Bird" class. Implement functions to display animal information, simulate behaviors, and manage the animal hierarchy.
