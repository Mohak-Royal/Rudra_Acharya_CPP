// Single Inheritance: When a class inherits only one class, it is called single inheritance.

#include<iostream>
using namespace std;


class Father{
    public: 
        double property = 100000;
};


class Child : public Father{
    public:

        void display(){
            cout << "I have total property of: " << property;
        }
};


int main(){
    Child c;

    c.display();
}