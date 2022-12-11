/* ---------------------------------------------------------------------
 Curso de C
 Clase 14
 Operadores Aritméticos Precedencia
 -----------------------------------------------------------------------

 Se conoce como Precedencia de Operadores; al orden o prioridad en que
 son ejecutados los operadores dentro de una Expresión. Por Ejemplo:
 En la expresión :

 5 + 3 * 4

 quien no conozca la Precedencia de Operadores, podrá indicar que el
 resultado de la expresión es: 5+3*4 = 8*4 = 32

 Sin embargo quien conozca la Precedencia de operadores, sabrá que el
 resultado de la expresión es: 5+3*4 = 5+12 = 17

 Esto se debe a que la operación de Multiplicación tiene mayor precedencia
 o prioridad que la Suma por lo que primeramente en la expresión, deberá
 de resolverse la multiplicación y posteriormente la suma.

 La precedencia o prioridad de los operadores aritméticos, considerando
 que los primeros tienen mayor precedencia, es la siguiente:

 ++, --        
 -             
 *, /, %
 +, -

 Podemos distinguir que los de mayor precedencia son los operadores de
 incremento y decremento, seguidos del negativo de un valor; posteriormente
 la Multiplicación, División y Residuo; y finalmente la Suma y la Resta.

 Cuando en una expresión, los operadores tiene la misma precedencia,
 entonces su orden de ejecución es de izquierda a derecha.
 5 + 4 - 12 = 9 - 12 = -3

 Los "()" y los "[]" se utilizan para indicar precedencia en las expresiones.
 Ejemplo: (5+6) * 7

 En la anterior expresión, la operación de suma entre paréntesis, deberá de
 ejecutarse primero que la multiplicación.

*/

// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{

    int iValor=10;
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 14 - Operadores Aritméticos Precedencia \n\n");

	// Precedencia
	printf(" 5 + 3  * 4   : %d \n", 5+3 *4);
	printf("(5 + 3) * 4   : %d \n",(5+3)*4);
	printf(" 5 + 3  + 4   : %d \n", 5+3+4);
	printf("-5 + 3  + 4   : %d \n",-5+3+4);
	printf("-5 + (3  + 4) : %d \n",-5+(3+4));
	printf("-5 * 3  / 4   : %d \n",-5*3/4);
	printf("-(5 * 3  / 4) : %d \n",-(5*3/4));
	printf(" 5 + 3 % 2    : %d \n",5+3%2);
	printf("(5 + 3) % 3   : %d \n\n",(5+3)%3);

    printf(" iValor:%d \n",iValor);
	printf(" ++iValor + 3  + 4 : %d \n",++iValor+3+4);
	iValor = 10;
    printf(" iValor++ + 3  + 4 : %d \n",iValor++ +3+4);
    iValor = 10;
    printf(" ++iValor + 3  * 4 : %d \n",++iValor+3*4);
	iValor = 10;
    printf(" iValor++ + 3  * 4 : %d \n",iValor++ +3*4);
	iValor = 10;
	printf("-->%d \n",-++iValor);

	// Ejercicio
	printf("5 + 4 - 12 * 2 / 1 :%d", 5 + 4 - 12 * 2 / 1 );

	// Valor de Retorno
	return 0;
}

// Ejercicios. Resuelva
// 5 + 4 - 12 * 2 / 1    
//     9 - 12 * 2 / 1
//     9 - 24 / 1
//     9 - 24
//   -15

// (5+4) / 2 + 8 * (5+2)
// (5+4) / (2 + 8) * 5+2
//  5+4 / 2 * 8 * (5+2)
// -(7+4 / 2 + 8) * 5+2
// -(5 * 4 + 3 / 1 / 2 + 8 + 5+2 )



