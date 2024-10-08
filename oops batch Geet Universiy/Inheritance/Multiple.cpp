#include <iostream>
using namespace std;


class Faculty {
public:
    void teach() {
        cout << "Teaching a class." << endl;
    }
};

// Base class 2: Student
class Student {
public:
    void study() {
        cout << "Studying for exams." << endl;
    }
};

// Derived class: TeachingAssistant
class TeachingAssistant : public Faculty, public Student {
public:
    void assist() {
        cout << "Assisting in a lab session." << endl;
    }
};


class Boss {
public:
    void info() {
        cout << "This is a person." << endl;
    }
};

class Employee {
public:
    void job() {
        cout << "This person is an employee." << endl;
    }
};

class Manager : public Boss, public Employee {
public:
    void role() {
        cout << "This employee is a manager." << endl;
    }
};

int main() {
    Manager mgr;
    mgr.info(); // Inherited from Person class
    mgr.job();  // Inherited from Employee class
    mgr.role(); // Specific to Manager class
    return 0;
}
