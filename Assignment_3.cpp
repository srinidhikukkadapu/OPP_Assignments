#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int employeeID;
    string name;
    string department;
    double salary;

public:
    // Manual setup function to populate data
    void setDetails(int empid, string empName, string empDept, double empsal) {
        employeeID = empid; // Fixed variable name from 'id' to 'empid'
        name = empName;
        department = empDept;
        salary = empsal;
    }

    // Function to display employee info (authorized access)
    void displayInfo(bool authorized) const {
        if (authorized) {
            cout << "ID: " << employeeID << "\n" // Fixed 'id' to 'employeeID'
                 << "Name: " << name << "\n"
                 << "Department: " << department << "\n"
                 << "Salary: " << salary << "\n"
                 << "------------------\n";
        } else {
            cout << "Access Denied: you are not authorized to view this record\n"; // Fixed spelling and braces
        }
    }
};

int main() {
    // Using a standard array to store employee objects
    const int MAX_EMPLOYEES = 2;
    Employee staffList[MAX_EMPLOYEES];

    // Populating employee data manually
    staffList[0].setDetails(101, "Alice Smith", "HR", 55000.0);
    staffList[1].setDetails(102, "Bob Jones", "Engineering", 75000.0);

    // Simulate HR authorization check
    bool isAuthorized = true;
    cout << "--- Employee Records (HR view) ---\n";
    
    for (int i = 0; i < MAX_EMPLOYEES; i++) {
        staffList[i].displayInfo(isAuthorized);
    }
    
    return 0;
}
