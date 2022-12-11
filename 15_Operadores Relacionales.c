/* ---------------------------------------------------------------------
 Curso de C
 Clase 15
 Operadores Relacionales
 -----------------------------------------------------------------------

 Los Operadores Relacionales son aquellos que nos permiten comparar
 valores; es decir; cual es la RELACIÓN de uno con otro; con respecto
 a su valor. Estos operadores son los ya conocidos en las Matemáticas
 comunes y que son:

 OPERADOR    RELACIÓN          EJEMPLO
 ==          Igual             Total = 100
 !=          Distinto          14 != 10
 <           Menor que         Ventas <  2350
 <=          Menor-igual que   Ventas <= 23450
 >           Mayor             Impuestos > 12000
 >=          Mayor-igual que   Impuestos >= 12000

 Podemos distinguir que para verificar la relación de igualdad, se
 utiliza "==" y para Distinto o Diferente "!=".

 Todos los operadores relacionales son operadores binarios (tienen dos
 operandos), y su forma general es la siguiente:

 expresion1 op expresion2

 donde op es uno de los operadores (==, <, >, <=, >=, !=).

 El funcionamiento de estos operadores es el siguiente: se evalúan
 expresion1 y expresion2, y se comparan los valores.

 Si la condición representada por el operador relacional se cumple,
 el resultado es 1; si la condición no se cumple, el resultado es 0.

 En el lenguaje natural, existen varias palabras o formas de indicar si
 se cumple o no una determinada condición. En inglés estas formas son
 (yes, no), (on, off), (true, false), etc. En Informática se ha hecho
 bastante general el utilizar la última de las formas citadas: (true,
 false). Si una condición se cumple, el resultado es true; en caso
 contrario, el resultado es false.

 En C un 0 representa la condición de false, y cualquier número distinto
 de 0 equivale a la condición true. Cuando el resultado de una expresión
 es true y hay que asignar un valor concreto distinto de cero, por defecto
 se toma un valor unidad.

*/

// Se incluye la librería
#include <stdio.h>
#include <stdbool.h>

// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int   iEdadMaria = 15;
	int   iEdadJuan  = 20;
	int   iEdadSonia = 16;
	int   iEdadJose  = 25;
	int   iEdadJesus = 34;
	int   iResult;
	bool  bandera;
	char  sNombre1[30]={"Ana"};
	char  sNombre2[30]={"Jose"};

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 15 - Operadores Relacionales \n\n");

    bandera = sNombre1 > sNombre2;
	if (bandera)
	{
        printf("Si fue mayor el Nombre de María \n");
	}
	else
	{
		printf("No fue mayor el Nombre de María \n");
	}
	
    
    printf(" Edades   \n");
    printf(" Maria  :%d \n",iEdadMaria);
    printf(" Juan   :%d \n",iEdadJuan);
    printf(" Sonia  :%d \n",iEdadSonia);
    printf(" Jose   :%d \n",iEdadJose);
    printf(" Jesus  :%d \n\n",iEdadJesus);

	// Probando Suma
	bandera = iEdadMaria > iEdadJuan;
	printf(" María es Mayor       que Juan  : %d %d \n",iEdadMaria > iEdadJuan, bandera);
	printf(" María es Menor       que Sonia : %d \n",iEdadMaria <  iEdadSonia);
	printf(" María es Igual       que Juan  : %d \n",iEdadMaria == iEdadJuan);
	printf(" María es Diferente   que Jesus : %d \n",iEdadMaria != iEdadJesus);
	printf(" José  es Mayor-Igual que María : %d \n",iEdadJose  >= iEdadMaria);
	printf(" José  es Menor-Igual que Sonia : %d \n",iEdadJose  <= iEdadSonia);
	printf(" José  es Menor-Igual que Jesus : %d \n",iEdadJose  <= iEdadJesus);
	printf(" José  es Mayor-Igual que Juan  : %d \n",iEdadJose  >= iEdadJuan);

	// Valor de Retorno
	return 0;
}

