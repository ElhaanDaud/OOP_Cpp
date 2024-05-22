//Write a C++ program to access the overridden function of the derive class by using the pointer of the base class

#include <iostream>
using namespace std;


class Base {
    public:
        virtual void display() {
        cout << "Base class display() function" << endl;
    }
};

class Derived : public Base {
    public:
        void display() override {
        cout << "Derived class display() function" << endl;
    }
};

int main() {
    Base *ptr;
    Derived obj;
    ptr = &obj;
    ptr->display();
    return 0;
}