#include <iostream>
#include <string>
#include "elevador.h"

using namespace std;

Elevador::Elevador(){
    _andarAtual = 0;
    _andarTotal = 15;
    _elevCapacidade = 10;
    _quantPessoas = 0;
}

void Elevador::entra(){
    if ( _quantPessoas+1 > _elevCapacidade ){
        cout << "\nElevador lotado!" << endl;
    }
    else{
        _quantPessoas++;
        cout << "\nPessoa adicionada!" << endl;
    }
}

void Elevador::sai(){
    if ( _quantPessoas < 1 ){
        cout << "\nElevador vazio!" << endl;
    }
    else{
        _quantPessoas--;
        cout << "\nPessoa removida!" << endl;
    }
}

void Elevador::sobe(){
    if ( _andarAtual == 15 ){
        cout << "\nÚltimo andar!" << endl;
    }
    else{
        _andarAtual++;
        cout << "\nSubiu um andar!" << endl;
    }
}

void Elevador::desce(){
    if ( _andarAtual == 0 ){
        cout << "\nAndar térreo!" << endl;
    }
    else{
        _andarAtual--;
        cout << "\nDesceu um andar!" << endl;
    }
}

string Elevador::getAndarAtual(){
    return to_string(_andarAtual);
}

string Elevador::getAndarTotal(){
    return to_string(_andarTotal);
}

string Elevador::getElevCapacidade(){
    return to_string(_elevCapacidade);
}

string Elevador::getQuantPessoas(){
    return to_string(_quantPessoas);
}

void Elevador::atributos(){
    cout << "\nAndar Atual: " << getAndarAtual() << endl;
    cout << "Andar Total: " << getAndarTotal() << endl;
    cout << "Capacidade Elevador: " << getElevCapacidade() << endl;
    cout << "Quantidade Pessoas: " << getQuantPessoas() << "\n" << endl;
}
