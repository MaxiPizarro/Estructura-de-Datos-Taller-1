#ifndef BIBLIOTECA_H
#define BIBLIOTECA_H

#include <vector>
#include "Usuario.h"

class Biblioteca {

private:
    
    std::vector<MaterialBibliografico*> biblioteca;
    std::vector<Usuario> usuarios;

public:
    
    void agregarMaterial(MaterialBibliografico* material);
    void listarMateriales() const;
    MaterialBibliografico* buscarMaterial(const std::string& criterio) const;
    void agregarUsuario(const Usuario& usuario);
    Usuario* buscarUsuario(const std::string& id);
    void guardarDatos(const std::string& archivo);
    void cargarDatos(const std::string& archivo);
};

#endif 
