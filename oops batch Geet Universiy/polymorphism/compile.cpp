#include <iostream>
using namespace std;

class Parent {
public:
    void Print()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void Print()
    {
        cout << "Derived Function" << endl;
    }
};

int main()
{
    Child ch;
    ch.Print();
    return 0;
}