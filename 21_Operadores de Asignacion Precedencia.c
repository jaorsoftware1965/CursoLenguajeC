/* ---------------------------------------------------------------------
 Curso de C
 Clase 21
 Operadores de Asignación Precedencia
 -----------------------------------------------------------------------

 En esta clase veremos la Precedencia de los Operadores de Asignación con
 respecto a otros operadores.

 Operadores                                 Asociatividad
 () [] -> :: . 	                            Izquierda a derecha
 ! ~ + - ++ -- & * sizeof new delete 	    Derecha a izquierda
 .* ->* 	                                Izquierda a derecha
 * (multiplicación) / % 	                Izquierda a derecha
 + - (operadores binarios) 	                Izquierda a derecha
 << >> 	                                    Izquierda a derecha
 < <= > >= 	                                Izquierda a derecha
 == != 	                                    Izquierda a derecha
 & (bitwise AND) 	                        Izquierda a derecha
 ^ (bitwise XOR) 	                        Izquierda a derecha
 | (bitwise OR) 	                        Izquierda a derecha
 && 	                                    Izquierda a derecha
 || 	                                    Izquierda a derecha
 ?: 	                                    Derecha a izquierda
 = *= /= %= += -= &= ^= |= <<= >>= 	        Derecha a izquierda
 , 	                                        Izquierda a derecha

 Como podemos observar en la tabla, a excepción del operador "," todos los
 demás operadores están por encima de los operadores de asignación; así
 que esto significa que la asignación siempre se realizará al final, dentro
 de la expresión en la que esté.

*/

// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int x,y,z;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 21 - Operadores de Asignación Precedencia\n\n");

	printf(" Ejemplos de Precedencia con Operadores de Asignación y otros operadores; sea x=10 \n");
	x=10;
	printf(" 1)  x+=3 *5  :%d  \n",x+= 3 * 5);        // x+=15    = 25
	x=10;
	printf(" 2) (x+=3)*5  :%d  \n",(x+=3) *5);        // 13 * 5   = 65
    x=10;
	printf(" 3) 400/(x+=3)*5  :%d  \n",400/(x+=3)*5); // 400/13*5 = 150
    x=10;
	printf(" 4) 400>(x+=3*5)  :%d  \n",400>(x+=3*5)); // 400 > 25 = true
    x=10;
	printf(" 5) 24>(x+=3*5)  :%d  \n",24>(x+=3*5));   // 24 > 25 = false
    x=10;
	printf(" 6) 24>(x=3*5)  :%d  \n",24>(x = 3*5));     // 24 > 15 = true
	x=10;
	printf(" 7) 14>(x=3*5)  :%d  \n",14>(x = 3*5));     // 14 > 15 = false

	// Valor de Retorno
	return 0;

}

