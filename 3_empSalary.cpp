//Given that an employee class contains following members:Data members: employee name, employee name, Basic, DA, IT, and Net Salary. Write a C++/Java program to read the data of N employee and compute Net salary of each employee.(DA=50% of basic and Income Tax (IT)=25% of Net Salary.

#include <iostream>
#include <string>
using namespace std;

class Employee {
    private:
        string employeeName;
        int employeeID;
        double basic;
        double DA;
        double IT;
        double netSalary;
    public:
        // Function to read employee data
        void readData() {
            cout << "Enter Employee Name: ";
            cin.ignore(); // Clear input buffer
            getline(cin, employeeName);
            cout << "Enter Employee ID: ";
            cin >> employeeID;
            cout << "Enter Basic Salary: ";
            cin >> basic;
        }
        // Function to calculate DA
        void calculateDA() {
            DA = 0.5 * basic; // DA is 50% of basic
        }
        // Function to calculate IT
        void calculateIT() {
            IT = 0.25 * netSalary; // IT is 25% of net salary
        }
        // Function to calculate net salary
        void calculateNetSalary() {
            netSalary = basic + DA - IT;
        }
        // Function to display employee details
        void displayDetails() {
            cout << "\nEmployee Name: " << employeeName << endl;
            cout << "Employee ID: " << employeeID << endl;
            cout << "Basic Salary: " << basic << endl;
            cout << "DA: " << DA << endl;
            cout << "Income Tax: " << IT << endl;
            cout << "Net Salary: " << netSalary << endl;
        }
};


int main() {
    int n;
    cout << "Enter the number of employees: ";
    cin >> n;
    Employee emp[n]; // Array of Employee objects
    // Read data for each employee
    for (int i = 0; i < n; ++i) {
        cout << "\nEnter details for Employee " << i+1 << ":" << endl;
        emp[i].readData();
        emp[i].calculateDA();
        emp[i].calculateNetSalary();
        emp[i].calculateIT();
    }
    // Display details for each employee
    cout << "\nEmployee Details:\n";
    
    for (int i = 0; i < n; ++i) {
        cout << "\nDetails for Employee " << i+1 << ":" << endl;
        emp[i].displayDetails();
    }

    return 0;
}

