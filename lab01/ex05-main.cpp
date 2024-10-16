#include <iostream>
#include "Television.h"

using namespace std;

int main()
{
    cout << "\nTelevision!" << endl;

    Television television;

    television.getVolume();
    television.getChannel();

    television.increaseVolume();
    television.increaseChannel();
    television.increaseVolume();
    television.increaseChannel();

    television.getVolume();
    television.getChannel();

    television.decreaseVolume();
    television.decreaseChannel();
    television.decreaseVolume();
    television.decreaseChannel();
    television.decreaseVolume();
    television.decreaseChannel();

    television.getVolume();
    television.getChannel();

    for (int i = 0; i <= 75; i++) {
        television.increaseChannel();
    }
    for (int i = 0; i <= 100; i++) {
        television.increaseVolume();
    }

    television.getVolume();
    television.getChannel();
}
