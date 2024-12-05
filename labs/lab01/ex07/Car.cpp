#include "Car.h"
#include <iostream>

using namespace std;

Car::Car()
{
	_tank = 0; // max = 50 l
	_position = 0; // 15km/l
}

// fill tank (quantity in l)
void Car::fillTank(float quantity)
{
	if (_tank == 50) {
		cout << "\nTanque cheio!" << endl;
	}
	else if ((_tank + quantity) <= 50) {
		_tank += quantity;
		if (quantity >= 0) {
			cout << "\nEnchendo " << quantity << "l..." << endl;
		}
		else {
			cout << "\nEsvaziando " << quantity << "l..." << endl;
		}

	}
	else {
		cout << "\nQuantidade acima do limite!" << endl;
	}
}

// move car (distance in km)
float Car::moveCar(float distance)
{
	_position += distance;
	cout << "\nAndando " << _position << "km..." << endl;
	if (_position >= 15) {
		return _position / 15;
	}
	else {
		return 0;
	}
}

// return fuel quantity 
void Car::getFuelQuantity()
{
	cout << "\nQuantidade de combustivel: " << _tank << "l" << endl;
}

// return total distance traveled
void Car::getTotalDistanceTraveled()
{
	cout << "\nDistancia percorrida: " << _position << "km" << endl;
}

