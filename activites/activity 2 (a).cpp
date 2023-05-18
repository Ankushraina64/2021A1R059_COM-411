#include <iostream>
using namespace std;

class Course {
private:
    int courseId; // Private member to ensure encapsulation, restricting direct access from outside the class.
    string courseName; // Private member to ensure encapsulation, restricting direct access from outside the class.
public:
    // Public member functions to provide controlled access to private members.
    int getCourseId() {
        return courseId;
    }

    void setCourseId(int id) {
        courseId = id;
    }

    string getCourseName() {
        return courseName;
    }

    void setCourseName(string name) {
        courseName = name;
    }
};

class Student {
private:
    int studentId; // Private member to ensure encapsulation, restricting direct access from outside the class.
    string studentName; // Private member to ensure encapsulation, restricting direct access from outside the class.
    Course studentCourse; // Private member of type Course to maintain association with a specific course.
public:
    // Public member functions to provide controlled access to private members.
    int getStudentId() {
        return studentId;
    }

    void setStudentId(int id) {
        studentId = id;
    }

    string getStudentName() {
        return studentName;
    }

    void setStudentName(string name) {
        studentName = name;
    }

    Course getStudentCourse() {
        return studentCourse;
    }

    void setStudentCourse(Course course) {
        studentCourse = course;
    }
};

int main() {
    Student student;
    student.setStudentId(50);
    student.setStudentName("Rakshit Gupta");

    Course course;
    course.setCourseId(411);
    course.setCourseName("C++ Lab");

    student.setStudentCourse(course);

    cout << "Student ID: " << student.getStudentId() << endl;
    cout << "Student Name: " << student.getStudentName() << endl;
    cout << "Course ID: " << student.getStudentCourse().getCourseId() << endl;
    cout << "Course Name: " << student.getStudentCourse().getCourseName() << endl;

    return 0;
}
