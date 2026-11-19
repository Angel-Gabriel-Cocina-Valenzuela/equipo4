#include <stdio.h>
#include "utilidades.h"

int leer_entero_validado(const char mensaje[], int min, int max) {
    return min;
}

Fecha leer_fecha_validada(const char mensaje[]) {
    Fecha f = {1, 1, 2026};// es provicional por que me daba error si no le ponia el dato
    return f;
}

Fecha calcular_fecha_entrega(Fecha salida, int dias_sumar) {
    return salida;
}

long convertir_fecha_numero(Fecha f) {
    return (long)f.anio * 10000 + f.mes * 100 + f.dia;
}