// Type Casting is a process in which we convert a variable from one data type to another data type.

// Syntax:
//     (data_type) expression

// Types of Type Casting:
//     1. Implicit Type Casting - done by compiler
//     2. Explicit Type Casting - done by programmer

// Implicit Type Casting:
//     In Implicit Type Casting, the compiler automatically converts one data type into another data type without any user involvement.

//     Example:
//         int a = 5;
//         float b = a; // Implicit Type Casting

// Explicit Type Casting:
//     In Explicit Type Casting, the user converts the data type of an object to required data type.

//     Example:
//         float a = 5.5;
//         int b = (int)a; // Explicit Type Casting

//     Note: In Explicit Type Casting, there is a loss of data.

// Implicit Type Casting Table:
//     Data Type   Size (in bytes)
//     char        1
//     short       2
//     int         4
//     long        4
//     float       4
//     double      8
//     long double 12

//     Note: The data type with smaller size is converted to the data type with larger size.

// Explicit Type Casting Table:
//     Data Type   Size (in bytes)
//     char        1
//     short       2
//     int         4
//     long        4
//     float       4
//     double      8
//     long double 12

//     Note: The data type with larger size is converted to the data type with smaller size.

// > cycle of casting: char -> int -> float -> double  --> implicit casting
// > cycle of casting: double -> float -> int -> char  --> explicit casting

#include<iostream>
#include<typeinfo>
using namespace std;


int main(){
    //Implicit
    // int a = 5;
    // float f = a;

    // cout << "The Value of a: " << a << "\t Type -> : " << typeid(a).name();
    // cout << "\nThe Value of f: " << f << "\t Type -> : " << typeid(f).name();


    //explicit

    // float f = 3.14;
    // int a = (int)f;

    // cout << "The Value of f: " << f << "\t Type -> : " << typeid(f).name();
    // cout << "\nThe Value of a: " << a << "\t Type -> : " << typeid(a).name(); 



    // how to get ascii value
    // char c = 'R';

    // cout << "The ascii value of R is : " << (int)c;

}