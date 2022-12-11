/* ---------------------------------------------------------------------
 Curso de C
 03_Variables TiposDato.c
 Declaración de Variables y Tipos de Datos
 ---------------------------------------------------------------------

 Una variable es un espacio de memoria en donde se almacena
 información. A la variable se le asigna un Identificador y se le
 especifica un tipo de dato, para saber que tipo de información
 se va a almacenar.

 La sintaxis para definir una variable es la siguiente:

 [clase] tipo identificador[,identificador...];
         int  iEdad;

 clase. puede ser cualquiera de los siguientes valores:
        auto, register, static o extern

 auto. Es el valor por default y se usa para indicar que una variable
       es local; es decir que solo existe en la función en la que se
       declaró.

 extern. Se utiliza para indicar que es una variable externa al
         programa actual, y que será definida en otro programa, el
         cual se anexara a este programa para formar uno solo.
         Son variables globales; es decir que pueden ser utilizadas
         en cualquier parte del programa

 register. Solo se utiliza para variables char o int; y se utiliza
           para indicar al compilador que si es posible, mantenga esta
           variable en un registro del CPU.

 static. Se utiliza para indicar que una variable conserve su valor
         cuando vuelva a llamarse a la función en la que fue definida.

 Los Tipos de Datos, definen el tipo de información que se va a
 almacenar en una Variable. Los Tipos de Datos en C son:
 CODIGO ASCII
 Byte
 00000000 
 Bit

 Enteros  : char, int, short, long, signed y unsigned.
 Flotantes: float, double y long double

 Tipos Declarados por el Usuario.
 Se utiliza la palabra reservada typedef con la siguiente sintaxis:

 typedef tipo_c  identificador[,identificador...];

 Ejemplos:

 typedef int  Entero;
 typedef char Letra;


 Ejemplos:
 int     iEdad;
 char    cLetra;
 float   fPrecio;
 Entero  Contador;
 Letra   Vocal;

*/

// Incluyo la librería
#include <stdio.h>

// Defino 3 tipos de datos
typedef int  Entero;
typedef char Letra;
typedef float Decimal;

// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int      iEdad   = 34;
	char     cLetra  = 'X';
	Entero   Contador;
	Letra    Vocal;
	Decimal  Precio;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 03 - Tipos de Datos y Declaracion de Variables \n\n");

	// Asignando valor a las variables
	Contador = 54;
	Vocal    = 'a';
	Precio   = 234.50;

	printf("Desplegando Variables\n");
	printf("Edad        : %d \n",iEdad);
	printf("Letra       : %c \n",cLetra);
	printf("Contador    : %d \n",Contador);
	printf("Vocal       : %c \n",Vocal);
	printf("Vocal       : %d \n",Vocal);
	printf("Precio      : %f \n",Precio);
                                               
	// Valor de Retorno
	return 0;
}
