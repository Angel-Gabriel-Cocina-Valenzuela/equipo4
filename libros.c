#include <stdio.h>
#include <string.h>
#include "libros.h"
#include "utilidades.h"


void registrar_libro(Libro inventario[], int *total_libros) {
    Libro nuevo;
    int codigo_repetido = 1;

    printf("\n--- REGISTRAR LIBRO ---\n");

    // Vemos que haya espacio en el arreglo
    if (*total_libros >= MAX_LIBROS) {
        printf("Error: Inventario lleno (maximo %d libros).\n", MAX_LIBROS);
        return;
    }

    // Pedimos codigo y verificamo que no exista ya
    while (codigo_repetido) {
        nuevo.codigo = leer_entero_validado("Codigo del libro (1 - 99999): ", 1, 99999);
        if (buscar_indice_libro(inventario, *total_libros, nuevo.codigo) != -1) {
            printf("Error: Ya existe un libro con el codigo %d.\n", nuevo.codigo);
        } else {
            codigo_repetido = 0;
        }
    }

    // Leemos datos de texto (solo el subtitulo permite quedar vacio)
    leer_texto("Titulo: ", nuevo.titulo, sizeof(nuevo.titulo), 0);
    leer_texto("Subtitulo (Enter para omitir): ", nuevo.subtitulo, sizeof(nuevo.subtitulo), 1);
    leer_texto("Autor: ", nuevo.autor, sizeof(nuevo.autor), 0);

    // Pedir ejemplares e inicializar valores por defecto
    nuevo.ejemplares_totales = leer_entero_validado("Cantidad de ejemplares: ", 1, 500);
    nuevo.ejemplares_disponibles = nuevo.ejemplares_totales;
    nuevo.veces_prestado = 0;

    // Guardar en el inventario y aumentar el contador por puntero
    inventario[*total_libros] = nuevo;
    (*total_libros)++;

    printf("Libro registrado con exito. Total actual: %d\n", *total_libros);
}

void buscar_libro_titulo(const Libro inventario[], int total_libros) {
    printf("Pendiente buscar libro por titulo\n");
}

// Busca un libro por codigo y regresa su posicion en el arreglo (-1 si no existe)
int buscar_indice_libro(const Libro inventario[], int total_libros, int codigo_libro) {
    int i;
    for (i = 0; i < total_libros; i++) {
        if (inventario[i].codigo == codigo_libro) {
            return i;
        }
    }
    return -1;
}

///////////////////////////////////////////////////////////////////////////
// pendiente pq no sé muy bien q rollo o cómo manejarlo bien bien bien

/* Funcion auxiliar privada para leer cadenas con espacios sin dejar basura en el teclado 
static void leer_texto(const char mensaje[], char destino[], int tam, int permitir_vacio) {
    int valido = 0;

    while (!valido) {
        printf("%s", mensaje);
        if (fgets(destino, tam, stdin) != NULL) {
            // Si el usuario escribio mas caracteres de los permitidos, limpia el resto
            if (strchr(destino, '\n') == NULL) {
                int c;
                while ((c = getchar()) != '\n' && c != EOF);
            }

            // Quita el salto de linea final
            destino[strcspn(destino, "\r\n")] = '\0';

            if (strlen(destino) > 0 || permitir_vacio) {
                valido = 1;
            } else {
                printf("Error: Este campo no puede quedar vacio.\n");
            }
        }
    }
}*/