#ifndef USUARIO_H
#define USUARIO_H

#include <string>
#include "MaterialBibliografico.h"

class Usuario {

private:
    
    std::string nombre;
    std::string id;
    MaterialBibliografico* materialesPrestados[5];

public:
    
    Usuario(const std::string& nombre, const std::string& id);
    std::string getId() const;
    bool prestarMaterial(MaterialBibliografico* material);
    void devolverMaterial(MaterialBibliografico* material);
    void mostrarMaterialesPrestados() const;
};

#endif 
