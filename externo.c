/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

externo.c
Archivo para usar con la clase 55_Variables Externas
*/

// Librería para el printf
#include "<stdio.h>"

// Variable Glogables definidas en este archivo
char strMensaje[] = "Variable Externa";
int  giNumero     = 10;

void SbMensaje()
{
    printf("Mensaje en Funcion Externa ...\n");
    printf("Variable Mensaje : %s\n",strMensaje);
    printf("Variable giNumero: %d\n",giNumero);
}