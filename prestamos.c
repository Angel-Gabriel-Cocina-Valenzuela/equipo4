#include <stdio.h>
#include "prestamos.h"
#include "libros.h"
#include "alumnos.h"
#include "utilidades.h"

void registrar_prestamo(Prestamo prestamos[], int *total_prestamos,
    Libro inventario[], int total_libros,
    const Alumno alumnos[], int total_alumnos) {
    printf("pendiente registrar prestamo");
}

void registrar_devolucion(Prestamo prestamos[], int total_prestamos,
    Libro inventario[], int total_libros,
    Alumno alumnos[], int total_alumnos) {
    printf("pendiente registrar devolucion");
}

int contar_activos_recursivo(const Prestamo prestamos[], int total_prestamos, int codigo_alumno, int indice) {
    return 0; // provisional en lo que se hace la otra funcion
}
