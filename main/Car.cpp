#include "Car.h"
#include <iostream>
using namespace std;

Car::Car() {}

Car::Car(double fuelConsumption, double cost, int loadCapacity, int numSeats)
    : Transport(fuelConsumption, cost, loadCapacity, numSeats) {}

void Car::Init()
{
    cout << "---Car---\n";

    cout << "Enter fuel consumption per 1 km: ";
    cin >> fuelConsumption;

    cout << "Enter cost: ";
    cin >> cost;

    cout << "Enter capacity: ";
    cin >> loadCapacity;

    cout << "Enter number of seats: ";
    cin >> numSeats;
    
    cout << "\n";
}

void Car::Print()
{
    cout << "---Car---\n"
        << "Fuel consumption per 1 km: " << fuelConsumption << "\n"
        << "Cost: " << cost << "\n"
        << "Load Capacity: " << loadCapacity << "\n"
        << "Passenger Seats: " << numSeats << "\n\n";
}

double Car::FuelConsumption(double distance)
{
    return distance * fuelConsumption;
}

double Car::GetCost()
{
    return cost;
}

void Car::SetCost(double cost)
{
    this->cost = cost;
}

double Car::GetLoadCapacity()
{
    return loadCapacity;
}

void Car::SetLoadCapacity(double loadCapacity)
{
    this->loadCapacity = loadCapacity;
}

int Car::GetPassengerSeats()
{
    return numSeats;
}

void Car::SetPassengerSeats(int numSeats)
{
    this->numSeats = numSeats;
}
