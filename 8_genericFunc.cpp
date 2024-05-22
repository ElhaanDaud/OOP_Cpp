/*Write a C++program to demonstrate the following concepts:
i) Generic function/function template
ii) Generic class/ class template */

#include <iostream>
using namespace std;
template<typename T>

T maximum(T a, T b) {
    return (a > b) ? a : b;
}

template<typename T>

class Pair {
    private:
        T first;
        T second;
    public:
        Pair(T f, T s) : first(f), second(s) {}
        T getFirst() const {
        return first;
        }
        T getSecond() const {
            return second;
        }
};

int main() {
    cout << "Maximum of 5 and 10: " << maximum(5, 10) << endl;
    cout << "Maximum of 3.14 and 6.28: " << maximum(3.14, 6.28) << endl;
    Pair<int> intPair(10, 20);
    cout << "First element of intPair: " << intPair.getFirst() << endl;
    cout << "Second element of intPair: " << intPair.getSecond() << endl;
    Pair<double> doublePair(3.14, 6.28);
    cout << "First element of doublePair: " << doublePair.getFirst() << endl;
    cout << "Second element of doublePair: " << doublePair.getSecond() << endl;
    return 0;
}
