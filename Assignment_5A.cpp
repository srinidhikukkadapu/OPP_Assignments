#include <iostream>
#include <string>
using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    string course;

public:
    // Constructor
    Student(int rollNumber, string name, string course) {
        this->rollNumber = rollNumber;
        this->name = name;
        this->course = course;
    }

    // Display student details
    void displayDetails() {
        cout << "\nStudent Details" << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Name: " << name << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    int rollNumber;
    string name;
    string course;

    // Take user input
    cout << "Enter Roll Number: ";
    cin >> rollNumber;
    
    // Clear the input buffer after reading an integer
    cin.ignore(); 

    cout << "Enter Name: ";
    getline(cin, name);

    cout << "Enter Course: ";
    getline(cin, course);

    // Create object with user data
    Student s1(rollNumber, name, course);
    s1.displayDetails();

    return 0;
}
