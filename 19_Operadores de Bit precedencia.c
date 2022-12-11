/* ---------------------------------------------------------------------
 Curso de C
 Clase 19
 Operadores de Bits Precedencia
 -----------------------------------------------------------------------

 La Precedencia de los Operadores de Bits se muestra en la siguiente tabla;
 en forma descendente. El Operador Not es el de mayor precedencia, seguido
 de los operadores de desplazamiento; posteriormente el operador &, Xor y
 finalmente el operador Or.

 ---------------------------------------------------
 Operador   Nombre
 ---------------------------------------------------
 ~          Not
 << >>      Desplazamiento a la izquierda  y Derecha
 &          AND
 ^          XOR
 |          OR

 Los Operadores de Bit con respecto a los demás, tienen una
 ubicación algo compleja, por lo cual tendremos que mostrar toda la tabla
 de Operadores para poder ubicar su precedencia.

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

*/

// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int iResult=0;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 19 - Operadores de Bits Precedencia \n\n");

	printf("Valores Iniciales y Comprobaciones de Not \n");
	iResult = ~10;
	printf("~10            :%d \n",iResult);
    iResult = ~(~10);
	printf("~(~10)         :%d \n\n",iResult);

    printf("Evaluando precedencia de Not con Desplazamiento izquierda\n");
	iResult = ~10 << 1;   // Primero de 10 a -11 y luego de -11 a -22
	printf("~10 << 1       :%d \n",iResult);
	iResult = ~(10 << 1); // Primero 10 a 20 y luego de 20 a -21
	printf("~(10 << 1)     :%d \n\n",iResult);

	printf("Evaluando precedencia de Not con Desplazamiento derecha\n");
	iResult = ~10 >> 1;   // Primero de 10 a -11 y luego de -11 a -6
	printf("~10 >> 1      :%d \n",iResult);
	iResult = ~(10 >> 1); // Primero 10 a 5 y luego de 5 a -6
	printf("~(10 >> 1)     :%d \n\n",iResult);

    printf("6 >> 1:%d\n"  ,6 >> 1);  // 6 = 110 >> 1 = 11 = 3
    printf("7 >> 1:%d\n\n",7 >> 1);  // 7 = 111 >> 1 = 11 = 3

    printf("Evaluando precedencia de Desplazamiento Izquierda con &\n");
	iResult = 10 & 1 << 1;   // Primero 1 << 1 = 2; despues 10 & 2 = 2	
	printf("10 & 1 << 1      :%d \n",iResult);

	iResult = (10 & 1) << 1; // Primero 10 & 1 = 0; despues 0 << 1 = 0
	printf("(10 & 1) << 1    :%d \n\n",iResult);

    printf("Evaluando precedencia de Desplazamiento Derecha con &\n");
	iResult = 10 & 1 >> 1;   // Primero 1 >> 1 = 0; despues 10 & 0 = 0
	printf("10 & 1 >> 1      :%d \n",iResult);

	iResult = (10 & 1) >> 1; // Primero 10 & 1 = 0; despues 0 >> 1 = 0
	printf("(10 & 1) >> 1    :%d \n\n",iResult);

    printf("Evaluando precedencia de & con ^\n");
	iResult = 10 ^ 1 & 1;   // Primero 1 & 1 = 1; despues 10 ^ 1 = 11
	printf("10 ^ 1 & 1      :%d \n",iResult);

	iResult = (10 ^ 1) & 1; // Primero 10 ^ 1 = 11; despues 11 & 1 = 1
	printf("(10 ^ 1) & 1    :%d \n\n",iResult);

    printf("Evaluando precedencia de ^ con | \n");
	iResult = 10 | 1 ^ 1;   // Primero 1 ^ 1 = 0; despues 10 | 0 = 10
	printf("10 | 1 ^ 1      :%d \n",iResult);

	iResult = (10 | 1) ^ 1; // Primero 10 | 1 = 11; despues 11 ^ 1 = 10
	printf("(10 | 1) ^ 1    :%d \n\n",iResult);

    printf("Evaluando precedencia con otros operadores \n");
	iResult = 10 ^ 1 & 1 + 5;   // Primero 1+5 = 6; despues 1 & 6 = 0; despues 10 ^ 0 = 10
	printf(" 10 ^ 1 & 1 + 5   :%d \n",iResult);
	
	iResult = (10 ^ 1 & 1) + 5; // Primero 1 & 1 = 1; despues 10 ^ 1 = 11; Despues 11 + 5 = 16
	printf("(10 ^ 1 & 1) +5   :%d \n\n",iResult);


	// Valor de Retorno
	return 0;

}





