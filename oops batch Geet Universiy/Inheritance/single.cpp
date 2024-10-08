#include <bits/stdc++.h>
using namespace std;

class Btech_3rd_sem {
    public:
    int no_of_stud;
    // vector<string> subj;
    int no_of_sub;
    
    void display(){
        cout<<no_of_stud<<endl;
        cout<<no_of_sub<<endl;
    }
};
class Students : public Btech_3rd_sem{
    public:
    string name;
    int roll_no;


    void print(){
        cout<<name<<endl;
        cout<<roll_no<<endl;
    }
};


class Animal {
public:
    void eat() {
        cout << "This animal is eating." << endl;
    }
};

class Dog : public Animal {
public:
    void bark() {
        cout << "The dog is barking." << endl;
    }
};

int main() {
    Dog dog;
    dog.eat();  // Inherited from Animal class
    dog.bark(); // Specific to Dog class

    Students s1;

    s1.display();

    return 0;
}
