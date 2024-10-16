#ifndef TELEVISION_H
#define TELEVISION_H

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

	void getVolume();
	void getChannel();
};

#endif // TELEVISION_H
