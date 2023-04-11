#include "Transport.h"

Transport::Transport() :
    fuelConsumption(0), cost(0),
    loadCapacity(0), numSeats(0) {}

Transport::Transport(double fuelConsumption, double cost, int loadCapacity, int numSeats)
    : fuelConsumption(fuelConsumption), cost(cost), 
    loadCapacity(loadCapacity), numSeats(numSeats) {}
