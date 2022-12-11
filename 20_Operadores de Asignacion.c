/* 
----------------------------------------------------------------------------
 Curso de C
 Clase 20
 Operadores de Asignación
----------------------------------------------------------------------------

 A la fecha hemos utilizado en forma natural el operador de asignación "="
 el cual es utilizado en el estudio común de las matemáticas o de cualquier
 otra area.

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

 El operador de asignación "=" se encuentra en la parte mas baja
 de la tabla de precedencia de operadores;  únicamente por encima
 del operador ","; es decir que en cualquier expresión en la que
 se encuentre, siempre se ejecutará al final.

 Lo que hace el operador de asignación es tomar el valor resultante de su
 expresión derecha; y asignarlo a la parte izquierda que puede ser una variable
 o una función; o cualquier otro elemento en el cual puede asignarse algo.

 Los operadores que se encuentran a la derecha del "=" en la tabla,
 son los otros operadores de asignación que existen.
 Podemos observar que es la combinación del operador "=" con otros
 operadores.

 La forman en que operan estos operadores se muestra en el siguiente
 ejemplo:

 La siguiente expresión:x = x + 5; da el mismo resultado que: x += 5.

 La anterior expresión lo que hace es que al valor de "x" se le agregue
 5 y el resultado sea almacenado en la misma variable "x".

 Si observamos, es una expresión "simplificada" en la que el operando
 al ser usado para asignar y en la operación; se puede estipular de
 esta forma sin tener que escribirlo 2 veces.

 La siguiente expresión: x = y + 5; no puede ser simplificada con estos
 operadores; ya que no existe repetida la variable en la asignación y
 en la operación.

 Los operandos de asignación lo que hacen es expresar en forma simplificada
 la operación indicada en el operador que precede al operador "=".

 La precedencia entre si de los operadores de asignación, es la misma;
 solo que estos se evalúan de derecha a izquierda; y no de izquierda a
 derecha como comunmente es; y como se evalúan la mayoría de los operadores.

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
	printf("Clase 20 - Operadores de Asignación \n\n");

	printf(" Ejemplos con operadores de asignacion; sea x=10 \n");
	x=10;
	printf(" 1) x+=3      :%d  \n",x+=3);
    x=10;
	printf(" 2) x-=3      :%d  \n",x-=3);
	x=10;
	printf(" 3) x*=3      :%d  \n",x*=3);
	x=10;
	printf(" 4) x/=3      :%d  \n",x/=3);
	x=10;
	printf(" 5) xmod=3    :%d  \n",x%=3);
	x=10;
	printf(" 6) x&=3      :%d  \n",x&=3);
	x=10;
	printf(" 7) x^=3      :%d  \n",x^=3);
	x=10;
	printf(" 8) x|=3      :%d  \n",x|=3);
	x=10;
	printf(" 9) x<<=3     :%d  \n",x<<=3);
	x=10;
	printf("10) x>>=3     :%d  \n\n",x>>=3);

    printf("Comprobando Precedencia entre ellos, sea x=5; y=7; z=9 \n");
    x=5;
    y=7;
	printf("11) x+=y*=2        :%d \n",x+=y*=2);// x+=14
	x=5;
    y=7;
	printf("11) x+=y*2        :%d \n",x+=y*2);// x+=14
	x=5;
    y=7;
    printf("12) x*=y+=2       :%d \n",x*=y+=2); // x*=9 = 5 ? 9 = 45
    x=5;
    y=7;
    z=9;
    printf("13) x*=y+=z<<=1    :%d \n", x*=y+=z<<=1);// x*=y+=18;  x*=25; 125
    x=5;
    y=7;
    z=9;
    printf("13) -(x*=y+z<<=1) :%d \n",-(x*=y+=z<<=1));
	x=5;
    y=7;
    z=9;
	printf("13) ~(x*=y+z<<=1) :%d \n",~(x*=y+=z<<=1));

	// Valor de Retorno
	return 0;

}
