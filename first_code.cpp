#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class World {        // Classe mundo
private:
    string _name;    // objeto "_name" da classe "string"
public:
    void sayHello(); // método da classe mundo
};

void sayHello(){
    printf("Hello C World!\n");
}

void World::sayHello(){
    cout << "Hello World!" << endl;
}

int main()
{
    sayHello();

    World obj;
    obj.sayHello();

    return 0;
}
