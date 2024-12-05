#include <iostream>
#include <relogio.h>

using namespace std;

int main()
{
    Relogio relogio;

    relogio.getHorario();

    relogio.setHorario(12,27,59);

    relogio.getHorario();

    relogio.tick();

    relogio.getHorario();

    return 0;
}
