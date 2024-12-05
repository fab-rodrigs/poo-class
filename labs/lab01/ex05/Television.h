#ifndef TELEVISION_H
#define TELEVISION_H

#include <iostream>

using namespace std;

class Television
{
private:
	int _volume;
	int _channel;
public:
	Television();

	void increaseVolume();
	void decreaseVolume();

	void increaseChannel();
	void decreaseChannel();

	void getVolume() { cout << "\nVolume: " << _volume << endl; }
	void getChannel() { cout << "\nChannel: " << _channel << endl; }
};

#endif // TELEVISION_H

