# equipo4
## Sistema de Biblioteca Escolar en C - Equipo 4

Sistema desarrollado en C puro para automatizar el control de alumnos, préstamos, devoluciones e inventario de una biblioteca de una secundaria.

- **Materia:** Programación Estructurada
- **Equipo:** #4
- **Sección:** D16
- **Profesor(a):** Karol Daniela Maldonado López

---

## Integrantes y Roles:

| Integrante | Rol en el equipo |
| :--- | :--- |
| Ángel Gabriel Cocina Valenzuela | Líder de código |
| Dante Emiliano Cabrera Flores | Arquitectura |
| Humberto Sebastian Torres Varela | Documentación y pruebas |
| Armando Velázquez Ríos | Diagramas |

---

## Reglas Definidas
Para convertir los requerimientos iniciales de la encargada de la biblioteca en específicaciones técnicas exactas, el equipo estableció las siguientes reglas:
- **Capacidades máximas del sistema:** Hasta 100 títulos distintos, 100 alumnos registrados y 200 movimientos de préstamo.
- **Límite de préstamos simultáneos:** Un alumno puede tener máximo 2 libros activos a la vez.
- **Plazo de entrega:** Todo préstamo tiene una duración de 7 días naturales.
- **Retrasos y sanciones:** Si un alumno entrega fuera de fecha o tiene préstamos vencidos, su estado cambia a sancionado, bloqueando nuevos préstamos hasta regularizarse su situación.

---

## Funcionalidades del Sistema
1. **Registrar libros:** Alta de títulos, subtítulos, autores y numero de ejemplares disponibles.
2. **Registrar alumnos:** Alta de estudiantes con matrícula única y estando activo.
3. **Registrar préstamos:** Validación de disponibilidad , límite de libros por alumno y cálculo automático de fecha de entrega.
4. **Registrar devolución:** Actualización de inventario disponible.
5. **Buscar libro por título:** Búsqueda por coincidencia parcial en título y subtítulo mostrando ejemplares libres.
6. **Consultar préstamos por alumno:** Visualización de los libros activos que tiene un estudiante específico.
7. **Ver alumnos retrasados:** Listado de préstamos activos cuya fecha de entrega es menor a la fecha actual.
8. **Reporte de fin de mes:** Ranking de los libros más solicitados según su historial de préstamos.

---

## Requisitos Técnicos Implementados

- **Sin variables globales:** Todos los arreglos y contadores se declaran dentro de `main()` y se pasan por parámetro.
- **Estructuras anidadas:** `struct Fecha` está anidada dentro de `struct Prestamo` (`fecha_salida` y `fecha_entrega`) en `estructuras.h`.
- **Uso de punteros:** Las funciones de registro y actualización modifican los contadores y registros mediante punteros (`int *`).
- **Recursividad:** Implementada en `contar_activos_recursivo()` (`prestamos.c`) para validar el límite de libros activos por alumno.
- **Validación de entradas:** Control de rangos numéricos, caracteres inválidos y fechas imposibles mediante `utilidades.c`.

---

## Estructura del Repositorio

- `main.c`: Inicialización de datos, precarga y menú principal.
- `estructuras.h`: Constantes (`#define`) y estructuras del sistema (`Fecha`, `Libro`, `Alumno`, `Prestamo`).
- `libros.h` / `libros.c`: Alta y búsqueda de libros por índice, título o subtítulo.
- `alumnos.h` / `alumnos.c`: Alta de estudiantes y consulta de préstamos activos por alumno.
- `prestamos.h` / `prestamos.c`: Registro de préstamos, devoluciones y conteo recursivo.
- `reportes.h` / `reportes.c`: Listado de alumnos retrasados y estadística de libros más prestados.
- `utilidades.h` / `utilidades.c`: Validación de enteros, validación de fechas y cálculo de fechas de entrega.

---
