/*
Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.com
www.jaorsoftware.cu.cc

Clase 46 - Funciones Varias

abs
#include <stdlib.h>
int abs(int num);
La función abs() devuelve el valor absoluto del entero dado por num.


labs
#include <stdlib.h>
long labs(long num);
La función labs() devuelve el valor absoluto de num.


atof
#include <stdlib.h>
double atof(const char *cad);
La función atof() convierte la cadena apuntada por cad en un valor de tipo
double. La cadena debe contener un número valido en coma flotante. En caso contrario
el valor devuelto es indefinido.

El número puede terminar por cualquier carácter que no pueda formar parte de
un número válido en coma flotante. Esto incluye espacios en blanco, signos de
puntuación distintos del punto, y caracteres que no sean E o e. Así si se llama a atof()
con la cadena "100.00HOLA", devolverá el valor 100.00.


atoi
#include <stdlib.h>
int atoi(const char *cad);
La función atoi() convierte la cadena apuntada por cad en un valor de tipo int.
La cadena debe contener un número entero valido. Si no es este el caso, el valor
devuelto es indefinido, aunque, la mayoría de implementaciones de la función
devuelven el valor cero.

El número puede acabar con cualquier carácter que no pueda formar parte de un
número entero. Esto incluye espacios en blanco, signos de puntuación, y cualquier
carácter que no sea la E o la e. Esto supone que si se llama a atoi() con la cadena
"123.23", devolverá el valor 123.


atol
#include <stdlib.h>
long int atol(const char *cad);
La función atol() convierte la cadena apuntada por cad en un valor de tipo long
int. Para más información consultar la función atoi().

exit
#include <stdlib.h>
void exit(int estado);
La función exit() da lugar inmediatamente a la terminación normal de un
programa. El valor de estado se pasa al proceso que llamo a este programa,
normalmente el sistema operativo, si el entorno lo soporta. Por convenio, si el valor de
estado es cero, se supone que se ha producido una terminación normal del programa.
Un valor distinto de cero puede utilizarse para indicar un error definido por la
implementación.


system
#include <stdlib.h>
int system(const char *cad);
La función system() pasa la cadena apuntada por cad como una orden al
procesador de ordenes del sistema operativo. Si se llama a system() con un puntero
nulo (NULL), devuelve un valor distinto de cero si está presente un procesador de
ordenes, en otro caso, se devuelve un valor distinto de cero. Si cad no es un puntero
nulo (NULL), system() devuelve el valor cero si la orden ha sido correctamente
ejecutada, y un valor distinto de cero en caso contrario.

*/


// Definimos el cambio de Línea
#define CR printf("\n")

#include "stdio.h"
#include "stdlib.h"

#define kmax(a,b) (((a) > (b)) ? (a) : (b))
#define kmin(a,b) (((a) < (b)) ? (a) : (b))


// Función Principal
int main()
{

    // Definimos algunas variables
    int   xInt     = -10;
    long  xlInt    = -2147483647;
    char  sFloat[] = "3.1416Hola";
    float xFloat   = 0;

    printf("%d\n",kmax(10,3));
    printf("%d\n",kmin(10,3));

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 46 - Funciones Varias \n\n");
    CR;


    // Evaluando abs
    printf("Evaluando abs %d:\n",abs(xInt));
    CR;

    // Evaluando labs
    printf("Evaluando labs %li:\n",labs(xlInt));
    CR;

    // Evaluando atoi
    printf("Evaluando atoi 14965e2:");
    xInt = atoi("14965e2");
    printf("%d \n",atoi("14965e2"));
    CR;

    // Evaluando atol
    printf("Evaluando atol -114965:");
    xlInt =atol("-114965");
    printf("%d \n",atol("-114965"));
    CR;

    // Evaluando atof
    printf("Evaluando atof(3.1416e-2e4):",sFloat);
    xFloat = atof("3.1416e-2e4");
    printf("%f \n",xFloat);
    CR;

    // Evaluando atof
    printf("Evaluando atof(%s):",sFloat);
    xFloat = atof(sFloat);
    printf("%f \n",xFloat);
    CR;


    // Ejecutando instrucción desde la Terminal
    printf("Ejecutando dir\n");

    int xResult=0;

    xResult=system("directorio");
    printf("Result:%d\n",xResult);
    CR;

    // Saliendo con Exit
    printf("Saliendo con exit \n");
    exit (5);

    // Finaliza retornando 0
    return 0;
}
