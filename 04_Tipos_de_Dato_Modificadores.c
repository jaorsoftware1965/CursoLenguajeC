/*---------------------------------------------------------------------
 Curso de C
 Clase 04
 Los Tipos de Datos y Modificadores
 ---------------------------------------------------------------------

 En la clase anterior vimos que para definir una variable, tenemos que
 indicar su tipo de dato. Los tipos de datos en C son:

 TIPO DE DATO		DESCRIPCION					Ejemplo
 char				Caracter o Entero Pequeno   'X',76
 int				Entero						200
 float 			    Punto Flotante				45.60
 double			    Punto Flotante Mayor Rango  2345.99


 Hay una palabra reservada llamada void, que suele indicarse como tipo
 de dato; pero void se entiende como "sin tipo" y entonces pues no es
 correcto llamarle un tipo de dato.

 Existen palabras reservadas en C llamadas MODIFICADORES, que permiten
 modificar a los tipos de datos de acuerdo a su rango y que son las
 siguientes:
 

 Modificador 	Se aplican 	Descripción
 signed 		char,int	Con Signo
 unsiged		char,int	Sin Signo
 short		    int			Corto
 long			int,double	Largo

 Ejemplos:
 unsigned char    xLetra;
 long     double  udToneladas;
 short    int     iEdad;

 Es posible, aplicar dos modificadores seguidos a un mismo tipo de
 dato. Ejemplo:
 unsigned long int iTest; //(entero largo sin signo).

 El rango de valores que permite cada variable depende del sistema
 operativo sobre el cual se trabaje (MS-DOS, Windows95/98/NT/2000,UNIX
 /Linux), por lo cual conviene referirse al manual del compilador para
 conocerlo.

 De forma general, los sistemas operativos de 16 bits (MS-DOS, Windows
 16 bits) poseen un rango y los de 32 bits (Windows 32, UNIX/Linux)
 otro. Acá mostramos la tabla de los Rangos

 TIPO DE VARIABLE				RANGO EN 32 BITS		    RANGO EN 64 BITS
 char / signed char			    [-128,127]					[-128,127]
 unsigned char				    [0 , 255]					[0 , 255]
 int / signed int				[-32768 , 32767]			[-2147483647 , 2147483648]
 unsigned int					[0 , 65535]					[0 , 4294967295]
 short int / signed short int	[-32768 , 32767]			[-32768 , 32767]
 unsigned short int			    [0 , 65535]					[0 , 65535]
 long int / signed long int 	[-2147483647,2147483648]	[-2147483647 , 2147483648]
 unsigned long int			    [0 , 4294967295]			[0 , 4294967295]
 float						    [-3.4E+38 , -3.4E-38],0,	[-3.4E+38 , -3.4E-38], 0 ,
								[3.4E-38 , 3.4E+38]			[3.4E-38 , 3.4E+38]
 double						    [-1.7E+308 ,-1.7E-308],0,	[-1.7E+308 , -1.7E-308], 0 ,
								[1.7E-308 , 1.7E+308]		[1.7E-308 , 1.7E+308]
 long double					[-3.4E+4932,-1.1E-4932],0, 	[-3.4E-4932 , -1.1E+4932], 0 ,
								[3.4E-4932 , 1.1E+4932]		[3.4E-4932 , 1.1E+4932]

*/

// Incluimos la libreria
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Ejemplos de Declaracion de datos
	char          xChar=-1;
	unsigned char yChar=-1;

	int           xInt = 32968;
	unsigned int  yInt = -1;
	short         zInt = 32767;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 04 - Los Tipos de Datos y Modificadores \n\n");

	printf("El Valor de xChar como char    : %c \n",xChar);
	printf("El Valor de xChar como integer : %d \n\n",xChar);

	printf("El Valor de yChar como char    : %c \n",yChar);
	printf("El Valor de yChar como integer  : %d \n\n",yChar);

	printf("El Valor de xInt: %d \n",xInt);
	printf("El Valor de yInt: %d \n",yInt);
	printf("El Valor de yInt: %u \n",yInt);
	printf("El Valor de zInt: %d \n\n",zInt);

	// Valor de Retorno
	return 0;
}