#ifndef UTILIDADES_H
#define UTILIDADES_H

#include "estructuras.h"

int leer_entero_validado(const char mensaje[], int min, int max);
Fecha leer_fecha_validada(const char mensaje[]);
Fecha calcular_fecha_entrega(Fecha salida, int dias_sumar);
long convertir_fecha_numero(Fecha f);

#endif