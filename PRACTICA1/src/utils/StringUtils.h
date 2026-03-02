// es una caja de herramientas que se usa para manejar texto al leer los archivos .lfp
#ifndef STRING_UTILS_H
#define STRING_UTILS_H

#include <string> // se usa para cadenas de texto
#include <vector> // se usa para listas
#include <sstream> // es para que string tenga flujo y se pueda usar getline para separar con comas 
#include<algorithm> // funciones de busqueda

//struct se usa para que un objeto se vean como datos
//namespace se usa para agrupar funciones


//se uso para que las lienas de texto se separaran, por medio de las comas o algun otro delimitador 
namespace StringUtils{
    inline std::vector<std::string> split(const std::string& linea, char delim){
        std::vector<std::string> tokens;
        std::stringstream ss(linea);
        std::string token;
        while (std::getline(ss,token,delim)){
            tokens.push_back(token);
        }
        return tokens;
    }


    // se usa para quitar los espacios y omitir los saltos de linea
    inline std::string trim(const std::string& s){
        size_t inicio = s.find_first_not_of(" \t\r\n");
        if (inicio == std::string::npos) return"";
        size_t fin = s.find_last_not_of(" \t\r\n");
        return s.substr(inicio, fin - inicio + 1);
    }


    //convierte texto en enteros  y se usa -1 si hay un error en el texto ejemplo que mezcle numeros y letras en una sola frase 
    inline int toInt( const std::string& s){
        try
        {
            return std::stoi(trim(s));
        }
        catch(...)
        {
            return -1;
        }
        
    }


    // se usa para convertir a decimales las cadenas de texto que tengan este formato y da error si viene texto con numeros o solo texto
    inline double toDouble(const std::string& s){
        try{
            return std::stod(trim(s));
        } catch(...){
            return -1.0;
        }
    }


}
#endif