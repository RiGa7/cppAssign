#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int speed;

public:
    Vehicle(string b, int s) {
        brand = b;
        speed = s;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Speed: " << speed << " km/h" << endl;
    }
};

class Car : virtual public Vehicle {
protected:
    int numDoors;

public:
    Car(string b, int s, int d) : Vehicle(b, s) {
        numDoors = d;
    }

    void displayCar() {
        displayVehicle();
        cout << "Number of Doors: " << numDoors << endl;
    }
};

class Bike : virtual public Vehicle {
protected:
    bool hasGear;

public:
    Bike(string b, int s, bool g) : Vehicle(b, s) {
        hasGear = g;
    }

    void displayBike() {
        displayVehicle();
        cout << "Has Gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

class SportsCar : public Car, public Bike {
public:
    SportsCar(string b, int s, int d, bool g)
        : Vehicle(b, s), Car(b, s, d), Bike(b, s, g) {}

    void turboMode() {
        cout << "Turbo Mode Activated!" << endl;
    }

    void displaySportsCar() {
        displayCar(); 
        cout << "Has Gear: " << (hasGear ? "Yes" : "No") << endl;
    }
};

int main() {
    SportsCar sc("Ferrari", 300, 2, true);

    cout << "Sports Car Details:" << endl;
    sc.displaySportsCar();
    sc.turboMode();

    return 0;
}
