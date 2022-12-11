/* ---------------------------------------------------------------------
 Curso de C
 Clase 23
 Operadores Otros Precedencia
 -----------------------------------------------------------------------

 En esta clase veremos la Precedencia de los Operadores sizeof, ? y ",".
 Como podemos observar en la tabla de precedencia de operadores; el
 operador sizeof, está prácticamente en la parte mas alta del nivel
 de precedencia; mientras que el operador "?"; está casi en la parte
 baja; y el operador "," es el operador con la precedencia mas baja.

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

 Veremos algunos ejemplos que nos permitan ilustrar y demostrar
 la precedencia de estos operadores; aunque el operador ","; no
 tiene mucho sentido su explicación; sabemos que se ejecuta al
 final; es como si se indicara otra instrucción.

*/
// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int x=4,y=0,z=0;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 23 - Operadores Otros Precedencia \n\n");

	printf(" Evaluando 2*sizeof(char) :%d\n",2 * sizeof(char));

    // Definiendo variables para obtener sus tamaños
    char       xChar;
    printf(" Desplegando los tamaños de las Variables Definidas \n");
	printf(" Evaluando sizeof(xChar)        :%d\n",sizeof(xChar));
    printf(" Evaluando sizeof(xChar++)      :%d\n",sizeof(xChar++));   // 1
    printf(" Evaluando sizeof(xChar++)*2    :%d\n",sizeof(xChar++)*2); // 2

    sizeof(xChar)+0 ? printf("True \n") : printf("False\n"); // 1 - True
    sizeof(xChar)-1 ? printf("True \n") : printf("False\n"); //   - False

    sizeof(xChar)+0 ? printf("True ->"), 
                      printf("%d ->",x), 
                      x = x + 1, 
                      printf("%d \n",x) : 
                      printf(" False \n"); // 

    sizeof(xChar)-1 ? printf("True \n"): 
                      printf("False ->"), 
                      printf("%d ->",y), 
                      y+=5,  
                      printf("%d \n",y);

	// Valor de Retorno
	return 0;

}


