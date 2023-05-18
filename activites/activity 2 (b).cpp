#include <iostream>
#include <string>
using namespace std;
// creating a class
class Student {
 private:
 string name;
  int roll_no,dd, mm, yy, subject;
 string father_name;
 string phne_no;
 string semester;

 public://Access Modifier
    //Entering details through Parameterized Constructor
  Student(std::string n,string fn,string p, int r, int d, int m, int y, int sub,string sem)
  {
    name = n;
    father_name = fn;
    phne_no = p;
    roll_no = r;
    dd = d;
    mm = m;
    yy = y;
    subject = sub;
    semester = sem;

  }

  void display()                //Member Function for displaying the data
   {
   cout << "Name: " << name <<endl;
   cout << "Father Name: " << father_name <<endl;
   cout << "Phone Number: " << phne_no <<endl;
   cout << "Date of Birth: " <<dd<<" - "<<mm<<" - "<<yy <<endl;
   cout << "Roll No: " << roll_no <<endl;
   cout << "Semester: " << semester <<endl;
   cout << "Number of Subjects: " << subject <<endl;

  }
};  //Class ends here

int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;

    Student *students[n];  // object of a student class is creating

  for (int i = 0; i < n; i++) {
 string name;
  int roll_no, dd, mm, yy, subject ;
 string father_name;
 string phne_no;
 string semester;

 cout << "Enter the name of the student: ";
 cin >> name;

 cout << "Enter Father Name: ";
 cin >> father_name;

 cout << "Enter Phone Number: ";
 cin >> phne_no;

 cout << "Enter Date of Birth: ";
 cin >> dd>>mm>>yy;

 cout << "Enter the roll number of the student: ";
 cin >> roll_no;

 cout << "Enter Semester: ";
 cin >> semester;

 cout << "Enter the Number of Subjects: ";
 cin >> subject;

  students[i] = new Student(name, father_name, phne_no, roll_no, dd, mm, yy, subject, semester);
    }

  cout << "Details of students:" << endl;
    for (int i = 0; i < n; i++) {
        students[i]->display();
    }

  return 0;
}
