#include "Motorcycle.h"
#include <iostream>
using namespace std;

Motorcycle::Motorcycle() {}

Motorcycle::Motorcycle(double fuelConsumption, double cost, int loadCapacity, int numSeats)
    : Transport(fuelConsumption, cost, loadCapacity, numSeats) {}

void Motorcycle::Init()
{
    cout << "---Motorcycle---\n";

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

void Motorcycle::Print()
{
    cout << "---Motorcycle---\n"
        << "Fuel consumption per 1 km: " << fuelConsumption << "\n"
        << "Cost: " << cost << "\n"
        << "Load Capacity: " << loadCapacity << "\n"
        << "Passenger Seats: " << numSeats << "\n\n";
}

double Motorcycle::FuelConsumption(double distance)
{
    return distance * fuelConsumption;
}

double Motorcycle::GetCost()
{
    return cost;
}

void Motorcycle::SetCost(double cost)
{
    this->cost = cost;
}

double Motorcycle::GetLoadCapacity()
{
    return loadCapacity;
}

void Motorcycle::SetLoadCapacity(double loadCapacity)
{
    this->loadCapacity = loadCapacity;
}

int Motorcycle::GetPassengerSeats()
{
    return numSeats;
}

void Motorcycle::SetPassengerSeats(int numSeats)
{
    this->numSeats = numSeats;
}
