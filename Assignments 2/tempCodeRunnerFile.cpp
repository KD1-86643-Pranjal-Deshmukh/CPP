#include <iostream>

using namespace std;

struct Time {
    int day;
    int month;
    int year;

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

int main() {
    Time t;

    t.acceptDateFromConsole();
    t.printDateOnConsole();

    if (isLeapYear(t.year)) {
        cout << "The year " << t.year << " is a leap year." << endl;
    } else {
        cout << "The year " << t.year << " is not a leap year." << endl;
    }

    return 0;
}