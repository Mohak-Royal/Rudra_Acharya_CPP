#include<iostream>
using namespace std;

// class Book{
//     public: 
//     string name;

//     //default constructor
//     Book(){
//         cout << "This is a constructor of Book class";
//     }   

//     // parametrized constructor
//     Book(string name){
//         this->name = name;
//         cout << "The name of book is: " << this->name; 
//     }
// };



// int main(){
//     // Book b1; // default
//     // Book b1("Rich dad Poor dad");  parametrized
// }





//  Copy Constructor: Make a copy constructor to copy the values of one object to another object.
// A real world example would be to make a copy of an existing book to create a new book.



class Book{
    private: 
        string title;
        string author;
        double price;
        int pages;


    public: 
        Book(string title , string author , double price , int pages){
            this->title = title;
            this->author = author;
            this->price = price;
            this->pages = pages;
        }

        Book(const Book &obj){
            this->title = obj.title;
            this->author = obj.author;
            this->price = obj.price;
            this->pages = obj.pages;
        }

        void display(){
            cout << "Title: " << this->title;
            cout << endl << "Author: " << this->author;
            cout << endl << "Price: " << this->price;
            cout << endl << "Pages: " << this->pages; 
        }

};





int main(){
    Book book1("Anci c" , "Shrey Sir" , 99999.99 , 1000);

    // Book book2(book1);


    // book2.display();


    Book book2 = book1;


    book2.display();
    // book1.display();
}