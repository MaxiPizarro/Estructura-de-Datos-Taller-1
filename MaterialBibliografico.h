#ifndef MATERIALBIBLIOGRAFICO_H
#define MATERIALBIBLIOGRAFICO_H

#include <string>

class MaterialBibliografico {

protected:
    std::string nombre;
    std::string isbn;
    std::string autor;
    bool prestado;

public:
    
    MaterialBibliografico(const std::string& nombre, const std::string& isbn, const std::string& autor);
    virtual ~MaterialBibliografico() = default;
    virtual void mostrarInformacion() const = 0;
    bool estaPrestado() const { return prestado; }
    std::string getNombre() const { return nombre; }
    std::string getIsbn() const { return isbn; }
    void prestar() { prestado = true; }
    void devolver() { prestado = false; }
};

#endif