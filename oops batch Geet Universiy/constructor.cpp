#include <iostream>
using namespace std;

class MyClass {
public:
    int value;

    // Default constructor
    MyClass() {
        value = 0;
    }

    // Parameterized constructor
    MyClass(int val) {
        value = val;
    }

    //copy constructor
    MyClass(MyClass &obj1) {
        value = obj1.value;
    }
};

int main() {
    MyClass obj;  // Default constructor is called
    cout << "Value: " << obj.value << endl;  // Output: Value: 0


    MyClass obj1(10); // parametrized constructor
    cout<<"Value: " << obj1.value<<endl;

    MyClass obj2 = obj1; // copy constructor
    // MyClass obj2(obj1);
    cout<<"Value: " << obj2.value<<endl;
    return 0;
}
