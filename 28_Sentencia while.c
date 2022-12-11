/* ---------------------------------------------------------------------
 Curso de C
 Clase 28
 Sentencias de Ciclos de Repetición
 Sentencia while
 -----------------------------------------------------------------------

 La Sentencia que veremos en esta clase, es la sentencia while.
 La Sentencia while, ejecutará un conjunto de instrucciones mientras
 que una condición se cumpla. La Sintaxis de uso de la instrucción es
 la siguiente:

 while (condicion)
 [{]
      sentencias;
 [}]

 Donde:
 condicion : es una expresión o variable que debe retornar un valor de
             true o false.
 sentencias: es una o mas sentencias que se ejecutarán mientras que
             la condición se cumpla.

 La sentencia inicia evaluando la condición; si esta devuelve true; se
 ejecutan las sentencias. Cuando se llega al final de las sentencias;
 la condición se evalúa de nuevo; y si se cumple; se repiten de nuevo
 las sentencias.

 Debe existir alguna instrucción en las sentencias; que en algún momento
 dado, haga que el resultado de evaluar la condición sea false; para que
 de esta forma; la sentencia termine.
 
 Ejemplo:
 char cNumero=100;

 while (cNumero<100)
 {
    printf("%d -",cNumero);
    cNumero++;
 }

 La sentencia while anterior, imprimirá los números del 0 al 99.

 La Sentencia while tiene una variante de uso que es la siguiente:

 cNumero=100;
 do
 {
    printf("%d -",cNumero);
    cNumero++;
 }
 while (cNumero<100)

 Este uso de la sentencia,agrega la palabra "do" la cual indica el
 inicio de las sentencias a ejecutarse. La diferencia es que en esta
 sintaxis; la condición del ciclo, se evalua al final; de que las
 sentencias se ejecuten; y no al principio; lo que provoca que para
 esta sintaxis; se tenga la seguridad de que el ciclo se ejecuta por
 lo menos 1 vez.

*/
// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 28 - Sentencia while \n\n");

    char cNumero=0;

    // Imprimiendo los números del 0 al 99
    printf("Imprimiendo los números del 0 al 99 \n");
    while (cNumero<100)
       printf("[%d]",++cNumero);
    printf("\n");

    // Imprimiendo Tabla de Multiplicar del 7
    printf("Imprimiendo la Tabla de Multiplicar del 7 \n");

    cNumero=1;
    while (cNumero<=10)
       printf("7 x  %02d = %02d \n",cNumero++,cNumero*7);

    printf("Imprimiendo la Tabla de Multiplicar del 7 \n");
    cNumero=0;
    do
      printf("7 x  %02d = %02d \n",cNumero++,cNumero*7);
    while (cNumero<=10);


    // La sentencia while puede usarse sin indicar sentencias
    // Ciclo while que espera que se presione la tecla S
    printf("Presiona la letra S ...\n");
    while (getc(stdin)!='S');

    // Mensaje de que ya se ha presionado la tecla Escape
    printf("Has presionado la tecla S \n");

    // Ciclo while que espera que se presione la tecla S
    // La Sentencia do-while, necesita una instrución por lo menos
    do
      printf("Presiona la tecla X..\n");
    while (getc(stdin)!='X');


    // Valor de Retorno
	return 0;

}


