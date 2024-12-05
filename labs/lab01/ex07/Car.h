#ifndef CAR_H
#define CAR_H

class Car
{
private:
	float _tank;
	float _position;
public:
	// constructor
	Car();

	void fillTank(float quantity);
	float moveCar(float distance);
	void getFuelQuantity();
	void getTotalDistanceTraveled();
};

#endif // CAR_H
