/*Question 6: write a C++ program to demonstrate the following concepts:
i) Binary operator overloading by using + and – operators
ii) Unary operator overloading by using – operator */

#include <iostream>
using namespace std;

class Number {
    private:
        int value;

    public:
        Number(int val) : value(val) {}
        Number operator+(const Number& num) {
        Number result(value + num.value);
        return result;
        }

        Number operator-(const Number& num) {
            Number result(value - num.value);
            return result;
        }

        Number operator-() {
            Number result(-value);
            return result;
        }

        void display() {
            cout << "Value: " << value << endl;
        }
};

int main() {
    Number num1(10);
    Number num2(5);
    Number sum = num1 + num2;
    cout << "Sum: ";
    sum.display();
    Number difference = num1 - num2;
    cout << "Difference: ";
    difference.display();
    Number negation = -num1;
    cout << "Negation of num1: ";
    negation.display();
    return 0;
}

