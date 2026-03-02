#ifndef NOTAS_H
#define NOTAS_H

#include <string>

struct Nota{
    int carnet;
    int codigoCurso;
    int nota;
    std::string ciclo;
    int anio;

    Nota()
    : carnet(0), codigoCurso(0), nota(0), ciclo(""), anio(0){}

    Nota(int car, int cc, int no, const std::string& ci, int ani)
    :carnet(car), codigoCurso(cc), nota(no), ciclo(ci), anio(ani){}



};

#endif