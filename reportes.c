#include <stdio.h>
#include "reportes.h"
#include "libros.h"
#include "alumnos.h"
#include "utilidades.h"

void ver_alumnos_retrasados(const Prestamo prestamos[], int total_prestamos,
                            const Alumno alumnos[], int total_alumnos,
                            const Libro inventario[], int total_libros,
                            Fecha fecha_actual) {

    int prestamo_vencido,total_encontrados=0,indice_libro;

        printf("ALUMNOS CON RETRASO\n");

            for(int i=0;i<total_alumnos;i++){
                prestamo_vencido = 0;
                    for(int j=0;j<total_prestamos;j++){
                        if(prestamos[j].estatus==0 && prestamos[j].codigo_alumno==alumnos[i].codigo){
                        if(convertir_fecha_numero(prestamos[j].fecha_entrega)<convertir_fecha_numero(fecha_actual)){
                        if(prestamo_vencido==0){
                            printf("codigo: %d\n",alumnos[i].codigo);
                            printf("Alumno: %s %s\n",alumnos[i].nombres,alumnos[i].apellidos);

                            prestamo_vencido=1;
                            total_encontrados=1;
                                }
            indice_libro=buscar_indice_libro(inventario,total_libros,prestamos[j].codigo_libro);
                if(indice_libro != -1){
                    printf("Devolucion atrasada: %s\n",inventario[indice_libro].titulo);
                }
                            }
                        }
                    }

            }
            if(total_encontrados==0){
                printf("No hay alumnos con prestamos atrasados\n");
            }
}

void reporte_mas_prestados(const Libro inventario[], int total_libros) {
    printf("pendiente reporte de mas prestados");
}
