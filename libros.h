#ifndef LIBROS_H
#define LIBROS_H

#include "estructuras.h"

void registrar_libro(Libro inventario[], int *total_libros);
void buscar_libro_titulo(const Libro inventario[], int total_libros);
int buscar_indice_libro(const Libro inventario[], int total_libros, int codigo_libro);

#endif