/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 54 - Ámbito y Variables Static

Se conoce como Ámbito de una Variable, los "lugares" o secciones
del programa en donde podemos hacer referencia o uso de ella.

Básicamente hay 2 tipos de variables, en relación a su ámbito:
- Variable Local
- Variable Global

Una Variable es LOCAL, cuando está definida dentro de
una función; y solamente puede hacerse referencia a ella; dentro
de la función.

Una Variable es GLOBAL, cuando se encuentra definida fuera de
cualquier función; y entonces es posible hacer referencia a ella
desde cualquier parte del programa

*/

// Se incluyen las librerías
#include <stdio.h>

// Variables Globales
int  giNumero = 10;
char strMensaje[] = "Mensaje en Variable Global";

//  Función  que despliega un Mensaje
void SbMensaje()
{
    // Variable Local
    //char strMensaje[]="Mensaje en Variable Local";
    //static int iMensajeNumero = 0;
    int iMensajeNumero = 0;

    // Incrementa el Número de Mensaje el cual se conservará
    iMensajeNumero++;

    // Despliega el Mensaje
    printf("Mensaje Local  %d: %s \n",iMensajeNumero,strMensaje);
    printf("Mensaje Global %d: %s \n",giNumero++    ,strMensaje);
    printf("\n");

}

// Función main con parámetros
int main(int argc,char *argv[],char *env[])
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 54 - Ámbito y Variables Static \n\n");

    // Despliega el Mensaje
    SbMensaje();
    SbMensaje();
    SbMensaje();

    // Accediendo a una variable global
    printf("Desplegando Mensaje Global:%s \n",strMensaje);
    printf("Desplegando Variable Numérica Global:%d \n",giNumero);

    // Retorna 0
    return 0;
}
