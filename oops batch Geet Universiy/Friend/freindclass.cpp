#include <iostream>
using namespace std;

class ClassA {
private:
    int secretValue;

public:
    ClassA(int val) : secretValue(val) {}

    // Declare ClassB as a friend
    friend class ClassB;
};

class ClassB {
public:
    void revealSecret(ClassA &a) {
        cout << "Secret Value in ClassA: " << a.secretValue << endl;  // Access private member
    }
};

int main() {
    ClassA a(200);
    ClassB b;
    b.revealSecret(a);  // Access ClassA's private member through friend class

    return 0;
}
