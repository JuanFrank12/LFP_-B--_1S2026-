#ifndef ESTUDIANTE_H // no esta definido asi que ahora lo define y compila 
#define ESTUDIANTE_H 

#include <string>

struct Estudiante{
    int carnet;
    std::string nombre;
    std::string apellido;
    std::string carrera;
    int semestre;


    Estudiante()
    : carnet(0), nombre(""), apellido(""), carrera(""), semestre(0){}

    Estudiante(int c, const std::string& n, const std::string& a,
        const std::string& car, int sem)
        : carnet(c), nombre(n), apellido(a), carrera(car), semestre(sem){}

        std::string nombreCompleto() const{
            return nombre + " " + apellido;
        }
};

#endif