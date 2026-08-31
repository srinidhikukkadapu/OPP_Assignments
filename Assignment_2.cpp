#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    int rollNumber;
    string name;
    string course;
    int admissionYear;

public:
    // Function to input student data
    void inputDetails() {
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cin.ignore(); 
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Course: ";
        getline(cin, course);
        cout << "Enter Admission Year: ";
        cin >> admissionYear;
        cout << "------------------\n";
    }

    // Function to display student data
    void displayDetails() const {
        cout << "Roll Number: " << rollNumber << "\n";
        cout << "Name: " << name << "\n";
        cout << "Course: " << course << "\n";
        cout << "Admission Year: " << admissionYear << "\n";
        cout << "------------------\n";
    }

    // Function to get roll number
    int getRollNumber() const { 
        return rollNumber; 
    }
};

int main() {
    const int MAX_STUDENTS = 100;
    // Array of student objects
    Student database[MAX_STUDENTS];
    int currentCount = 0;
    int choice;

    cout << "===College Record Digitalization System===\n";

    do {
        // Display menu
        cout << "\n1. Add new student record\n";
        cout << "2. Display all student records\n";
        cout << "3. Search student record by roll number\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << "\n";

        switch (choice) {
            case 1: // Add a new student record
                if (currentCount < MAX_STUDENTS) {
                    cout << "Enter details for student " << currentCount + 1 << ":\n";
                    database[currentCount].inputDetails();
                    currentCount++;
                    cout << "Record saved successfully!\n";
                } else {
                    cout << "Database is full! Cannot add more students.\n";
                }
                break;

            case 2: // Display all student records
                if (currentCount == 0) {
                    cout << "No records found.\n";
                } else {
                    cout << "=== All Student Records ===\n";
                    for (int i = 0; i < currentCount; i++) {
                        database[i].displayDetails();
                    }
                }
                break;

            case 3: // Search student record by roll number
                if (currentCount == 0) {
                    cout << "No records available to search.\n";
                } else {
                    int searchRoll;
                    bool found = false;
                    cout << "Enter Roll Number to search: ";
                    cin >> searchRoll;
                    cout << "\n";

                    for (int i = 0; i < currentCount; i++) {
                        if (database[i].getRollNumber() == searchRoll) {
                            cout << "Record Found:\n";
                            database[i].displayDetails();
                            found = true;
                            break; // Exit loop once found
                        }
                    }
                    if (!found) {
                        cout << "Student with Roll Number " << searchRoll << " not found.\n";
                    }
                }
                break;

            case 4:
                cout << "Exiting system. Goodbye!\n";
                break;

            default:
                cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
