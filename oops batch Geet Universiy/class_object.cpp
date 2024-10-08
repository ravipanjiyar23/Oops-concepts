#include <iostream>
using namespace std;

class Car {
    // Attributes
    public:
    string brand;
    int year;

    // Method
    void displayInfo() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }

    
};


class hero{
    private:
    int health;
    string name;

    public:
    void displayInfo() {
        cout << "Name: " << name << ", Health: " << health << endl;
    }

    int get_health(){
        return health;
    }

    void set_health(int h){
        health = h;
    }

};



int main() {
    // Create an object of Car

    //Static allocation
    Car myCar;
    myCar.brand = "Toyota";
    myCar.year = 2020;

    myCar.displayInfo();



    hero h1;

    h1.set_health(10);
    cout<<h1.get_health();




    //dynamic allocaton
    Car *mycar = new Car;
    // mycar->set_brand("toyota");
    mycar->brand="Toyota";
    mycar->year=2024;
    mycar->displayInfo();  // Output: Brand: Toyota, Year: 2020


    // create a object of hero


    return 0;
}
