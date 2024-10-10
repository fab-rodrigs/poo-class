/*
Laborátorio 01: Implementando classes (abstrações)

Aluno: Fabrício Rodrigues de Santana

Exercício 01

Crie uma classe Pessoa para representar uma pessoa, com os atributos privados de nome,
idade e altura. Crie os métodos públicos necessários para acessar e modificar os atributos
desta classe e crie um método para imprimir os dados da pessoa.

Implemente um programa de teste que utilize toda a interface da classe criada.
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
