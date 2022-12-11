/* ---------------------------------------------------------------------
 Curso de C
 Clase 07
 Arreglos
 -----------------------------------------------------------------------
 Un arreglo es un conjunto de espacios de memoria a los cuales se les
 asigna un nombre, y a través de un índice se puede acceder a cada uno
 de estos espacios. Los espacios de memoria serán de mismo tipo, el cual
 se asigna al definirlo. 
 La sintaxis para definir un arreglo es la siguiente:

 tipo nombre[tamaño];

 En donde:
 tipo. Es el tipo de dato que manejarán cada uno de les espacios de memoria
 nombre. Es el nombre del arreglo
 tamaño. Es el número de elementos que tendrá el arreglo.

 Ejemplo:
 int intEdades[10];
 
 La anterior instrucción declara el arreglo intEdades, el cual se define de
 10 espacios de memoria de tipo integer.

 Para referenciar a cada uno de los espacios de memoria, se utiliza el
 nombre del arreglo, y un número el cual indica la posición del elemento
 que queremos referenciar. 
 El primer elemento se referencía con el número 0
 y así en forma consecutiva hasta el último elemento. 
 En el caso del arreglo del ejemplo, el último elemento ocupa 
 la posición 9.

 Ejemplo:
 // Depositando Valores en el Arreglo
 intEdades[0]=20;
 intEdades[1]=34;
 ...
 intEdades[9]=30;

 // Obteniendo valores del Arreglo
 x = intEdades[0];
 x = intEdades[1];
 ...
 x = intEdades[9];

 Podemos inicializar un Arreglo al momento de definirlo, de la siguiente
 forma:
 int  intEdades[] = { 10, 20, 30, 34, 12, 34, 56, 89};

*/

// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{

    // Arreglo de Edades y de Estatura
    int   intEdades [] = { 34, 33, 24, 56, 78};
    float fltEstaturas[5];

    // Asigno los Valores de Estatura
    fltEstaturas[0] = 1.82;
    fltEstaturas[1] = 1.52;
    fltEstaturas[2] = 1.67;
    fltEstaturas[3] = 1.80;
    fltEstaturas[4] = 1.78;
    intEdades[15]   = 45;


	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 07 - Arreglos \n\n");

    printf("Las Edades:\n");
    printf("Edad 0:%d \n"  , intEdades[0]);
    printf("Edad 1:%d \n"  , intEdades[1]);
    printf("Edad 2:%d \n"  , intEdades[2]);
    printf("Edad 3:%d \n"  , intEdades[3]);
    printf("Edad 4:%d \n\n", intEdades[4]);
    printf("Edad 5:%d \n\n", intEdades[15]);
    printf("Edad 5:%d \n\n", intEdades[16]);

    printf("Las Estaturas:\n");
    printf("Estatura 0:%f\n", fltEstaturas[0]);
    printf("Estatura 1:%f\n", fltEstaturas[1]);
    printf("Estatura 2:%f\n", fltEstaturas[2]);
    printf("Estatura 3:%f\n", fltEstaturas[3]);
    printf("Estatura 4:%f\n\n", fltEstaturas[4]);

	// Valor de Retorno
	return 0;
}
