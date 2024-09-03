#include<iostream>
using namespace std;

class HotelMenu{
    private:
        string name;
        string type;
        int price;

    public:
    
        HotelMenu(string name , string type , int price){
            this->name = name;
            this->type = type;
            this->price = price;
        }

        void display(){
            cout << name << " " << type << " " << price << endl;
        }


        ~HotelMenu(){
            cout << "Object destroyed" << endl;
        }
};



int main(){
    HotelMenu menu1("Pizza" , "Margreta" , 250);
    HotelMenu menu2("Vadapav" , "Aamchi" , 25);

    menu1.display();

    menu2.display();
}