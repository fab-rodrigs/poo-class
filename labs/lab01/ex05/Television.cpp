#include "Television.h"
#include <iostream>

using namespace std;

Television::Television()
{
	_volume = 0;
	_channel = 0;
}

void Television::increaseVolume()
{
	if (_volume < 100) {
		_volume++;
	}
	else {
		cout << "\nMax volume!" << endl;
	}
}

void Television::decreaseVolume()
{
	if (_volume > 0) {
		_volume--;
	}
	else {
		cout << "\nMin volume!" << endl;
	}
}

void Television::increaseChannel()
{
	if (_channel < 75) {
		_channel++;
	}
	else {
		cout << "\nMax channel!" << endl;
	}
}

void Television::decreaseChannel()
{
	if (_channel > 0) {
		_channel--;
	}
	else {
		cout << "\nMin channel!" << endl;
	}
}

