/* ---------------------------------------------------------------------
 Curso de C
 Clase 17a
 Operadores Lógicos Precedencia
 -----------------------------------------------------------------------

 En la Clase anterior vimos que el Operando NOT tiene mayor precedencia
 que AND y el Operador  AND tiene mayor prioridad que el operador OR.

 Como para esta clase ya llevamos 3 tipos de operadores vistos, consideramos
 conveniente, mostrar la tabla de todos los operadores y visualizar en
 ella, los que ya hemos visto, y los que estamos estudiando. Esta es la
 tabla de precedencia de operadores en C.

 ----------------------------------------------------------------
 Operadores                                 Asociatividad
 ----------------------------------------------------------------
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

 Si podemos observarlos el Operador NOT, está en la parte superior de la
 tabla, por encima de muchos operadores; pero el And y el Or, están debajo
 del NOT pero debajo de muchos otros; que inclusive no hemos estudiado.

 
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
	printf("Clase 17a - Operadores Lógicos Precedencia \n\n");

	printf(" Las Edades. \n");
	printf(" iEdadMaria :%d \n",iEdadMaria);
	printf(" iEdadJuan  :%d \n",iEdadJuan);
	printf(" iEdadSonia :%d \n",iEdadSonia);
	printf(" iEdadJose  :%d \n",iEdadJose);
	printf(" iEdadJesus :%d \n\n",iEdadJesus);

    printf(" Comprobando Relaciones entre Edades con Operadores Relacionales y Lógicos   \n");

    iResult = iEdadMaria > iEdadJuan && iEdadMaria < iEdadJesus; // 0-1 = 0
    printf(" iEdadMaría > iEdadJuan && iEdadMaria < iEdadJesus :%d \n",iResult);

	iResult= !(iEdadJesus > iEdadJose) && iEdadJesus > iEdadMaria; // 0-1 = 0
	printf(" !(iEdadJesus > iEdadJose) && iEdadJesus > iEdadMaria : %d\n", iResult);

	iResult= iEdadJose > iEdadMaria || iEdadJose > iEdadJesus; // 1-0 = 1
	printf(" iEdadJose > iEdadMaria || iEdadJose > iEdadJesus : %d\n", iResult);

	iResult= iEdadJose > iEdadMaria || !(iEdadJose > iEdadJesus); // 1-1 = 1
	printf(" iEdadJose > iEdadMaria || !(iEdadJose > iEdadJesus) : %d\n", iResult);

	iResult= !(iEdadJose > iEdadMaria) && !(iEdadJesus > iEdadJose); // 0-1 = 0
	printf(" !(iEdadJose > iEdadMaria) && !(iEdadJesus > iEdadJose) : %d\n", iResult);

    iResult= !(iEdadJose > iEdadMaria && iEdadJesus > iEdadJose);// !(1-1)=0
	printf(" !(iEdadJose > iEdadMaria && iEdadJesus > iEdadJose) : %d\n", iResult);

    // !(1 && 1 || 0) = !(1 ||0) = !1 = 0
    iResult= !(iEdadJose > iEdadMaria && iEdadJesus > iEdadJose || iEdadSonia == iEdadMaria);
	printf(" !(iEdadJose > iEdadMaria && iEdadJesus > iEdadJose || iEdadSonia == iEdadMaria) : %d\n", iResult);
	
	// !(1 || 1  && 0) = ! (1 || 0) = !1 = 0
	iResult= !(iEdadJose > iEdadMaria || iEdadJesus > iEdadJose && iEdadSonia == iEdadMaria);
	printf(" !(iEdadJose > iEdadMaria || iEdadJesus > iEdadJose && iEdadSonia == iEdadMaria) : %d\n", iResult);

    // 1 && 1 + 1;  1 && 2; 1
    iResult = iEdadJesus > iEdadMaria && 1 + 1;
	printf(" iEdadJesus > iEdadMaria && 1 + 1: %d\n", iResult);

    // (1 && 1) + 1; 1 + 1 = 2
    iResult = (iEdadJesus > iEdadMaria && 1) + 1;
	printf(" (iEdadJesus > iEdadMaria && 1) + 1: %d\n", iResult);

    iResult = 5 && 0;// 0
	printf(" 5 && 0: %d\n", iResult);

	iResult = -2 && 1;// 1
	printf(" -2 && 1: %d\n", iResult);

	// Valor de Retorno
	return 0;
}




