#include <stdio.h>
#include <string.h>
#include "libros.h"
#include "utilidades.h"

void registrar_libro(Libro inventario[], int *total_libros)
{

    if (*total_libros >= MAX_LIBROS)
    {
        printf("El inventario esta lleno\n");
        return;
    }

    int codigo;

    printf("Ingrese el codigo del libro: ");
    if (scanf("%d", &codigo) != 1)
    {
        printf("Error: Debes ingresar un numero.\n");
        return;
    }

    int posicion = buscar_indice_libro(inventario, *total_libros, codigo);

    if (posicion != -1)
    {
        printf("Error: Ya existe un libro con ese codigo.\n");
        return;
    }

    int c;

    while ((c = getchar()) != '\n' && c != EOF)
    {
    }

    inventario[*total_libros].codigo = codigo;

    printf("Ingrese el autor: ");

    fgets(inventario[*total_libros].autor,
          sizeof(inventario[*total_libros].autor),
          stdin);

    inventario[*total_libros].autor[strcspn(inventario[*total_libros].autor, "\n")] = '\0';

    printf("Ingrese el titulo: ");

    fgets(inventario[*total_libros].titulo,
          sizeof(inventario[*total_libros].titulo),
          stdin);

    inventario[*total_libros].titulo[strcspn(inventario[*total_libros].titulo, "\n")] = '\0';

    printf("Ingrese el subtitulo: ");

    fgets(inventario[*total_libros].subtitulo,
          sizeof(inventario[*total_libros].subtitulo),
          stdin);

    inventario[*total_libros].subtitulo[strcspn(inventario[*total_libros].subtitulo, "\n")] = '\0';

    printf("Ingrese la cantidad de ejemplares: ");

    if (scanf("%d", &inventario[*total_libros].ejemplares_totales) != 1)
    {
        printf("Error: Cantidad invalida.\n");
        return;
    }

    if (inventario[*total_libros].ejemplares_totales <= 0)
    {
        printf("Error: Debe registrar al menos un ejemplar.\n");
        return;
    }

    inventario[*total_libros].ejemplares_disponibles =
        inventario[*total_libros].ejemplares_totales;

    inventario[*total_libros].veces_prestado = 0;

    (*total_libros)++;

    printf("Libro registrado correctamente.\n");
}









void buscar_libro_titulo(const Libro inventario[], int total_libros)
{
    printf("pendiente buscar libro por titulo]");
}







int buscar_indice_libro(const Libro inventario[],
                        int total_libros, int codigo_libro)
{
    for (int i = 0; i < total_libros; i++)
    {

        if (inventario[i].codigo == codigo_libro)
        {
            return i;
        }
    }
    return -1;
}