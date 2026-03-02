#ifndef CURSOS_H
#define CURSOS_H

#include <string>

struct curso{
    int codigo;
    std::string nombre;
    int creditos;
    int semestre;
    std::string carrera;

    curso()
    :codigo(0), nombre(""), creditos(0),semestre(0), carrera(""){}

    curso(int cod, const std::string& nom, int cred, int sem, const std::string& car)
    :codigo(cod), nombre(nom), creditos(cred), semestre(sem), carrera(car){}
};

#endif