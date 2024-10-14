#include "Usuario.h"
#include <iostream>

Usuario::Usuario(const std::string& nombre, const std::string& id)
    : nombre(nombre), id(id) {
    
    for (int i = 0; i < 5; ++i) {
        materialesPrestados[i] = nullptr;
    }
}

std::string Usuario::getId() const { return id; }

bool Usuario::prestarMaterial(MaterialBibliografico* material) {
    
    for (int i = 0; i < 5; ++i) {
        
        if (materialesPrestados[i] == nullptr) {
            
            materialesPrestados[i] = material;
            material->prestar();
            return true;
        }
    }
    return false;
}

void Usuario::devolverMaterial(MaterialBibliografico* material) {
   
    for (int i = 0; i < 5; ++i) {
        
        if (materialesPrestados[i] == material) {
            
            materialesPrestados[i] = nullptr;
            material->devolver();
            break;
        }
    }
}

void Usuario::mostrarMaterialesPrestados() const {
    
    std::cout << "Materiales prestados por " << nombre << ":\n";
    
    for (const auto& material : materialesPrestados) {
        
        if (material) {
            material->mostrarInformacion();
        }
    }
}
