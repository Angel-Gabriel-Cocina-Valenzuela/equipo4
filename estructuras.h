#ifndef ESTRUCTURAS_H
#define ESTRUCTURAS_H

#define MAX_LIBROS 100
#define MAX_ALUMNOS 100
#define MAX_PRESTAMOS 200

#define MAX_LIBROS_ALUMNO 2
#define DIAS_PRESTAMO 7

typedef struct {
    int dia;
    int mes;
    int anio;
} Fecha;

typedef struct {
    int codigo;
    char titulo[60];
    char subtitulo[60];
    char autor[50];
    int ejemplares_totales;
    int ejemplares_disponibles;
    int veces_prestado;
} Libro;

typedef struct {
    int codigo;
    char nombres[50];
    char apellidos[50];
    int estado; // 0 = activo, 1 = sancionado
} Alumno;

typedef struct {
    int folio;
    int codigo_alumno;
    int codigo_libro;
    Fecha fecha_salida;
    Fecha fecha_entrega;
    int estatus; // 0 = activo, 1 = devuelto
} Prestamo;

#endif