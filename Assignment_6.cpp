# include <iostream>
using namespace std;

class Employee
{ 
 private:
     int emp_id;
     string name;

public:
    // consturctor
    Employee(int id, string n)
   
 { 
     emp_id =id;
     name = n;
     cout << "Employee record created for " << name <<endl;
 }
 // Display employee details
 void display()
{
   cout << "Employee ID:" << emp_id << endl;
   cout << "Employee Name:" << name << endl;
}
 
//desturctor
 ~Employee()
  {
   cout << "Employee Record removed for " << name << endl;
  }
};

int main()
{
   //creating an employee object
  Employee emp(64, "srinidhi");

 // Displaying employee details
  emp.display();
 
// Object is automatically destroyed when main () ends
return 0;
}


