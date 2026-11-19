#ifndef ALUMNOS_H
#define ALUMNOS_H

#include "estructuras.h"

void registrar_alumno(Alumno alumnos[], int *total_alumnos);
void consultar_prestamos_alumno(const Alumno alumnos[], int total_alumnos,
        const Prestamo prestamos[], int total_prestamos,
        const Libro inventario[], int total_libros);
int buscar_indice_alumno(const Alumno alumnos[], int total_alumnos, int codigo_alumno);

#endif