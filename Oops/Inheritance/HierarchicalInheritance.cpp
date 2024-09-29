/*
1 parent

multiple child class / more than 1 child class

*/

#include<iostream>
using namespace std;

// parent class
class Architects{
    public:
        Architects(){
            cout << "Architects" << endl;
        }

        void Imagine(){
            cout << "Imagine the design.." << endl;
        }

};



class CivilEngineers : public Architects{
    public:
        CivilEngineers(){
            cout << "CivilEngineers" << endl;
        }

        void Build(){
            cout << "Build the design.." << endl;
        }
};



class InteriorDesigners : public Architects{
    public:
        InteriorDesigners(){
            cout << "InteriorDesigners" << endl;
        }

        void decorate(){
            cout << "Decorate the design.." << endl;
        }
};



int main(){
    CivilEngineers civil;
    InteriorDesigners inter;

    civil.Imagine();
    inter.Imagine();

    civil.Build();
    inter.decorate();
}