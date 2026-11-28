#include <stdio.h>
#include <string.h>
#include "alumnos.h"
#include "utilidades.h"

int buscar_indice_alumno(const Alumno alumnos[], int total_alumnos, int codigo_alumno) {
    for (int i = 0; i < total_alumnos; i++) {
        if (alumnos[i].codigo == codigo_alumno) {
            return i;
        }
    }
    return -1;
}

void registrar_alumno(Alumno alumnos[], int *total_alumnos) {
    printf("pendiente  registrar alumno");
}

void consultar_prestamos_alumno(const Alumno alumnos[], int total_alumnos,
    const Prestamo prestamos[], int total_prestamos,
    const Libro inventario[], int total_libros) {
    printf("Pendiente: Consultar prestamos de alumno");
}