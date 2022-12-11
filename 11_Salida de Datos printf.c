/* ---------------------------------------------------------------------
 Curso de C
 Clase 11
 Salida de Datos con printf
 -----------------------------------------------------------------------

 La función printf() se usa para escribir cualquier tipo de dato a la pantalla. Su
 formato es:

 int printf(const char *formato[,argumento,...]);

 El valor devuelto por la función es el número de caracteres impresos.
 La cadena apuntada por formato consta de dos tipos de elementos. 
 El primer tipo esta constituido por los caracteres que se mostraran en
 pantalla. 
 El segundo tipo contiene las ordenes de formato que describen la forma 
 en que se muestran los argumentos. 
 Las ordenes de formato están precedidas por el signo % y le sigue el
 código de formato. Por cada orden de formato, debe tener un argumento.
 
 Estas ordenes de formato son:

-----------------------------------------------------------------------------------------------------------------
Letter	Type of Matching Argument	                Example	                                    Salida
-----------------------------------------------------------------------------------------------------------------
%	    none ( See note) 	                        printf( "%%" );	                            %
d, i	int ( See note) 	                        printf( "%i", 17 );	                        17
u	    unsigned int (Converts to decimal) 	        printf( "%u", 17 );	                        17
o	    unsigned int (Converts to octal) 	        printf( "%o", 17 );	                        21
x	    unsigned int (Converts to lower-case hex) 	printf( "%x", 26 );	                        1a
X	    unsigned int (Converts to upper-case hex) 	printf( "%X", 26 );	                        1A
f, F	double                                      printf( "%f", 3.14 );	                    3.140000
e, E	double                                      printf( "%e", 31.4 );	                    3.140000e+01
g, G	double                                      printf( "%g, %g", 3.14, 0.0000314 );	    3.14, 3.14e-05
a, A	double                                      printf( "%a", 31.0 );	                    0x1.fp+0
c	    int                                      	printf( "%c", 65 );	                        A
s	    string                                      printf( "%s", "Hello" );	                Hello
p	    void*                                       int a = 1; printf( "%p", &a );	            0064FE00


Especificadores de formato:
%[flags][ancho][.precision][F/N/L/h/l]tipo

flags.Son símbolos que se utilizan para dar un formato de salida a los argumentos. 
Pueden aparecer en cualquier orden y son los siguientes:

--------------------------------------------------------------------------------------------------------------
flag    Descripción                                 Ejemplo                                     Salida
--------------------------------------------------------------------------------------------------------------
-      Justifica a la izquierda la salida           printf( "|%3i|%-3i|", 12, 12);	            |·12|12·|
+      Incluyen + en valores positivos              printf( "%+i", 17);	                        +17
space  Incluyen espacios en valores positivos       printf( "|% i|", 12);	                    |·12|
#      Para "%#o" (octal), incluye ceros.
       Para "%#x" (hex)  , incluye '0x'.            printf( "%#X", 26);	                        0X1A
0      Llena con 0 la salida.                       printf( "|%04i|", 12);	                    |0012|

ancho. Indica el número mínimo de caracteres que se utilizarán en el despliegue.
       Si la salida tiene menos caracteres de los indicados, llenará de espacios
       hasta llegar a el ancho; o de acuerdo a la bandera indicada.

       Ejemplo:                     Salida
       printf( "|%5s|", "ABC");     |··ABC|

precisión. Indica el número de digitos en la parte decimal utilizados para desplegar
           la Salida. La precisión por default es 6.

           Ejemplo                      Salida
           printf( "|%5.2f|", 3.147 );  |·3.15|

           Cuando la precisión es usada en valores enteros, especifica el mínimo
           número de dígitos a aparecer; se añaden 0's si es necesario.

           Ejemplo                      Salida
           printf( "|%6.4i|", 17 );     |··0017|

           Cuando se utiliza en cadenas, se utiliza para indicar el número de caracteres
           que se desplegarán. Si la cadena es mas larga, se truncará.

           Ejemplo                          Salida
           printf( "|%-5.3s|", "ABCD" );    |ABC··|

Modificadores de Longitud.(F/N/L/h/l)
Tal y como lo indica su nombre, se utilizan para modificar la longitud del argumento al
momento de realizar la salida de la información. Son raramente utilizados para los tipos
int o double; sin embargo para los demás tipos, como long; si es común utilizarlos. Deben
de ser utilizados adecuadamente; ya que el uso de alguna combinación no establecida,
puede producir funcionamientos impredecibles.

A continuación la tabla de Modificadores de longitud.

----------------------------------------------------------------------------------------------
Modificador     Descripción                                     Ejemplo                 Salida
----------------------------------------------------------------------------------------------
h               Utilizado para conversiones enteras(d,i,o,u     printf( "%hi", 300 );   300
                x,X) para indicar que el argumento tendrá una
                salida short o unsigned short

l               Lo mismo que h solo que en este caso se indica  printf( "%li", 300 );   300
                que la salida es un long o unsigned long

L               Utilizado para conversiones de Punto Flotante   printf( "%Lf", 3.14L ); 3.140000
                (argumentos: a, A, e, E, f, F, g, y G),
                especifica una salida a long double.

*/

// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{
    // Declaración de Variables
    char   strCadena[80]="TEST",iPos;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 11 - Cadenas \n\n");
    printf("Ejemplos de Argumentos:\n");
    printf("-----------------------\n");
	printf( "1)%%\n" );
    printf( "2)%i\n", -17 );
    printf( "3)%u\n", -17 );
    printf( "4)%o\n", 17 );
    printf( "5)%x\n", 26 );
    printf( "6)%X\n", 26 );
    printf( "7)%f\n", 3.14 );
    printf( "8)%e\n", 3.14 );
    int iDatos = printf( "9)%g, %g\n", 3.14, 0.0000314 );

    printf("Caracteres Impresos:%d\n",iDatos);
    printf( "A)%a\n", 31);
    printf( "B)%c : %d\n", 65,65 );
    printf( "C)%s\n", "Hello" );
    int a = 1;
    printf( "%p\n", &a );

    printf("\n");
    printf("-----------------------\n");
    printf("Ejemplos de Flags:\n");
    printf("-----------------------\n");
    printf( "1) |%5i|%-9i|\n", 2312, 12312);
    printf( "2) |%+5i|\n", -17);
    printf( "3) |%+5i|\n", 17);
    printf( "4) |% i|\n", 12);
    printf( "5) |% 10i|\n", 12);
    printf( "6) |%#X|\n", 26);
    printf( "7) |%#o|\n", 26);
    printf( "8) |%04i|\n", 12);
    printf( "9) |%0i|\n", 12);

    printf("\n");
    printf("-----------------------\n");
    printf("Ejemplos de Ancho:\n");
    printf("-----------------------\n");
    printf( "1) |%-7s|\n", "ABC");
    printf( "2) |%10s|\n", "ABC");
    printf( "3) |%-10s|\n", "ABC");

    printf("\n");
    printf("-----------------------\n");
    printf("Ejemplos de Precisión: \n");
    printf("-----------------------\n");
    printf( "1) |%05.2f|\n", 3.147 );
    printf( "2) |%07.3f|\n", 3.147 );
    printf( "3) |%6.4i|\n", 17 );
    printf( "4) |%6.5i|\n", 17 );
    printf( "5) |%5.3s|\n", "ABCD" );
    printf( "6) |%6.5s|\n", "ABCD" );

    printf("\n");
    printf("-----------------------\n");
    printf("Ejemplos de Longitud: \n");
    printf("-----------------------\n");
    
    // --------Alta------- ------Baja --------
    // 0000 0010 0000 1101 0111 0001 0001 0000 
    // 0000                0111 0001 0001 0000


    long b = 262145;
    printf( "%hi\n", b );
    printf( "%li\n", b );

    short int f = 7;
    printf( "--->%hi\n", f );
    printf( "--->%li\n", f );


    long double pi  = 3.14;
    float       pi2 = 3.14;

    printf( "%Lf:%Lf:%f\n", pi,pi2,pi2);
    printf("Este \n");
    printf( "%f\n",pi2);

    

    // Valor de Retorno
	return 0;
}

