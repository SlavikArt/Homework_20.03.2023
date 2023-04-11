#include "Transport.h"
#include "Car.h"
#include "Truck.h"
#include "Motorcycle.h"

#include <iostream>
using namespace std;

int main()
{
	Transport* transports[3] {
		new Car(1.1, 50000, 800, 4),
		new Truck(2.3, 300000, 5000, 2),
		new Motorcycle(0.5, 13000, 200, 1)
	};

	for (int i = 0; i < 3; i++)
		transports[i]->Print();

	for (int i = 0; i < 3; i++)
	{
		transports[i]->Init();

		double distance;

		cout << "Enter distance: ";
		cin >> distance;

		cout << "Fuel consumption: " << transports[i]->FuelConsumption(distance) << "\n\n";
	}

	for (int i = 0; i < 3; i++)
		transports[i]->Print();

	for (int i = 0; i < 3; i++)
		delete transports[i];
}
