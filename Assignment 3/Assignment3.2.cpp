#include <iostream>
using namespace std;

class Tollbooth {
private:
    unsigned int totalCars;
    double totalMoney;
    unsigned int payingCars;
    unsigned int nonPayingCars;

public:
    
    Tollbooth() : totalCars(0), totalMoney(0.0), payingCars(0), nonPayingCars(0) {}

    
    void payingCar() {
        totalCars++;
        payingCars++;
        totalMoney += 15;
    }

    void nopayCar() {
        totalCars++;
        nonPayingCars++;
    }

    
    void printOnConsole() const {
        cout << "Total Cars: " << totalCars << endl;
        cout << "Paying Cars: " << payingCars << endl;
        cout << "Non-paying Cars: " << nonPayingCars << endl;
        cout << "Total Money Collected: " << totalMoney << endl;
    }
};

int main() {
    Tollbooth booth;

    
    booth.payingCar();
    booth.payingCar();
    booth.nopayCar();
    booth.payingCar();
    booth.nopayCar();

    
    booth.printOnConsole();

    return 0;
}
