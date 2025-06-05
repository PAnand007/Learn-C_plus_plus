#include <iostream>
using namespace std;

// Base Class
class Vehicle {
protected:
    string brand;
    int wheels;
    string fuelType;

public:
    Vehicle(string b, int w, string f) : brand(b), wheels(w), fuelType(f) {}

    virtual void displayInfo() {
        cout << "Brand: " << brand
             << ", Wheels: " << wheels
             << ", Fuel: " << fuelType << endl;
    }
};

// Derived Class - Car
class Car : public Vehicle {
public:
    Car() : Vehicle("Honda", 4, "Petrol") {}

    void displayInfo() override {
        cout << "[Car] ";
        // Can access protected members directly
        cout << "Brand: " << brand
             << ", Wheels: " << wheels
             << ", Fuel: " << fuelType << endl;
    }
};

// Derived Class - Bike
class Bike : public Vehicle {
public:
    Bike() : Vehicle("Yamaha", 2, "Petrol") {}

    void displayInfo() override {
        cout << "[Bike] ";
        cout << "Brand: " << brand
             << ", Wheels: " << wheels
             << ", Fuel: " << fuelType << endl;
    }
};

// Derived Class - Truck
class Truck : public Vehicle {
public:
    Truck() : Vehicle("Tata", 6, "Diesel") {}

    void displayInfo() override {
        cout << "[Truck] ";
        cout << "Brand: " << brand
             << ", Wheels: " << wheels
             << ", Fuel: " << fuelType << endl;
    }
};

// Derived Class - Scooty
class Scooty : public Vehicle {
public:
    Scooty() : Vehicle("TVS", 2, "Petrol") {}

    void displayInfo() override {
        cout << "[Scooty] ";
        cout << "Brand: " << brand
             << ", Wheels: " << wheels
             << ", Fuel: " << fuelType << endl;
    }
};

// Main Program
int main() {
    Vehicle* v;

    Car car;
    Bike bike;
    Truck truck;
    Scooty scooty;

    v = &car;     v->displayInfo();
    v = &bike;    v->displayInfo();
    v = &truck;   v->displayInfo();
    v = &scooty;  v->displayInfo();

    return 0;
}
