#include "Libro.h"
#include <iostream>

Libro::Libro(const std::string& nombre, const std::string& isbn, const std::string& autor,
             const std::string& fecha, const std::string& resumen)
    : MaterialBibliografico(nombre, isbn, autor), fechaPublicacion(fecha), resumen(resumen) {}

void Libro::mostrarInformacion() const {
    std::cout << "Libro: " << nombre << ", ISBN: " << isbn << ", Autor: " << autor
              << ", Fecha de Publicación: " << fechaPublicacion << ", Resumen: " << resumen
              << ", Prestado: " << (prestado ? "Sí" : "No") << std::endl;
}
