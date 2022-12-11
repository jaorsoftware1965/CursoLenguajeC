/* ---------------------------------------------------------------------
 Curso de Lenguaje C con GNU GCC
 Autor: JAOR
 Derechos Reservados: JAORSOFTWARE
 www.jaorsoftware.com
 Clase 38 -  Estructuras III
 -----------------------------------------------------------------------

 En esta clase veremos como es posible realizar asignaciones entre
 variables de estructuras; además de ver el uso de los Apuntadores a
 Estructuras.

 Para asignar una variable de una estructura; a otra variable de la
 misma estructura; se realiza de igual forma que como con cualquier otro
 tipo de dato. Si tuvieramos:

 struct PERSONA Persona1, Persona2;

 Es posible asignar de la siguiente forma:
 Persona1 = Persona2;

 Todos los elementos de la variable estructura Persona2; serán pasados
 a la variable estructura Persona1.

 En la Clase de Apuntadores, vimos como definir apuntadores a los tipos
 de datos base de C. Tambien es posible definir apuntadores a estructuras
 de la siguiente forma:

 struct PERSONA *pPersona.

 La anterior sentencia define un apuntador a una variable que sea del tipo
 de struct PERSONA.

 Para acceder a los valores de los elementos de la estructura a través del
 apuntador; lo podemos hacer de 2 formas:

 - Con el uso del operador "->". Ejemplo
    pPersona->iEdad=14;

 - Con el uso del operador "*". Ejemplo
   (*pPersona).iEdad=14;

 Es necesario utilizar el Paréntesis, debido a que el Operador "." tiene
 mayor prioridad que el operador "*".

*/

// Se incluye la librería
#include "stdio.h"

#define CR printf("\n")

// Estructura para Control Pantalla
struct PANTALLA
{
   int iColumna;
   int iRenglon;
};

// La función principal con la cual se inicia el programa
int main()
{
   char espera[10];
	 // Mandamos un mensaje a la Pantalla
	 printf("Curso de C \n");
	 printf("Clase 38 - Estructuras \n\n");

    // Definimos 2 variables de Estructura Pantalla
    struct PANTALLA Pantalla1, Pantalla2;
    Pantalla1.iColumna=23;
    Pantalla1.iRenglon=12;

    // Asignamos de Pantalla a Pantalla
    Pantalla2 = Pantalla1;

    // Imprimiendo los valores de la Pantalla 2
    printf("Los Valores de Pantalla 2 \n");
    printf("Pantalla2.iColumna:%d \n",Pantalla2.iColumna);
    printf("Pantalla2.iRenglon:%d \n",Pantalla2.iRenglon);
    gets(espera);

    CR;

    // Apuntador a Estructura
    int x=10;
    int             *pInt      =  &x;
    struct PANTALLA *pPantalla =  &Pantalla2;
    struct PANTALLA *pPantalla2 = &Pantalla2;

       
    // Imprimiendo los valores de la Pantalla 2 desde el Apuntador
    printf("Los Valores de Pantalla 2 desde el Apuntador \n");
    printf("pPantalla.iColumna:%d \n",pPantalla->iColumna);  // Forma Nueva
    printf("pPantalla.iRenglon:%d \n",(*pPantalla).iRenglon);// Forma Normal 
    gets(espera);
    CR;

    // Modificamos los Valores desde el Apuntador
    (*pPantalla).iColumna=5;
    pPantalla->iRenglon=12;

    // Imprimiendo los valores de la Pantalla 2
    printf("Los Valores de Pantalla 2 \n");
    printf("Pantalla2.iColumna:%d \n",Pantalla2.iColumna);
    printf("Pantalla2.iRenglon:%d \n",Pantalla2.iRenglon);
    gets(espera);
    CR;

     // Finaliza la aplicación retornando 0
    return 0;

}
