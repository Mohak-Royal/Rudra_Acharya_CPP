// multilevel and hierarchical
// hierachical and multiple


#include<iostream>
using namespace std;


class School{
public:
    void printSchool(){
        cout << "School" << endl;
    }
};

class Principle : public School{
public:
    void printPrinciple(){
        cout << "Principle" << endl;
    }
};

class Teacher : public School{
public:
    void printTeacher(){
        cout << "Teacher" << endl;
    }
};

class Student : public Teacher , public Principle{
public:
    void printStudent(){
        cout << "Student" << endl;
    } 
};

int main(){
    Student s;

    s.printTeacher();
    s.printStudent();
    s.printPrinciple();

    // s.printSchool();

    s.Teacher::printSchool();
    s.Principle::printSchool();


}