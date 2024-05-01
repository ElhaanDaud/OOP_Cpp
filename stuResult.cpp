//Consider the following four classes: student, marks, sports and result. marks derived from student by single level inheritance . result is derived from both marks and sport by multiple inheritance. write a c++ program to demonstrate the concept of hybrid inheritance as per the above conditions

#include <iostream>
#include <string>
using namespace std;


class Student {
    protected:
    string name;
    int rollNumber;
    public:
        void setData(string n, int r) {
            name = n;
            rollNumber = r;
        }
    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Marks : public Student {
    protected:
        int marks;
    public:
        void setMarks(int m) {
            marks = m;
        }
    void displayMarks() {
        cout << "Marks: " << marks << endl;
        }
};

class Sports {
    protected:
        string sportName;
        int score;
    public:
        void setScore(string s, int sc) {
            sportName = s;
            score = sc;
        }
        void displayScore() {
        cout << "Sport: " << sportName << endl;
        cout << "Score: " << score << endl;
        }
};

class Result : public Marks, public Sports {
    public:
    void displayResult() {
        displayData();
        displayMarks();
        displayScore();
}
};


int main() {
    Result studentResult;
    studentResult.setData("John", 101);
    studentResult.setMarks(85);
    studentResult.setScore("Football", 90);
    cout << "Student Result:\n";
    studentResult.displayResult();
    return 0;
}
