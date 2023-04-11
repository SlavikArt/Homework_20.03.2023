#include "Truck.h"
#include <iostream>
using namespace std;

Truck::Truck() {}

Truck::Truck(double fuelConsumption, double cost, int loadCapacity, int numSeats)
    : Transport(fuelConsumption, cost, loadCapacity, numSeats) {}

void Truck::Init()
{
    cout << "---Truck---\n";

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

void Truck::Print()
{
    cout << "---Truck---\n"
        << "Fuel consumption per 1 km: " << fuelConsumption << "\n"
        << "Cost: " << cost << "\n"
        << "Load Capacity: " << loadCapacity << "\n"
        << "Passenger Seats: " << numSeats << "\n\n";
}

double Truck::FuelConsumption(double distance)
{
    return distance * fuelConsumption;
}

double Truck::GetCost()
{
    return cost;
}

void Truck::SetCost(double cost)
{
    this->cost = cost;
}

double Truck::GetLoadCapacity()
{
    return loadCapacity;
}

void Truck::SetLoadCapacity(double loadCapacity)
{
    this->loadCapacity = loadCapacity;
}

int Truck::GetPassengerSeats()
{
    return numSeats;
}

void Truck::SetPassengerSeats(int numSeats)
{
    this->numSeats = numSeats;
}
