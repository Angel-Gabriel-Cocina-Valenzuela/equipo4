#ifndef REPORTES_H
#define REPORTES_H

#include "estructuras.h"

void ver_alumnos_retrasados(const Prestamo prestamos[], int total_prestamos,
    const Alumno alumnos[], int total_alumnos,
    const Libro inventario[], int total_libros,
    Fecha fecha_actual);

void reporte_mas_prestados(const Libro inventario[], int total_libros);

#endif