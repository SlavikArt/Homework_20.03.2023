#pragma once

class Transport
{
protected:
    double fuelConsumption;
    double cost;
    double loadCapacity;
    int numSeats;

public:
    Transport();
    Transport(double fuelConsumption, double cost, int loadCapacity, int numSeats);
    
    virtual void Init() = 0;
    virtual void Print() = 0;

    virtual double FuelConsumption(double distance) = 0;

    virtual double GetCost() = 0;
    virtual void SetCost(double cost) = 0;

    virtual double GetLoadCapacity() = 0;
    virtual void SetLoadCapacity(double loadCapacity) = 0;

    virtual int GetPassengerSeats() = 0;
    virtual void SetPassengerSeats(int numSeats) = 0;
};
