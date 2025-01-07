#include <iostream>
using namespace std;

class MyClass {
private:
    int value;

public:
    MyClass(int val){
        this->value=val;
    }

    // Declare friend function
    friend void displayValue(MyClass &obj);
};

// Friend function definition
void displayValue(MyClass &obj) {
    cout << "Value: " << obj.value << endl;  // Access private member
}

int main() {
    MyClass obj(100);
    displayValue(obj);  // Call friend function

    return 0;
}
