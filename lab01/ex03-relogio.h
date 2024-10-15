#ifndef RELOGIO_H
#define RELOGIO_H

class Relogio{
private:
    int _hora;
    int _minuto;
    int _segundo;
public:
    Relogio();

    void setHorario(int hora, int minuto, int segundo);
    void getHorario();
    void tick();
};

#endif // RELOGIO_H
