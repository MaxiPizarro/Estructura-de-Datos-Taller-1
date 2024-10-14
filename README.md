# Sistema de Gestión de Biblioteca

## Nombre Titular : Maximiliano Pizarro, Rut:21.776.433-5, Parelelo C2

## Descripción del Proyecto

Este proyecto consiste en crear un sistema que permite a los usuarios de una biblioteca realizar acciones como agregar nuevos libros, buscar libros por título o autor, y gestionar el préstamo de libros.

## Requerimientos Técnicos

### Estructura del Proyecto

- **Lenguaje de Programación**: C++
- **Compilador**: Se recomienda el uso de `g++`.
- **Organización del Código**: El proyecto está dividido en varios archivos `.cpp` y `.h` para fomentar una buena organización y modularidad del código.

### Clases

- **MaterialBibliografico**: Clase base con atributos `nombre`, `isbn`, `autor` y `prestado`, y un método virtual llamado `mostrarInformación`.
- **Libro**: Hereda de `MaterialBibliografico` y tiene atributos adicionales `fechaPublicacion` y `resumen`, implementando `mostrarInformación`.
- **Revista**: También hereda de `MaterialBibliografico` y añade `numeroEdicion` y `mesPublicacion`, implementando `mostrarInformación`.
- **Usuario**: Clase que tiene atributos `nombre`, `id` y un array de hasta 5 materiales prestados. Incluye métodos para prestar y devolver materiales, así como para mostrar materiales prestados.

### Gestión de Memoria y Punteros

- Se utilizan punteros para gestionar objetos de `MaterialBibliografico` y sus derivados.
- Implementación de asignación dinámica de memoria utilizando `new` y liberación con `delete`.

### Funcionalidades Específicas

- **Agregar Material a la Biblioteca**: Funciones para agregar nuevos libros o revistas y validar que no se exceda el tamaño máximo del array.
- **Mostrar Información de los Materiales**: Menú para listar todos los materiales en la biblioteca.
- **Buscar Material**: Función para buscar materiales por título o autor mediante búsquedas lineales.
- **Prestar y Devolver Material**: Lógica para actualizar el estado de los materiales y registrar en `materialesPrestados` del usuario.
- **Gestión de Usuarios**: Funcionalidad para crear, buscar y eliminar usuarios, y asociar materiales prestados a usuarios específicos.

### Manejo de Errores y Validaciones

- Validaciones para asegurarse de que los usuarios no puedan prestar más de 5 materiales y que los materiales no se presten si ya están prestados.
- Manejo básico de errores para casos como arrays llenos y materiales no encontrados.

### Entrada y Salida de Datos

- **Interfaz de Usuario**: Menú en consola para interactuar con el sistema (agregar libros, prestar materiales, listar materiales, etc.).
- **Persistencia de Datos**: Funcionalidad para guardar y cargar el estado de la biblioteca y usuarios desde archivos de texto utilizando `fstream`.

## Entregables

- El proyecto debe estar disponible en GitHub con visibilidad pública antes del 22/09/2024.
- El programa debe compilar correctamente con `g++ -g -o main .\MaterialBibliografico.cpp .\Revista.cpp .\Libro.cpp .\Usuario.cpp .\Biblioteca.cpp .\main.cpp`.
- El programa debe ser ejecutado con `main.exe`.
- Incluir en el README información sobre los objetos creados en el `main` durante el inicio del programa.

### Ejemplo de Objeto en `main`

```cpp
admin1: { nombre:"Jose"; contraseña:"123123"; edad:"30"; correo:"admin@admin.cl"}
