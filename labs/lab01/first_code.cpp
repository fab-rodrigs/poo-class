#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class World {        // Classe mundo
private:
    string _name;    // objeto "_name" da classe "string"
public:
    void sayHello(); // método da classe mundo
    void setName(string value);
};

void sayHello(){
    printf("Hello C World!\n");
}

void World::sayHello(){
    cout << "Hello World!" << _name << ":" << endl;
}

void World::setName(string value){
    if(!value.empty()){
        _name = value;
    }
}

int main()
{
    sayHello();

    World obj;
    obj.sayHello();
    obj.setName("Fabricio");
    obj.sayHello();

    return 0;
}
