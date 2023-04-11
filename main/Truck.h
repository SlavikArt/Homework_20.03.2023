#pragma once
#include "Transport.h"

class Truck : public Transport
{
public:
    Truck();
    Truck(double fuelConsumption, double cost, int loadCapacity, int numSeats);

    void Init();

    void Print();

    double FuelConsumption(double distance);

    double GetCost();
    void SetCost(double cost);

    double GetLoadCapacity();
    void SetLoadCapacity(double loadCapacity);

    int GetPassengerSeats();
    void SetPassengerSeats(int numSeats);
};