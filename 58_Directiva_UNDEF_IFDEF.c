/*
Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 58 - Directivas del Pre-Procesador.

undef.
Esta directiva nos permite eliminar la definición de una
macro.

error.
Esta directiva se utiliza para detener la compilación y
mostrar un mensaje de error al respecto de alguna
condición.

ifdef, ifndef
Nos permite indicarle al compilador que ralice ciertas
acciones; si es que una macro se encuentra o no definida.


*/

// Se incluyen las librerías
#include <stdio.h>
#include <stdbool.h>

// Definimos el Número Máximo de Archivos
#define MAX_FILES 50

// Verificamos si está definido
#ifndef MAX_FILES
  // #define MAX_FILES 50
  #error No se ha definido el Máximo Número de Archivos
#endif // MAX_FILES

// Eliminamos la Macro
//#undef MAX_FILES

// Verificamos de Nuevo
#ifndef MAX_FILES
  #error No se ha definido el Máximo Número de Archivos 2
#endif // MAX_FILES

// Definimos Verdadero
#ifndef VERDADERO
  #define VERDADERO -1
#endif // VERDADERO

// Definimos Falso
#ifndef FALSO
  #define FALSO 0
#endif // FALSO

// Verificamos que no esté definido
#ifndef VERDADERO
  #define VERDADERO -2
#endif // VERDADERO

// Verificamos que no esté definido
#ifndef FALSO
  #define FALSO 2
#endif // FALSO

// Verificamos que esté definido true
#ifndef true
   #define true 10
#endif // TRUE


// Función main con parámetros
int main(int argc,char *argv[],char *env[])
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 58 - Directiva undef,error,ifdef,ifndef \n\n");

    // Desplegamos los valores de las Macros
    printf("Número máximo de Archivos:%d \n",MAX_FILES);
    printf("VERDADERO :%d \n",VERDADERO);
    printf("FALSO     :%d \n",FALSO);
    printf("true      :%d \n",true);

    return 0;
}


