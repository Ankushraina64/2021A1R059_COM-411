#include <iostream>
#include <string>
using namespace std;

class Course {
 private:
  string cr_name;
  string cr_id;
  string sem;
  int cr_std;
  int time;


 public:
  Course(string id, string n, string s,int en,int t)
  {
    sem = s;
    cr_id = id;
    cr_name = n;
    cr_std=en;
    time=t;
  }

  void display()
   {
    cout << "\nSemester: " << sem << endl;
    cout << "\nCourse ID: " << cr_id << endl;
    cout << "Course Name: " << cr_name << endl;
    cout << "Number of Student Enrolled: " << cr_std << endl;
    cout<<"Time for the course : "<<time<<" min";
  }
};

int main() {
    int n,cr_std,time;
    string sem;
    cout << "Enter the Semester: ";
    cin >> sem;
    cout << "\nEnter the number of Subjects: ";
    cin >> n;

    Course*courses[n];
  for (int i = 0; i < n; i++) {
  string cr_name;
  string cr_id;

  cout << "\nCourse ID: " ;
  cin>> cr_id;
  cout << "Course Name: ";
  cin>>cr_name;
  cout << "Enter the Number of Student Enrolled: ";
  cin >> cr_std;
  cout << "Enter the course time (min): ";
  cin >> time;

  courses[i] = new Course(cr_id, cr_name, sem,cr_std,time);
    }

  cout << "\nDetails of course:" << endl;
    for (int i = 0; i < n; i++) {
        courses[i]->display();
    }

  return 0;
}

