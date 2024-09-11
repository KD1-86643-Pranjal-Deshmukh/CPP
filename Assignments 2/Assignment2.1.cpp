#include <iostream>

using namespace std;

struct Time {
    int day;
    int month;
    int year;


    void intDATE(){
        int day=1;
    int month=1;
    int year=1990;
        
    }
     


    void printDateOnConsole() {
        cout << "Date: " << day << "/" << month << "/" << year << endl;
    }

    void acceptDateFromConsole() {
        cout << "Enter the date (day/month/year): ";
        cin >> day >> month >> year;
    }
};

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) | (year % 400 == 0);
}
int menu()
{
    int choice;
    cout << "0. EXIT" << endl;
    cout << "1. ADD Date" << endl;
    cout << "2. DISPLAY Date" << endl;
    cout << "Enter your Date - ";
    cin >> choice;
    return choice;
}

int main() {
    Time t;
    t.intDATE();
    t.acceptDateFromConsole();
    t.printDateOnConsole();

    if (isLeapYear(t.year)) {
        cout << "The year " << t.year << " is a leap year." << endl;
    } else {
        cout << "The year " << t.year << " is not a leap year." << endl;
    }
int choice;
    Time t1;
    while ((choice = menu()) != 0)
    {
        switch (choice)
        {
        case 1:
            t.acceptDateFromConsole();
            break;
        case 2:
            t.printDateOnConsole();
            break;
        default:
            cout << "Wrong Choice..." << endl;
            break;
        }
    }
    return 0;
    
}
