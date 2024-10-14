
#include <iostream>
#include "Biblioteca.h"
#include "MaterialBibliografico.h" 
#include "Libro.h"                
#include "Revista.h"              

// Función para mostrar el menú
void mostrarMenu() {
    std::cout << "1. Agregar libro\n"
              << "2. Agregar revista\n"
              << "3. Listar materiales\n"
              << "4. Buscar material\n"
              << "5. Prestar material\n"
              << "6. Devolver material\n"
              << "7. Agregar usuario\n"
              << "8. Mostrar materiales prestados\n"
              << "9. Guardar datos\n"
              << "10. Cargar datos\n"
              << "11. Salir\n"
              << "Seleccione una opción: ";
}

int main() {
    
    Biblioteca biblioteca;
    int opcion;

    while (true) {
        mostrarMenu();
        std::cin >> opcion;

        switch (opcion) {
            
            case 1: { // Agregar libro
                std::string nombre, isbn, autor, fecha, resumen;
                std::cout << "Nombre: "; std::cin >> nombre;
                std::cout << "ISBN: "; std::cin >> isbn;
                std::cout << "Autor: "; std::cin >> autor;
                std::cout << "Fecha de Publicación: "; std::cin >> fecha;
                std::cout << "Resumen: "; std::cin >> resumen;
                biblioteca.agregarMaterial(new Libro(nombre, isbn, autor, fecha, resumen));
                break;
            }

            case 2: { // Agregar revista
                std::string nombre, isbn, autor, mes;
                int edicion;
                std::cout << "Nombre: "; std::cin >> nombre;
                std::cout << "ISBN: "; std::cin >> isbn;
                std::cout << "Autor: "; std::cin >> autor;
                std::cout << "Número de Edición: "; std::cin >> edicion;
                std::cout << "Mes de Publicación: "; std::cin >> mes;
                biblioteca.agregarMaterial(new Revista(nombre, isbn, autor, edicion, mes));
                break;
            }

            case 3: // Listar materiales
                biblioteca.listarMateriales();
                break;

            case 4: { // Buscar material
                std::string criterio;
                std::cout << "Ingrese el título o ISBN: ";
                std::cin >> criterio;
                MaterialBibliografico* material = biblioteca.buscarMaterial(criterio);
                if (material) {
                    material->mostrarInformacion();
                } else {
                    std::cout << "Material no encontrado.\n";
                }
                break;
            }

            case 5: { // Prestar material
                std::string id, criterio;
                std::cout << "Ingrese el ID del usuario: ";
                std::cin >> id;
                Usuario* usuario = biblioteca.buscarUsuario(id);
                if (!usuario) {
                    std::cout << "Usuario no encontrado.\n";
                    break;
                }
                std::cout << "Ingrese el título o ISBN del material: ";
                std::cin >> criterio;
                MaterialBibliografico* material = biblioteca.buscarMaterial(criterio);
                if (material && usuario->prestarMaterial(material)) {
                    std::cout << "Material prestado exitosamente.\n";
                } else {
                    std::cout << "No se pudo prestar el material.\n";
                }
                break;
            }

            case 6: { // Devolver material
                std::string id, criterio;
                std::cout << "Ingrese el ID del usuario: ";
                std::cin >> id;
                Usuario* usuario = biblioteca.buscarUsuario(id);
                if (!usuario) {
                    std::cout << "Usuario no encontrado.\n";
                    break;
                }
                std::cout << "Ingrese el título o ISBN del material: ";
                std::cin >> criterio;
                MaterialBibliografico* material = biblioteca.buscarMaterial(criterio);
                if (material) {
                    usuario->devolverMaterial(material);
                    std::cout << "Material devuelto exitosamente.\n";
                } else {
                    std::cout << "Material no encontrado.\n";
                }
                break;
            }

            case 7: { // Agregar usuario
                std::string nombre, id;
                std::cout << "Nombre del usuario: "; std::cin >> nombre;
                std::cout << "ID del usuario: "; std::cin >> id;
                biblioteca.agregarUsuario(Usuario(nombre, id));
                break;
            }

            case 8: { // Mostrar materiales prestados
                std::string id;
                std::cout << "Ingrese el ID del usuario: ";
                std::cin >> id;
                Usuario* usuario = biblioteca.buscarUsuario(id);
                if (usuario) {
                    usuario->mostrarMaterialesPrestados();
                } else {
                    std::cout << "Usuario no encontrado.\n";
                }
                break;
            }

            case 9: // Guardar datos
                biblioteca.guardarDatos("datos_biblioteca.txt");
                break;

            case 10: // Cargar datos
                biblioteca.cargarDatos("datos_biblioteca.txt");
                break;

            case 11: // Salir
                return 0;

            default:
                std::cout << "Opción no válida. Intente de nuevo.\n";
        }
    }

    return 0;
}