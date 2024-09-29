// Implement a base class Employee and two additional classes TechnicalSkills and SoftSkills. Derive a class Engineer that inherits from both Employee and TechnicalSkills. Derive a Manager that inherits from Employee and SoftSkills. Implement methods to show the employee's skills.

#include<iostream>
using namespace std;


class Employee{
    protected: 
        string name;
        int id;

    public:

        Employee(string name , int id){
            this->name = name;
            this->id = id;
        }

        void displayDetails(){
            cout << "Name: " << name << ", ID: " << id << endl;
        }
};


class TechnicalSkills{
    public: 

        void showTechnicalSkills(){
            cout << "Technical Skills: C++ , Java , C , Python";
        }
};

class SoftSkills{
    public:

        void showSoftSkills(){
            cout << "Soft Skills: Leadership , Communication , Teamwork" << endl;
        }
};



class Engineer : public Employee , public TechnicalSkills{
    public: 
        Engineer(string name , int id) : Employee(name , id){}

        void showSkills(){
            displayDetails();
            showTechnicalSkills();
        }
        
};


class Manager : public Employee , public SoftSkills{
    public:
        Manager(string name , int id) : Employee(name , id){}


        void showSkills(){
            displayDetails();
            showSoftSkills();
        }   
};



int main(){
    Engineer eng("Rudra" , 1);
    Manager mgr("Shrey Sir" , 2);

    cout << "Engineer Details:\n";
    eng.showSkills();


    cout << "\nManager Details:\n";
    mgr.showSkills();
}
