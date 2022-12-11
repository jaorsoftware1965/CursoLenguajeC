/* ---------------------------------------------------------------------
 Curso de C
 Clase 16
 Operadores Relacionales Precedencia
 -----------------------------------------------------------------------

 Los Operadores Relacionales <,<=,>, y >=; tienen la misma precedencia; y
 los operadores "==" y "!=" tienen menor precedencia que los anteriores.

 La Precedencia entre si de estos operadores; no tiene mucho sentido de
 utilizarse; porque al realizar una operación entre ellos el resultado
 siempre es 1 o 0; y comparar este resultado contra otro operando similar;
 no tiene sentido. Ejemplo:

 iEdadMaria > iEdadJose < iEdadJuan
 

 En la expresión anterior, primero se ejecuta la primera operación; la
 cual devolverá 0 o 1; y este valor ya no tendra sentido compararlo
 contra la edad de Juan.

 Utilizar estas precedencias de operadores, solo tendria sentido con una
 expresión como la siguiente:

 iEdadJesus > iEdadJose == iEdadJesus > iEdadMaria

 En la expresión anterior primero se ejecutan los operadores ">" y al
 final se evaluaría "==".

 Lo anterior podría ser útil para saber si la Edad de Jesus es mayor
 que la de Jose y la de María; si devuelve 1 (true).

 La expresión:

 (iEdadMaria > iEdadJose) > (iEdadJuan > iEdadJose)

 Si resultara verdad, serviría para indicar que la Edad de Maria es
 mayor que la de Jose y que la Edad de Juan No es mayor que la de José.
 

 Con respecto a los Operadores artiméticos; estos tienen mayor precedencia
 que los operadores Relacionales; es decir; que en una expresión; se debe
 de ejecutar primero los aritméticos y después los relacionales. Ejemplo:

 iEdadJesus > iEdadMaria * 2;

 En el ejemplo anterior, primero se ejecuta la multiplicación y despues el
 operador relacional.

*/

// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int   iEdadMaria = 15;
	int   iEdadSonia = 16;
	int   iEdadJuan  = 20;
	int   iEdadJose  = 25;
	int   iEdadJesus = 34;
	int   iResult;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 16 - Operadores Relacionales Precedencia \n\n");

    printf(" Edades   \n");// →
    printf(" María  :%d \n",iEdadMaria);
    printf(" Juan   :%d \n",iEdadJuan);
    printf(" Sonia  :%d \n",iEdadSonia);
    printf(" José   :%d \n",iEdadJose);
    printf(" Jesús  :%d \n\n",iEdadJesus);

	// Probando Suma
	iResult = iEdadJesus > iEdadJose == iEdadJesus > iEdadMaria;
	printf(" iEdadJesus > iEdadJose == iEdadJesus > iEdadMaria : %d\n", iResult);

	iResult = iEdadJose > iEdadMaria == iEdadJose > iEdadJesus;
	printf(" iEdadJose > iEdadMaria == iEdadJose > iEdadJesus : %d\n", iResult);

	iResult = (iEdadJose > iEdadMaria) > (iEdadJose > iEdadJesus);
	printf("(iEdadJose > iEdadMaria) > (iEdadJose > iEdadJesus) : %d\n", iResult);

	iResult = (iEdadJose > iEdadMaria) > (iEdadJesus > iEdadJose);
	printf("(iEdadJose > iEdadMaria) > (iEdadJesus > iEdadJose) : %d\n", iResult);

    iResult = iEdadJesus > iEdadMaria * 2;
	printf(" iEdadJesus > iEdadMaria * 2: %d\n", iResult);

    iResult = iEdadJesus > iEdadSonia + 2;
	printf(" iEdadJesus > iEdadSonia + 2: %d\n", iResult);

	iResult = iEdadJesus > iEdadJuan - 2;
	printf(" iEdadJesus > iEdadJuan - 2: %d\n", iResult);

	iResult = (iEdadJesus > iEdadMaria) * 2;
	printf(" (iEdadJesus > iEdadMaria) * 2: %d\n", iResult);

	// Valor de Retorno
	return 0;
}


