/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 56 - Directivas del Pre-Procesador.

Se conoce como Directivas del Pre-Procesador, a aquellas
instrucciones que NO SON PARTE DEL LENGUAJE C, y que
sirven para darle instrucciones al Pre-Procesador; que es
parte del Compilador del Lenguaje.

Para distinguir a las Directivas, de las instrucciones en
Lenguaje C, se hacer uso del símbolo "#"; antes de escribir
la instrucción.

INCLUDE.
La directiva que hemos estado utilizando a través de todo
el curso es la directiva INCLUDE. Esta instruccion permite
incluir un archivo externo, para que forme parte del código
del presente archivo.

Para el caso del curso, hemos estado utilizando la instrucción
para incluir las librerías que forman parte del Lenguaje C;
aunque podemos incluir nuestros propios archivos.

Es importante mencionar, que los archivos que se incluyen a
través de la directiva, pueden contener a su vez mas directivas
include para realizar la inserción de otros archivos.

Ejemplo:

#include <stdio.h>
#include "stdio.h"

Podemos observar que en el primer caso, hemos utilizasdo los
símbolos <> para delimitar el nombre del archivo; y en el segundo
caso hemos utilizado "".

La diferencia existente, es que, en el primer caso, se busca el
archivo a incluir en los directorios de la linea de ordenes de
compilación, y, después en los directorios standard de C, pero
nunca en el directorio de trabajo; y en el segundo caso el primer
sitio donde se busca el archivo a incluir es en el directorio
actual de trabajo, pasándose, en caso de no haber sido encontrado,
a buscar en los mismos sitios que el caso anterior.

********************************
NOTA.Compilar este archivo SOLO
********************************
*/

// Se incluyen las librerías
#include <stdio.h>
//#include "54_Ambito_Variables.c"

// Función main con parámetros
int main_56(int argc,char *argv[],char *env[])
{

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 56 - Directiva Include \n\n");

    // Despliega el Mensaje
    SbMensaje();
    SbMensaje();
    SbMensaje();


    // Accediendo a una variable global
    //printf("Desplegando Mensaje Global:%s \n",strMensaje);
    //printf("Desplegando Variable Numérica Global:%d \n",giNumero);


    // Retorna 0
    return 0;
}
