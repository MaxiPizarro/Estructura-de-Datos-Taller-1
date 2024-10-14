#ifndef LIBRO_H
#define LIBRO_H

#include "MaterialBibliografico.h"

class Libro : public MaterialBibliografico {

private:
    
    std::string fechaPublicacion;
    std::string resumen;

public:
    
    Libro(const std::string& nombre, const std::string& isbn, const std::string& autor,
          const std::string& fecha, const std::string& resumen);
    void mostrarInformacion() const override;
};

#endif 
