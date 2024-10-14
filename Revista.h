#ifndef REVISTA_H
#define REVISTA_H

#include "MaterialBibliografico.h"

class Revista : public MaterialBibliografico {

private:
    
    int numeroEdicion;
    std::string mesPublicacion;

public:
    
    Revista(const std::string& nombre, const std::string& isbn, const std::string& autor,
            int edicion, const std::string& mes);
    void mostrarInformacion() const override;
};

#endif 
