#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
    int year;

public:
    Vehicle(string b, int y) {
        brand = b;
        year = y;
    }

    void displayVehicle() {
        cout << "Brand: " << brand << endl;
        cout << "Year: " << year << endl;
    }
};

class Car : public Vehicle {
    string fuelType;

public:
    Car(string b, int y, string f) : Vehicle(b, y) {
        fuelType = f;
    }

    void displayCar() {
        displayVehicle();
        cout << "Fuel Type: " << fuelType << endl;
    }
};

class Bike : public Vehicle {
    int engineCC;

public:
    Bike(string b, int y, int cc) : Vehicle(b, y) {
        engineCC = cc;
    }

    void displayBike() {
        displayVehicle();
        cout << "Engine CC: " << engineCC << endl;
    }
};

int main() {
    Car car1("Toyota", 2022, "Petrol");
    Bike bike1("Yamaha", 2020, 150);

    cout << "Car Details:" << endl;
    car1.displayCar();

    cout << endl << "Bike Details:" << endl;
    bike1.displayBike();

    return 0;
}