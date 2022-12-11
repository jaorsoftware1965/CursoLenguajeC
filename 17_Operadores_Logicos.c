/* ---------------------------------------------------------------------
 Curso de C
 Clase 17
 Operadores Lógicos
 -----------------------------------------------------------------------

 Los operadores lógicos nos permiten realizar operaciones entre valores
 booleanos, es decir entre valores de false y true.
 
 Recordemos que en C el valor de false es igual a 0
 y el valor de true es 1 o cualquier otro valor distinto de 0.

 El lenguaje C tiene dos operadores lógicos binarios que son: el operador
 "and (Y)" (&&) y el operador "or(O)" (||); y un operador lógico unario que
 es el operador "Not(No)" !.

 Su sintaxis de uso es la siguiente:
 expresion1 || expresion2
 expresion1 && expresion2
 ! expresion

 TABLA DE VERDAD DEL OPERADOR AND
 --------------------------------------------
 Operando1  Operador    Operando2   Resultado
 --------------------------------------------
 true       &&          true        true
 true       &&          false       false
 false      &&          true        false
 false      &&          false       false

 El Operando AND devuelve true , cuando ambos operandos son true.
 El Operando AND devuelve false, cuando por lo menos uno es false.

 TABLA DE VERDAD DEL OPERADOR OR
  -------------------------------
 Operando1  Operando2   OR
 --------------------------------
 true       true        true
 true       false       true
 false      true        true
 false      false       false


 El Operando OR devuelve false, cuando ambos operandos son false.
 El Operando OR devuelve true, cuando al menos uno es true.


 TABLA DE VERDAD DEL OPERADOR NOT
  -------------------------------
 Operando   NOT
 --------------------------------
 true       false
 false      true

 El Operador NOT solo invierte el valor del Operando.

 En relación a la precedencia de estos operadores entre si, el operador
 NOT es el de mayor precedencia, seguido del operador AND y por
 último el operador OR.
 
 Ejemplo:
 !true   || false && true  = 
  false  || false          = false 

!true    || !false && true = 
 false   ||  true  && true =
 false   ||  true          = true

*/

// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 17 - Operadores Lógicos \n\n");

	printf("Tabla de Verdad del Operador AND \n");
	printf(" 1 && 1 = %d \n"  ,1 && 1);
	printf(" 1 && 0 = %d \n"  ,1 && 0);
	printf(" 0 && 1 = %d \n"  ,0 && 1);
	printf(" 0 && 0 = %d \n\n",0 && 0);

	printf("Tabla de Verdad del Operador OR \n");
	printf(" 1 || 1 = %d \n"  ,1 || 1);
	printf(" 1 || 0 = %d \n"  ,1 || 0);
	printf(" 0 || 1 = %d \n"  ,0 || 1);
	printf(" 0 || 0 = %d \n\n",0 || 0);

	printf("Tabla de Verdad del Operador NOT \n");
	printf(" ! 1 = %d \n"  , ! 1);
	printf(" ! 0 = %d \n\n", ! 0);

    printf("Precedencia del Not sobre And \n");
    printf("! 1 && 1 : %d\n",   ! 1 && 1 ); // 0 && 1 = 0
    printf("!(1 && 1): %d\n",   !(1 && 1));
    printf("! 0 && 1 : %d\n",   ! 0 && 1 );
    printf("!(0 && 1): %d\n",   !(0 && 1));
    printf("! 1 && 0 : %d\n",   ! 1 && 0 );
    printf("!(1 && 0): %d\n",   !(1 && 0));
    printf("! 0 && 0 : %d\n",   ! 0 && 0 );
    printf("!(0 && 0): %d\n\n", !(0 && 0));

    printf("Precedencia del Not sobre Or \n");
    printf("! 1 || 1 : %d\n",   ! 1 || 1 );
    printf("!(1 || 1): %d\n",   !(1 || 1));
    printf("! 0 || 1 : %d\n",   ! 0 || 1 );
    printf("!(0 || 1): %d\n",   !(0 || 1));
    printf("! 1 || 0 : %d\n",   ! 1 || 0 );
    printf("!(1 || 0): %d\n",   !(1 || 0));
    printf("! 0 || 0 : %d\n",   ! 0 || 0 );
    printf("!(0 || 0): %d\n\n", !(0 || 0));

    printf("Precedencia del And sobre el Or \n");
	printf(" 1 || 1  && 1  :%d\n"   ,  1 || 1  && 1);
	printf("(1 || 1) && 1  :%d\n"   , (1 || 1) && 1);
    printf(" 1 || 1  && 0  :%d\n"   ,  1 || 1  && 0);
    printf("(1 || 1) && 0  :%d\n"   , (1 || 1) && 0);
    printf(" 1 || 0  && 1  :%d\n"   ,  1 || 0  && 1);
    printf("(1 || 0) && 1  :%d\n"   , (1 || 0) && 1);
    printf(" 1 || 0  && 0  :%d\n"   ,  1 || 0  && 0);
    printf("(1 || 0) && 0  :%d\n\n" , (1 || 0) && 0);

	// Valor de Retorno
	return 0;
}



