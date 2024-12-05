/*
Laborátorio 01: Implementando classes (abstrações)

Aluno: Fabrício Rodrigues de Santana

Exercício 02
*/

#include <iostream>
#include <string>
#include "elevador.h"

using namespace std;

int main()
{
    Elevador elevador;

    elevador.atributos();

    // pessoas = 0; andar = 0
    elevador.entra();
    elevador.sobe();
    elevador.entra();
    elevador.entra();
    elevador.sobe();
    elevador.sobe();
    elevador.sai();
    elevador.desce();
    // pessoas = 2; andar = 2
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    elevador.entra();
    // elevador lotado!
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    elevador.sobe();
    // andar máximo!

    elevador.atributos();

    return 0;
}
