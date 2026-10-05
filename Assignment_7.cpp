include <iostream>
# include <string>
using namespace std;

class person
{ 
protected:
     string name;
     int age;
     string contact;

public:
     person(string n, int a, string c)
     {
       name = n;
       age = a;
       contact = c;
     }
  };
 class student : public person
{
private:
    int rollNumber;
string branch;
public:
   student(string n, int a, string c, int r, string b)
       : person(n, a, c)
   {
       rollNumber = r;
      branch= b;
   }

  void display()
  {
      cout << "Name: " << name << endl;
      cout << "age:" << age << endl;
      cout << "contact:" << contact << endl;
      cout << "roll number:" << rollNumber << endl;
      cout << "Branch:" << branch << endl;
   }
};

int main()
{
    student s1("srinidhi", 18, "9405947565", 64, "AIML");
    s1.display();
   return 0;
}


