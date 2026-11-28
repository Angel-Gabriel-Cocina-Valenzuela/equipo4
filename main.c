#include <stdio.h>
#include "estructuras.h"
#include "libros.h"
#include "alumnos.h"
#include "prestamos.h"
#include "reportes.h"
#include "utilidades.h"

int main() {
    Libro inventario[MAX_LIBROS];
    Alumno alumnos[MAX_ALUMNOS];
    Prestamo prestamos[MAX_PRESTAMOS];

    int total_libros = 0;
    int total_alumnos = 0;
    int total_prestamos = 0;
    int opcion;
    Fecha fecha_actual;

    do{
        printf("SISTEMA DE BIBLIOTECA DE UNA SECUNDARIA\n");
        printf("1.Registrar libros\n");
        printf("2.Buscar libro por subtitulo\n");
        printf("3.Registrar alumno\n");
        printf("4.Registrar prestamo\n");
        printf("5.Registrar devolucion\n");
        printf("6.Consultar prestamos\n");
        printf("7.Consultar alumnos con retraso\n");
        printf("8.Consultar libros mas prestados\n");
        printf("9.Salir\n");

        printf("Seleccione una opcion: ");
        scanf("%d",&opcion);

    switch(opcion){
        case 1:
            registrar_libro(inventario, &total_libros);
            break;
        case 2:
            buscar_libro_titulo(inventario, total_libros);
            //pendiente llamar funcion para buscar libros por subtitulo
            break;
        case 3:
            registrar_alumno(alumnos, &total_alumnos);
            break;
        case 4:
            registrar_prestamo(prestamos, &total_prestamos, inventario, total_libros, alumnos, total_alumnos);
            break;
        case 5:
            registrar_devolucion(prestamos, total_prestamos, inventario, total_libros, alumnos, total_alumnos);
            break;
        case 6:
            consultar_prestamos_alumno(alumnos, total_alumnos, prestamos, total_prestamos, inventario, total_libros);
            break;
        case 7:
            fecha_actual=leer_fecha_validada("Escriba la fecha actual: ");//porque necesitamos conocer la fecha actual para comparar la fecha de entrega de los prestamos y ver si hay retrasos
            ver_alumnos_retrasados(prestamos, total_prestamos, alumnos, total_alumnos, inventario, total_libros, fecha_actual);
            break;
        case 8:
            reporte_mas_prestados(inventario, total_libros);
            break;
        case 9:
            printf("Salir\n");
            break;
        default:
            printf("Opcion ingresada no valida\n");
            break;
    }

    }while(opcion!=9);


    return 0;
}
