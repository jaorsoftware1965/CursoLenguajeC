/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 48 - Funciones II

En esta clase veremos ejemplos de Funciones que reciben mas de un
parámetro y que devuelven un valor.

*/

// Definimos el cambio de Línea
#define CR printf("\n")

// Librerias
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// Defino el Prototipo de la Funciones a Usar
char  fnChrHexadecimal(int iNumero);
char *fnStrDiaSemana(int iDia);
int   fnIntNumeroAlCuadrado(int xValor);
int   fnIntNumeroPotencia(int xValor, int xPotencia);

// Función Principal
int main()
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 48 - Funciones II \n\n");
    CR;

    // Variable para Demos
    int  xNumero;
    char xChar;
    char strCadena[50];

    // Obtengo el Cuadrado de un Número
    xNumero = fnIntNumeroAlCuadrado(5);
    printf("%d\n",xNumero);

    // Elevar un Número a una Potencia
    xNumero = fnIntNumeroPotencia(4,3);
    printf("%d\n",xNumero);

    // Obtener el caracter Hexadecimal
    xChar=fnChrHexadecimal(15);
    printf("%c\n",xChar);

    // Obtener el Dia de la Semana
    strcpy(strCadena,fnStrDiaSemana(0));
    printf("%s\n",strCadena);

    // Finaliza retornando 0
    return 0;
}

// Función para Obtener el Cuadrado de un Número
int fnIntNumeroAlCuadrado(int xValor)
{
   // Variable para el Resultado
   int iResult;

   // Calculamos el Resultado
   iResult = xValor * xValor;

   // Retornamos el Valor
   return (iResult);
}

// Función para elevar un número a cierta potencia
int fnIntNumeroPotencia(int xValor, int xPotencia)
{
  // Variable de Conteo
  int iCuenta;

  // Variable para el Resultado
  int iResult=0;

  // Verifica que la potencia sea 0
  if (xPotencia==0)
     iResult = 1;
  else
      // Verifica que la potencia sea 1
      if (xPotencia==1)
         iResult = xValor;
      else
          // Verifica que la potencia sea 2
          if (xPotencia == 2)
             iResult = fnIntNumeroAlCuadrado(xValor);
          else
          {
              // Inicializamos el Resultado
              iResult = xValor;
              
              for (iCuenta=1; iCuenta < xPotencia; iCuenta++)
                  iResult = iResult * xValor;
          }

  // Retorna el Valor
  return (iResult);

}

// Obtiene el digito (un caracter) valido en hexadecimal 
// correspondiente a los numeros del 0 al 15
char fnChrHexadecimal(int iNumero)
{
   char xResult;

   // Evalua el Numero
   switch (iNumero)
   {
      case 0:xResult='0';
             break;
      case 1:xResult='1';
             break;
      case 2:xResult='2';
             break;
      case 3:xResult='3';
             break;
      case 4:xResult='4';
             break;
      case 5:xResult='5';
             break;
      case 6:xResult='6';
             break;
      case 7:xResult='7';
             break;
      case 8:xResult='8';
             break;
      case 9:xResult='9';
             break;
      case 10:xResult='a';
             break;
      case 11:xResult='b';
             break;
      case 12:xResult='c';
             break;
      case 13:xResult='d';
             break;
      case 14:xResult='e';
             break;
      case 15:xResult='f';
             break;
      default:xResult='?';
             break;
   }

   // Lo Retorna
   return xResult;

}

// Obtiene el Nombre del Día de la Semana
char *fnStrDiaSemana(int iDia)
{
   // Cadena para el Resultado
   static char strResult[50];

   printf("Direccion: %p \n",strResult);

   // Evalua el Dia
   switch (iDia)
   {
      case 1:strcpy(strResult,"Domingo");
             break;
      case 2:strcpy(strResult,"Lunes");
             break;
      case 3:strcpy(strResult,"Martes");
             break;
      case 4:strcpy(strResult,"Miercoles");
             break;
      case 5:strcpy(strResult,"Jueves");
             break;
      case 6:strcpy(strResult,"Viernes");
             break;
      case 7:strcpy(strResult,"Sábado");
             break;
      default:strcpy(strResult,"Error:Dia debe ser del 1 al 7");
             break;
   }

   // Retornamos
   return (strResult);

}


