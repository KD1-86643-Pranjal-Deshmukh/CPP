#include <iostream>
using namespace std;

class Volume {
public:
    int length, width, height;

    // Parameterless constructor
    Volume() {
        length = 10;
        width = 20;
        height = 30;
    }

    // Single parameterized constructor
    Volume(int value) {
        length = value;
        width = value;
        height = value;
    }

    // Function to calculate volume with three parameters
    double volume(double len, double height, double width) {
        return len * height * width;
    }

    // Display volume
    void display() {
        cout << "Volume: " << length * width * height << endl;
    }
};

int main() {
    int choice;
    while (1) {
        cout << "\nMenu:\n";
        cout << "1. Calculate Volume with default values\n";
        cout << "2. Calculate Volume with same length, width, and height\n";
        cout << "3. Calculate Volume with different length, width, and height\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 4) {
            break; 
        }

        switch (choice) {
            case 1: {
                Volume v1;
                v1.display();
                break;
            }
            case 2: {
                int val;
                cout << "Enter the value for length, width, and height: ";
                cin >> val;
                Volume v2(val);
                v2.display();
                break;
            }
            case 3: {
                double len, wid, hei;
                cout << "Enter length, width, and height: ";
                cin >> len >> wid >> hei;
                Volume v3;
                double vol = v3.volume(len, wid, hei);
                cout << "Volume: " << vol << endl;
                break;
            }
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    }

    return 0;
}
