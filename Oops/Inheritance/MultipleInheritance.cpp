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



/*
1. **Employee Hierarchy with Skills:**
   Design a class hierarchy for an employee management system. Each employee can be of different types (Manager, Engineer, Salesperson, etc.) and possess multiple skills (Programming, Sales, Communication, etc.). Implement the hierarchy using multiple inheritance, ensuring that each employee type inherits from both a base Employee class and a Skills class. Handle any potential conflicts or ambiguity arising from inheriting shared attributes or methods.

2. **Shape Hierarchy with Drawing:**
   Create a shape hierarchy that includes geometric shapes like Circle, Square, and Triangle. Implement a Drawing class that simulates drawing these shapes on a canvas. Utilize multiple inheritance to achieve this, allowing each shape to inherit from both the Shape base class and the Drawing class to provide drawing functionality.

3. **Vehicle Fleet with Emission Standards:**
   Model a vehicle fleet containing different types of vehicles (Car, Truck, Motorcycle) with varying emission standards (Euro 4, Euro 5, Euro 6). Utilize multiple inheritance to design a hierarchy that combines both the Vehicle class and the EmissionStandard class. Address any issues related to inheriting conflicting attributes or methods from the base classes.

4. **Online Shopping Cart with Discounts:**
   Develop an online shopping cart system that calculates discounts for various products based on their categories (Electronics, Clothing, Books) and ongoing promotions (Seasonal Sale, Holiday Discount). Use multiple inheritance to construct a hierarchy of classes, incorporating both the Product class and the Discount class. Manage potential challenges that arise from inheriting discount calculation logic and product attributes.

5. **Animal Classification with Traits:**
   Design a class hierarchy to categorize animals into different types (Mammals, Birds, Fish) and specify traits (Carnivore, Herbivore, Omnivore). Implement multiple inheritance to create a structure where each animal type inherits from both the Animal class and the Trait class. Handle any complications arising from inheriting conflicting methods or attributes related to animal behavior and traits.

*/