/* ---------------------------------------------------------------------
 Curso de C
 Clase 05
 Modificadores de Acceso
 ---------------------------------------------------------------------

 Además de los Modificadores de tipo, existen los Modificadores de
 acceso. Estos limitan el uso y definen el acceso que puede realizarse
 de las variables declaradas como tal.

 Los modificadores de acceso anteceden a la declaración del tipo de dato
 de la variable y son los siguientes:

 Modificador de Acceso	Descripción
 const					Valor constante
 volatile				Valor es modificado externamente


 El Modificador const, indica al compilador que esta variable; no
 puede ser modificada dentro del programa. Cualquier intento de
 modificar el valor de la variable; marcará un error en compilación.

 El Modificador volatile es un modificador que advierte al
 compilador que esta puede ser modificada por una rutina en segundo
 plano (background), por una rutina de interrupción, o por un
 dispositivo de entrada salida. Es decir, que puede sufrir
 modificaciones fuera del control del programa.


// Ejemplos:
// const    int iRango  = 20;
// volatile int iParametro;

*/

// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	const int    INT_EDAD     = 45;
	const char   CHR_LETRA    = 'a';
	const float  FLT_IMPUESTO = 1.23;

	volatile int iVariableVolatil = 100;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n",INT_EDAD,CHR_LETRA);
	printf("Clase 05 - Modificadores de Acceso \n\n");

	printf("El valor de Variable Constante entero  :  %d \n",INT_EDAD);	
	printf("El valor de Variable Constante caracter:  %c \n",CHR_LETRA);
	printf("El valor de Variable Constante float   :  %f \n",FLT_IMPUESTO);
	printf("El valor de Variable Volatil           :  %d \n",iVariableVolatil);

	// Error al intentar modificar
	//INT_EDAD = 90;
	iVariableVolatil=200;
	printf("El valor de Variable Volatil  : %d \n",iVariableVolatil);

	// Valor de Retorno
	return 0;
}

