#include "relogio.h"
#include <iostream>

using namespace std;

Relogio::Relogio(){
    _hora = 0;
    _minuto = 0;
    _segundo = 0;
}

void Relogio::setHorario(int hora, int minuto, int segundo){
    _hora = hora;
    _minuto = minuto;
    _segundo = segundo;
}

void Relogio::getHorario(){
    cout << "\n" << _hora << ":" << _minuto << ":" << _segundo << endl;
}

void Relogio::tick(){
    _segundo++;
    if(_segundo > 59){
        _minuto++;
        _segundo = 0;
        if(_minuto>59){
            _hora++;
            _minuto = 0;
            if(_hora>23){
                _hora = 0;
            }
        }
    }
}
