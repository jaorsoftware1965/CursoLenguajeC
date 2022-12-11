/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE

Clase 52 - Parámetros de la Función main

La Función main(), como toda función de C, acepta parámetros.
Al momento del curso, hemos utilizado la función sin indicar estos
parámetros aunque en esta clase los utilizaremos y se explicará su uso.

Los argumentos que acepta la función main() son:
a) un entero (int argc),
b) un array de punteros a strings (char *argv[]), y
c) otro array de punteros a  strings (char *env[]).

Aunque los nombres de dichos argumentos no tienen porque ser argc, argv, y env, 
en toda la literatura de C se usan dichos nombres, y aquí los respetaremos.

La pregunta inicial al respecto del tema es.
¿ En que momento se activan o se usan los argumentos de la función main?
Al momento en que se ejecuta el programa.

Cuando se ejecuta un programa, y se colocan "palabras" o "datos" despues del nombre
de la aplicación; estos vienen a ser parte de los argumentos.
El mismo nombre del programa, viene a ser el primer argumento de la función main.

El significado de los parámetros argc, argv y env es el siguiente:

• El parámetro argc contiene el número de argumentos en la línea de ordenes de
la llamada al programa. Por lo menos siempre vale 1; porque este es el nombre del programa.

• El parámetro argv contiene un puntero a cada uno de los argumentos (strings)
de la línea de ordenes de la llamada al programa. Es decir, cada "palabra" que se
haya escrito despues del nombre del programa, separadas por espacios.

• El parámetro env contiene un puntero a cada una de las variables de ambiente
(strings) del sistema operativo.

*/
// Se incluyen las librerías
#include <stdio.h>
#include "string.h"
#include "stdlib.h"
#include "ctype.h"

// Función main con parámetros
int main(int   argc,  // Tendre el numero de palabras que escriba:a hola katherine =3
         char *argv[],// apuntador a a, un apuntador hola y otro a katherine
         char *env[]) // A cada variable de Windows
{

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 52 - Parametros de la Funcion main \n\n");

    // Variable de Conteo
    int iCuenta;
    char espera[10];

   //  // Mensaje del Despliegue
   //  printf("El valor de argc es: %d\n",argc);
   //  gets(espera);

   //  // Ciclo para obtener cada uno de los parámetros
   //  for(iCuenta=0;iCuenta<argc;iCuenta++)
   //     printf("El argumento %d es: %s\n",iCuenta,argv[iCuenta]);
   //  gets(espera);

   //  // Ciclo para obtener cada una de las variables de ambiente
   //  for(iCuenta=0;env[iCuenta]!=NULL;iCuenta++)
   //  {
   //     printf("La variable de ambiente %d es: %s\n",iCuenta,env[iCuenta]);
   //     gets(espera);
   //  }

    // Verificando el Número de Argumentos
    if (argc==1)
    {
       printf("Indique la operaciOn que desea realizar \n");
       printf("Para ayuda agregue H \n");
    }
    else
    if (argc==2)
    {

       // Verifica si es la H
       if (strcmp(argv[1],"H")==0)
       {
          printf("Operacion Ver 1.0 \n");
          printf("Ayuda \n");
          printf("El Programa le permite realizar operaciones de la siguiente forma:\n");
          printf("Numero Operacion Numero \n");
          printf("Donde Numero es cualquier valor del 0 al 9 y Operacion puede ser +,-,*,/\n");
          printf("Ejemplo:\n");
          printf("CursoGCC 5 + 5\n");

       }
       else
          printf("Argumento desconocido\n");

    }
    else
    if (argc==4)
    {

       // Obtiene los Números y la Operación
       int iValor1;
       int iValor2;
       int iResult;
       char cOperador;

       // Obtengo los 2 Valores       
       if (!isdigit(argv[1][0]))
          printf("El Operando %s no es un digito, se asignara 0 \n",argv[1]);
       
       if (!isdigit(argv[3][0]))
          printf("El Operando %s no es un digito, se asignara 0 \n",argv[3]);


       iValor1 = atoi(argv[1]);
       iValor2 = atoi(argv[3]);

       // Obtengo el Operador
       cOperador=*argv[2];

       // Verifica operación
       switch (cOperador)
       {
          case '+':iResult=iValor1+iValor2;
                   printf("El Resultado de la Suma es:%d\n",iResult);
                   break;

          case '-':iResult=iValor1-iValor2;
                   printf("El Resultado de la Resta es:%d\n",iResult);
                   break;

          case '*':iResult=iValor1*iValor2;
                   printf("El Resultado de la Multiplicación es:%d\n",iResult);
                   break;

          case '/':
                  if (iValor2==0)                  
                     printf("La Division entre 0 no esta definida \n");             
                  else                  
                  {
                     iResult=iValor1/iValor2;
                     printf("El Resultado de la División es:%d\n",iResult);
                  }                                          
                  break;
          default :
                  printf("Error. Operador incorrecto\n");
       }
    }
    else
        printf("Error en Argumentos; H para ver ayuda \n");

    // Retorna 0
    return 0;
}
