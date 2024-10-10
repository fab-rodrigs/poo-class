#ifndef ELEVADOR_H
#define ELEVADOR_H

#include <string>

using namespace std;

class Elevador{
private:
    int _andarAtual;
    int _andarTotal;
    int _elevCapacidade;
    int _quantPessoas;
public:
    Elevador(); // Construtor

    void entra();
    void sai();
    void sobe();
    void desce();

    string getAndarAtual();
    string getAndarTotal();
    string getElevCapacidade();
    string getQuantPessoas();

    void atributos();

};

#endif // ELEVADOR_H
