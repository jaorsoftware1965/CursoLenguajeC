/* 
---------------------------------------------------------------------
 Curso de C
 Clase 18
 Operadores de Bits
 -----------------------------------------------------------------------

 Los Operadores de Bits son los que nos permiten realizar operaciones con
 valores a nivel bit; es decir; relizar operaciones con un número haciendo
 referencia a su representación en sistema binario.

 A continuación se presenta la tabla de operadores a nivel bit

 ------------------------------------------------------------
 Operador   Nombre                          Operación
 ------------------------------------------------------------
 ~          Not                             Complemento a UNO
 <<         Desplazamiento a la izquierda   Desplazamiento a la izquierda
 >>         Desplazamiento a la derecha     Desplazamiento a la derecha
 &          AND                             And
 ^          XOR                             Or Exclusivo (XOR)
 |          OR                              Or

   
 Todos los operadores son binarios; es decir que necesitan 2
 operandos para funcionar; excepto el operador NOT que es unario

 Ejemplos:

 Operador       Operando1           Operando2           Resultado
 ~              0xB2=1011 0010                          0x4D=0100 1101
 <<             0x10=0001 0000      3                   0x80=1000 0000
 16 << 3 = 128
 
 >>             0x10=0001 0000      2                   0x04=0000 0100
 16 >> 2 = 4
                0xB2=1011 0010                          0x2c=0010 1100
				                                             0010 1100
 178 >> 2 = 44               				

 
 &              0xB2=1011 0010      0x79=0111 1001      0x30=0011 0000
                     0111 1001
                     ---------
                     0011 0000

 ^              0xB2=1011 0010      0x79=0111 1001      0xCB=1100 1011
                     0111 1001
                     ---------
                     1100 1011

 |              0xB2=1011 0010      0x79=0111 1001      0xFB=1111 1011
                     0111 1001
                     ---------
                     1111 1011

  9    1
  1    1
 
  0010
  1101
     1
------
  1110 	 

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
	printf("Clase 18 - Operadores de Bits Precedencia \n\n");
	printf("Evaluando los Ejemplos \n");

	iResult=~0xB2;
	printf("~0xB2      : %X \n",iResult);

	iResult=~0x01;
	printf("~0x01      : %X \n",iResult);

	iResult=~0xFFFFFFFE;
	printf("~0xFFFFFFFE: %X \n",iResult);

    iResult= 0x10<<3;
	printf(" 0x10<<3   : %X \n",iResult);

    iResult= 0xB2>>2;
	printf(" 0xB2>>2   : %X \n",iResult);

	iResult= 0xB2&0x79;
	printf(" 0xB2&0x79 : %X \n",iResult);

	iResult= 0xB2^0x79;
	printf(" 0xB2^0x79 : %X \n",iResult);

	iResult= 0xB2|0x79;
	printf(" 0xB2|0x79 : %X \n",iResult);

	// Valor de Retorno
	return 0;
}




