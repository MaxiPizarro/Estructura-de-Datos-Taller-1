#include "Biblioteca.h"
#include <iostream>
#include <fstream>
#include <sstream>

void Biblioteca::agregarMaterial(MaterialBibliografico* material) {
   
    if (biblioteca.size() < 100) {
        
        biblioteca.push_back(material);
    }
    else {
        std::cout << "No se puede agregar más materiales, biblioteca llena.\n";
    }
}

void Biblioteca::listarMateriales() const {
    
    for (const auto& material : biblioteca) {
        
        material->mostrarInformacion();
    }
}

MaterialBibliografico* Biblioteca::buscarMaterial(const std::string& criterio) const {
    
    for (const auto& material : biblioteca) {
        
        if (material->getNombre() == criterio || material->getIsbn() == criterio) {
           
            return material;
        }
    }
    return nullptr;
}

void Biblioteca::agregarUsuario(const Usuario& usuario) {
    
    usuarios.push_back(usuario);
}

Usuario* Biblioteca::buscarUsuario(const std::string& id) {
    
    for (auto& usuario : usuarios) {
        
        if (usuario.getId() == id) {
           
            return &usuario;
        }
    }
    return nullptr;
}

void Biblioteca::guardarDatos(const std::string& archivo) {
    
    std::ofstream outFile(archivo);
   
    for (const auto& material : biblioteca) {
        
        material->mostrarInformacion(); 
    }
}

void Biblioteca::cargarDatos(const std::string& archivo) {
    
    std::ifstream inFile(archivo);
    
}
