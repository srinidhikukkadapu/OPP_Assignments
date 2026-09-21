# include <iostream>
# include <string>

using namespace std;
class Book 
{ 
private:
   int bookID;
   string title;
   string author;
   double price;
public:
  // default constuctor with default value
  Book()
 {
  bookID = 101;
  title = "C++ programming";
  author = "Bjarne Stroustrup";
  price = 500.00;
 }
 // parameterized counstructor
 Book(int id, string t, string a, double p)
 {
  bookID = id;
  title = t;
  author = a;
  price = p;
 }
 // Function to display book detail
void display()
 { 
   cout << "Book ID:" << bookID << endl;
   cout << "Title:" << title << endl;
   cout << "Author:" << author << endl;
   cout << "Price: Rs." << price << endl;
   cout <<"----------------------" << endl;
 }
};

int main()
 {
  //first book created using default constructor
  Book book1;

  //second book created using parameterized constructor
  Book book2(102, "oBJECT oREIENTED programming", "Robert Lafore", 650.00);
 
  cout << "First Book Details:" << endl;
  book1.display();
  
 cout << "Second Book Detail:"<< endl;
 book2.display();

 return 0;
}
