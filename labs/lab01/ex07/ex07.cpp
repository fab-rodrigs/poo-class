#include <iostream>
#include "Car.h"

using namespace std;

int main()
{
    cout << "\nCarro!" << endl;

    Car car;

    car.getFuelQuantity();
    car.getTotalDistanceTraveled();

    car.fillTank(30);
    car.getFuelQuantity();
    car.fillTank(30);


    float consumption = car.moveCar(30);
    car.fillTank(-consumption);
    car.getFuelQuantity();
    car.getTotalDistanceTraveled();
}
