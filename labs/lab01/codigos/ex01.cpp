/*
Laborátorio 01: Implementando classes (abstrações)

Aluno: Fabrício Rodrigues de Santana

Exercício 01
*/

#include <iostream>
#include <string>

using namespace std;

class Pessoa{
private:
    string _name;
    int _age;
    int _height;
public:
    void setName(string name){ _name = name; }
    void setAge(int age){ _age = age; }
    void setHeight(int height){ _height = height; }
    string getName(){ return _name; }
    string getAge(){ return to_string(_age); }
    string getHeight(){ return to_string(_height); }
};

int main()
{
    Pessoa person;
    person.setName("Fabricio");
    person.setAge(21);
    person.setHeight(183);

    cout << "\nNome: " << person.getName() << endl;
    cout << "Idade: " << person.getAge() << endl;
    cout << "Altura: " << person.getHeight() << " cm\n" << endl;

    return 0;
}
