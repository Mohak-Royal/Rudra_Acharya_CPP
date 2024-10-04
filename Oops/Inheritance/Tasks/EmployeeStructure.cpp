// **Company Employee Structure**
//    - Create a base class `Employee` with details like `name` and `ID`. Derive two classes `Engineer` and `Manager` from `Employee`. Then create a class `LeadEngineer` that inherits from both `Engineer` and `Manager`.
//    - Implement methods for `work()`, `manageProject()`, and `leadTeam()`.
//    - Expected output:
//      ```
//      Engineer Name: Alice
//      ID: 101
//      Project Management: Yes
//      Team Leadership: Yes




#include<iostream>
using namespace std;


class Employee{
    protected:
        string name;
        int Id;

    public:
        Employee(string name , int Id){
            this->name = name;
            this->Id = Id;
        }

        void displayEmployee(){
            cout << "Name: " << name << endl << "ID: " << Id << endl;
        }
};


class Engineer : public Employee{
    public:
        Engineer(string name , int Id) : Employee(name , Id){}

        void work(){
            cout << "Working as an Enginner...." << endl;
        }
};



class Manager : public Employee{
    public:
        Manager(string name , int Id) : Employee(name , Id){}

        void manageProject(){
            cout << "Managing the Project..." << endl;
        }

};


class LeadEngineer : public Engineer , public Manager{
    public:
        LeadEngineer(string name , int Id) : Engineer(name , Id)  , Manager(name , Id){}

        void leadTeam(){
            cout << "Leading the team..." << endl;
        }

        void showDetails(){
            Engineer::displayEmployee();
            cout << "Project Management: Yes" << endl;
            cout << "Team LeaderShip: Yes" << endl;
        }

};


int main(){
    LeadEngineer lead("Rudra Bhai" , 1);

    lead.showDetails();
}