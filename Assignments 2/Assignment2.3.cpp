#include <iostream>
#include <string>

using namespace std;

namespace NB {
    struct Student {
        int rollno;
        string name;
        int marks;

      

        void displaystudent() {
            cout << "Student: " << rollno << "__" << name << "__" << marks << endl;
        }

        void acceptStudent() {
            cout << "Enter the student details: ";
            cin >> rollno >> name >> marks;
        }
    };
}



int main() {
    NB::Student student; 
    student.acceptStudent();
        student.displaystudent();


return 0;
}