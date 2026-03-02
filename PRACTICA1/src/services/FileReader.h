#ifndef FILE_READER_H
#define FILE_READER_H

#include <vector>
#include <string>
#include "../models/Curso.h"
#include "../models/Estudiante.h"
#include "../models/Nota.h"

// Leera los archivos .lfp y retorna un vector con los estudiantes leidos y si esta vacio tiene error
class FileReader {
    public:
    static std::vector<Cursos> leerCursos(const std::string& ruta);
    static std::vector<Estudiante>  leerEstudiante (const std::string& ruta);
    static std::vector<Nota> leerNotas (const std::string& ruta);

    private:
    FileReader() = delete; // se usa por utilidad estatica 
};

#endif