#include "MaterialBibliografico.h"

MaterialBibliografico::MaterialBibliografico(const std::string& nombre, const std::string& isbn, const std::string& autor)
    : nombre(nombre), isbn(isbn), autor(autor), prestado(false) {}
