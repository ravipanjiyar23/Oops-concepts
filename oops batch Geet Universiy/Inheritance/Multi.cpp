#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    void print(){
        cout<<"I m A"<<endl;
    }
};
class B{
    public:
    void display(){
        cout<<"I m B"<<endl;
    }
};

class C:public B{
    public:

};

int main(){

    C obj1;
    obj1.display();
    obj1.print();

    return 0;
}