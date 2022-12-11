/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 55 - Variables y Funciones Externas

El lenguaje C es un Lenguaje Estructurado y Modular
que nos permite separar y clasificar el código de
nuestras aplicaciones; y finalmente; al momento de
realizar la compilación, incluir todos los archivos
para generar un solo ejecutable.

Lo anterior nos lleva a la circunstancia de poder tener
Variables Globales definidas en archivos distintos.
Como el proceso de compilación, se realiza; archivo por
archivo; es necesario tener alguna forma de hacer referencia
a variables que se encuentren en otro lugar.

La sentencia extern, nos permite hacer referencia a Variables
o funciones que se encuentren en otros archivos.

// Instrucción de compilación
gcc 55_Variables_Externas.c externo.c
*/


// Se incluyen las librerías
#include <stdio.h>
#include "externo.h"

// Función main con parámetros
int main(int argc,char *argv[],char *env[])
{

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 55 - Variables Externas \n\n");

    // Despliega el Mensaje
    SbMensaje();
    SbMensaje();
    SbMensaje();

    // Accediendo a una variable global
    printf("Desplegando Mensaje Global:%s \n",strMensaje);
    printf("Desplegando Variable Numerica Global:%d \n",giNumero);
    giNumero = 20;
    printf("Desplegando Variable Numerica Global:%d \n",giNumero);

    // Retorna 0
    return 0;
}

