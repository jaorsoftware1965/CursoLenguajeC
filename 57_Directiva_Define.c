/*
Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 57 - Directivas del Pre-Procesador.

DEFINE.
La directiva define se usa para definir un identificador y una cadena que el
compilador sustituirá por el identificador cada vez que se encuentre en el archivo
fuente. El standard ANSI llama al identificador "nombre de macro" y al proceso de
sustitución "sustitución de macro". Por ejemplo:

#define TRUE 1
#define FALSE 0

El compilador, cada vez que vea el identificador TRUE, lo sustituirá por el
valor 1, e igual con FALSE. El uso mas común de la directiva #define es la definición
de valores constantes en el programa, tamaños de arrays, etc.

Una característica que posee la directiva #define es que el "nombre de macro"
puede contener argumentos. Cada vez que el compilador encuentra el "nombre de
macro", los argumentos reales encontrados en el programa reemplazan los argumentos
asociados con el nombre de macro. Veamos un ejemplo:

#define MIN(a,b) (a<b) ? a : b

Si tenemos ahora en el programa:
printf("El valor mínimo es: %d\n",MIN(10,20));

El compilador sustituye el "nombre de macro" y sus argumentos en tiempo de
compilación, y ello equivale a haber escrito el código:

printf("El valor mínimo es: %d\n",(10<20) ? 10 : 20);

*/

// Se incluyen las librerías
#include <stdio.h>


// Definimos el Cambio de Linea
#define CR               printf("\n");
#define SALIDA           return 0;
#define ENTERO           int
#define Si               if
#define DeOtroModo       else
#define Escribe          printf
#define TRUE             1
#define FALSE            0
#define MIN(a,b)         (a<b) ? 1 : (b<a) ? 2 : 0
#define MULTIPLICA(a,b)  a * b + 2
#define DIVISIBLE(a,b)   (a%b)==0

// Función main con parámetros
int main(int argc,char *argv[],char *env[])
{

    // Definimos una variable entera
    ENTERO iValor=19;

    // Desplegamos Mensaje de la Clase
    Escribe("Curso de Lenguaje C \n");
    Escribe("Clase 57 - Directiva Define \n\n");

    // Usamos las MACRO
    Si (iValor > 10 )
      Escribe ("El Valor :%d es Mayor que 10 \n",iValor);
    DeOtroModo
      Escribe ("El Valor :%d es Menor o igual que 10 \n",iValor);
    CR;

    Escribe("La Multiplicación de 5 x 8 es:%d\n",MULTIPLICA(5,8));

    int c = 10;
    int e = 23;
    int f = 10;
    
    if (MIN(c,e)==1)
       Escribe("%d es el Menor\n",c);
    else
       if (MIN(c,e)==2)
          Escribe("%d es el Menor",e);
       else   
          Escribe("%d y %d son iguales",c,e);
    CR;
    if (MIN(c,f)==1)
       Escribe("%d es el Menor\n",c);
    else
       if (MIN(c,f)==2)
          Escribe("%d es el Menor",f);
       else   
          Escribe("%d y %d son iguales",c,f);
    CR;

    Si (DIVISIBLE(10,5))
       Escribe ("Es Divisible");
    DeOtroModo
       Escribe ("No Es Divisible");

    // Utilizamos esta Macro para dejar una Linea
    CR

    // Salimos del Programa
    SALIDA
}

