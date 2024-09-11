#include <iostream>
#include <string>

using namespace std;

struct Student {
    int rollno;
    string name;
    int marks;

    void initializeStudent() {
        rollno = 15;
        name = "Pranjal";
        marks = 45;
    }

    void printStudentOnConsole() {
        cout << "Student: " << rollno << "__" << name << "__" << marks << endl;
    }

    void acceptStudentFromConsole() {
        cout << "Enter the student details: ";
        cin >> rollno >> name >> marks;
    }
};

int menu() {
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. ADD Student Details" << endl;
    cout << "2. DISPLAY Student Details" << endl;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int main() {
    Student student;
    student.initializeStudent();

    int choice;
    while ((choice = menu()) != 0) {
        switch (choice) {
            case 1:
                student.acceptStudentFromConsole();
                break;
            case 2:
                student.printStudentOnConsole();
                break;
            default:
                cout << "Wrong Choice..." << endl;
                break;
        }
    }

    return 0;
}