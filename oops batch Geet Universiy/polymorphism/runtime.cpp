#include <iostream>
using namespace std;

class Base {
public:

    virtual void display()
    {
        cout << "Display method of Base class" << endl;
    }

    // virtual ~Base() {}
};

class Derived : public Base {
public:
    // Override the display method
    void display() override
    {
        cout << "Display method of Derived class" << endl;
    }
};

int main()
{
    Base* basePtr;
    Derived derivedObj;

    // Point base class pointer to derived class object
    basePtr = &derivedObj;

    // Call the display function
    // This will call the display method of the Derived
    // class due to the virtual function mechanism
    basePtr->display();

    return 0;
}