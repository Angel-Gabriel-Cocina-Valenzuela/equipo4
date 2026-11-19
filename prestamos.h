#ifndef PRESTAMOS_H
#define PRESTAMOS_H

#include "estructuras.h"

void registrar_prestamo(Prestamo prestamos[], int *total_prestamos,
    Libro inventario[], int total_libros,
    const Alumno alumnos[], int total_alumnos);

void registrar_devolucion(Prestamo prestamos[], int total_prestamos,
    Libro inventario[], int total_libros,
    Alumno alumnos[], int total_alumnos);

// cuenta cuantos libros activos tiene un alumno
int contar_activos_recursivo(const Prestamo prestamos[], int total_prestamos, int codigo_alumno, int indice);

#endif