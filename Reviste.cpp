#include "Revista.h"
#include <iostream>

Revista::Revista(const std::string& nombre, const std::string& isbn, const std::string& autor,
                 int edicion, const std::string& mes)
    : MaterialBibliografico(nombre, isbn, autor), numeroEdicion(edicion), mesPublicacion(mes) {}

void Revista::mostrarInformacion() const {
    std::cout << "Revista: " << nombre << ", ISBN: " << isbn << ", Autor: " << autor
              << ", Edición: " << numeroEdicion << ", Mes de Publicación: " << mesPublicacion
              << ", Prestado: " << (prestado ? "Sí" : "No") << std::endl;
}
