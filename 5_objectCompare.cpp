//Create a class shape with the following members: Data members: length, breadth, height Members functions: vol, comparison Create two objects of shape named S1 and S2. Compare these objects by using this pointer. Kindly assign the  values to the data members through the constructor.
#include <iostream>
using namespace std;

class Shape {
    private:
        double length;
        double breadth;
        double height;

    public:
        Shape(double l, double b, double h) : length(l), breadth(b), height(h) {} double vol() {
            return length * breadth * height;
        }

    void comparison(Shape *ptr) {
        double vol1 = this->vol();
        double vol2 = ptr->vol();

        if (vol1 > vol2){
            cout << "Object S1 has a larger volume than S2." << endl;
        }
        
        else if (vol1 < vol2){
             cout << "Object S2 has a larger volume than S1." << endl;
        }
       
        else{
            cout << "Both objects have the same volume." << endl;
        }
    }
};

int main() {
    Shape S1(5.0, 3.0, 2.0);
    Shape S2(4.0, 4.0, 4.0);
    S1.comparison(&S2);
    return 0;
}
