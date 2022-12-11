/* ---------------------------------------------------------------------
 Curso de C
 Clase 24
 Conversión de Tipos de Datos
 -----------------------------------------------------------------------

 CONVERSIÓN AUTOMÁTICA.
 El Lenguaje C, como muchos otros lenguajes, permite que en una expresión
 existan mas de un tipo de dato involucrado que sean compatibles y para
 los cuales realiza una conversión automática al tipo de dato mas
 grande en Bytes; aplicando las siguientes reglas:

 1) Todos los char y short int se convierten a int. Todos los float a double.
 2) Para todo par de operandos, lo siguiente ocurre en secuencia:
   - Si uno de los operandos es un long double, el otro se convierte en long
     double.
   - Si uno de los operandos es double, el otro se convierte a double.
   - Si uno de los operandos es long, el otro se convierte a long.
   - Si uno de los operandos es unsigned, el otro se convierte a unsigned.

 Ahora. Cuando asignamos la expresión a una variable; el resultado se ajusta al tipo
 de la variable asignada.


 CONVERSION MANUL.(USANDO CAST).
 Cuando los tipos de datos no son compatibles; o no producen el resultado
 deseado en una expresión; podemos realizar lo que en programación C se
 conoce como "cast"; que significa convertir un dato de un tipo a otro;
 para de esta forma poder obtener el resultado deseado. 
 La sintaxis para poder realizar un "cast" es la siguiente:

 (tipo)expresion.

 Donde:
 tipo. Es el tipo de dato al cual queremos realizar la conversión de expresion.
 expresion. Puede ser una variable o una operación; la cual se desea convertir.

*/
// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 24 - Conversión de Tipos de Datos \n\n");

  // Declarando Variables
	char   xChar    = 127;
	int    xInteger =  10;
	float  xFloat   = 100.50;
	double xDouble  = 400.50;

  printf("Imprimiendo las Conversiones automaticas...\n");
  printf("xChar     + xInteger :%c \n"  ,xChar + xInteger);
	printf("xChar     + xInteger :%d \n"  ,xChar + xInteger);
	printf("xInteger  + xFloat   :%d \n"  ,xInteger + xFloat);
	printf("xInteger  + xFloat   :%f \n"  ,xInteger + xFloat);
	printf("xFloat    + xDouble  :%d \n"  ,xFloat + xDouble);
  printf("xFloat    + xDouble  :%f \n\n",xFloat + xDouble);

	printf("sizeof-> xChar     + xInteger :%d \n"  ,sizeof(xChar + xInteger));
	printf("sizeof-> xInteger  + xFloat   :%d \n"  ,sizeof(xInteger + xFloat));
	printf("sizeof-> xFloat    + xDouble  :%d \n"  ,sizeof(xFloat + xDouble));

  // Declaramos otra variable entera
  int   xInteger2 =  3;
  float xFloat2   = 25.50;

  // Aplicamos la división de los 2 enteros
  printf("Imprimiendo valores con cast ...\n");
  xFloat = xInteger / xInteger2;
  printf("xFloat      :%f \n",xFloat);
  xFloat = (float)xInteger / xInteger2;
  printf("xFloat      :%f \n\n",xFloat);

  xFloat = 100.50;
  xFloat2 = 20.50;
  xInteger = xFloat / xFloat2;
  printf("xFloat / xFloat2 :%f \n",xFloat/xFloat2);
  printf("xInteger         :%d \n",xInteger);
  xInteger = (int)(xFloat) /(int) xFloat2;
  printf("xInteger         :%d \n\n",xInteger);

    xChar = (char)833;
    printf("xChar :%c\n",xChar);
    xChar = (char)834;
    printf("xChar :%c\n",xChar);

	// Valor de Retorno
	return 0;

}



