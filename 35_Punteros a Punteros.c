/* ---------------------------------------------------------------------
 Curso de Lenguaje C con GNU GCC
 Autor: JAOR
 Derechos Reservados: JAORSOFTWARE
 www.jaorsoftware.com
 Clase 35 -  Punteros a Punteros
 -----------------------------------------------------------------------

 Hemos visto en clase anteriores como declarar punteros a los tipos de
 datos de c, como int, char, y demás. También es posible declarar punteros
 que apunten a punteros.

 Para declarar un puntero que apunte a otro puntero; se utilizan 2 "*'s"
 al momento de la declaración. Ejemplo:

 // Declaro una variable entera
 int iEdad = 40;

 // Declaro un apuntador a integer
 int *piEdad = &iEdad;

 // Declaro un apuntador a un apuntador
 int **ppiEdad = &piEdad;

 Si observamos, en la declaración del apuntador a apuntador; hemos asignado
 la dirección de piEdad; la cual es un apuntador.

 Ahora ya tenemos 3 accesos al mismo valor de iEdad: la variable
 entera, un apuntador y un apuntador de apuntador; por lo cual podemos
 modificar el valor de iEdad de la siguiente forma:

 iEdad     = 34;
 *piEdad   = 50;
 **ppiEdad = 18;

 Y siguiendo la anterior lógica, podemos declarar apuntadores, de apuntadores
 de apuntadores. Ejemplo:

 int ***pppiEdad = &ppiEdad;

 Ahora ya tenemos una opción mas para modificar iEdad:
 ***pppiEdad=56;

*/

// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 34 - Punteros y Arreglos \n\n");


    // Declaro una variable entera
    int iEdad = 41110;

    // Declaro un apuntador a integer
    int *piEdad = &iEdad;

    // Declaro un apuntador a un apuntador
    int **ppiEdad = &piEdad;

    // Declaro un apuntador a un apuntador a un apuntador
    int ***pppiEdad = &ppiEdad;

    char espera[10];
    printf("Dirección de iEdad      :%d\n",iEdad);
    printf("Dirección de iEdad      :%p\n",iEdad);
    printf("Dirección de piEdad     :%p\n",&iEdad);
    printf("Dirección de piEdad     :%p\n",*(int*)iEdad+1);
    printf("Dirección de piEdad     :%d\n",*(int*)iEdad+1);
    printf("Dirección de piEdad     :%d\n",iEdad+1);
    gets(espera);
    
    

    // Desplegamos las direcciones de cada variable
    printf("Las Direcciones de cada variable\n");
    printf("Dirección de iEdad      :%p\n",&iEdad);
    printf("Dirección de piEdad     :%p\n",&piEdad);
    printf("Dirección de ppiEdad    :%p\n",&ppiEdad);
    printf("Dirección de pppiEdad   :%p\n",&pppiEdad);

    // Dejamos una Línea
    printf("\n");

    printf("Desplegamos el Valor de iEdad desde todas la Variables\n");
    printf("El valor de iEdad desde iEdad     :%d\n",iEdad);
    printf("El valor de iEdad desde piEdad    :%d\n",*piEdad);
    printf("El valor de iEdad desde ppiEdad   :%d\n",**ppiEdad);
    printf("El valor de iEdad desde pppiEdad  :%d\n",***pppiEdad);

    // Dejamos una Línea
    printf("\n");

    printf("La dirección de iEdad desde todas la Variables\n");
    printf("Dirección de iEdad desde iEdad     :%p\n",&iEdad);
    printf("Dirección de iEdad desde piEdad    :%p\n",piEdad);
    printf("Dirección de iEdad desde ppiEdad   :%p\n",*ppiEdad);
    printf("Dirección de iEdad desde pppiEdad  :%p\n",**pppiEdad);

    // Dejamos una Línea
    printf("\n");

    printf("La dirección de piEdad desde las Variables Puntero\n");
    printf("Dirección de piEdad desde piEdad     :%p\n",&piEdad);
    printf("Dirección de piEdad desde ppiEdad    :%p\n",ppiEdad);
    printf("Dirección de piEdad desde pppiEdad   :%p\n",*pppiEdad);

    // Dejamos una Línea
    printf("\n");

    printf("La dirección de ppiEdad desde las Variables Puntero\n");
    printf("Dirección de ppiEdad desde ppiEdad  :%p\n",&ppiEdad);
    printf("Dirección de ppiEdad desde pppiEdad :%p\n",pppiEdad);

    // Dejamos una Línea
    printf("\n");

    // Modificamos el Valor de iEdad desde piEdad
    *piEdad = 33;

    printf("El Valor de iEdad Modificado desde piEdad, desde todas la Variables\n");
    printf("El valor de iEdad desde iEdad     :%d\n",iEdad);
    printf("El valor de iEdad desde piEdad    :%d\n",*piEdad);
    printf("El valor de iEdad desde ppiEdad   :%d\n",**ppiEdad);
    printf("El valor de iEdad desde pppiEdad  :%d\n",***pppiEdad);

    // Dejamos una Línea
    printf("\n");

    // Modificamos el Valor de iEdad desde ppiEdad
    **ppiEdad = 11;

    printf("El Valor de iEdad Modificado desde ppiEdad, desde todas la Variables\n");
    printf("El valor de iEdad desde iEdad     :%d\n",iEdad);
    printf("El valor de iEdad desde piEdad    :%d\n",*piEdad);
    printf("El valor de iEdad desde ppiEdad   :%d\n",**ppiEdad);
    printf("El valor de iEdad desde pppiEdad  :%d\n",***pppiEdad);

    // Dejamos una Línea
    printf("\n");

    // Modificamos el Valor de iEdad desde pppiEdad
    ***pppiEdad = 44;

    printf("El Valor de iEdad Modificado desde pppiEdad, desde todas la Variables\n");
    printf("El valor de iEdad desde iEdad     :%d\n",iEdad);
    printf("El valor de iEdad desde piEdad    :%d\n",*piEdad);
    printf("El valor de iEdad desde ppiEdad   :%d\n",**ppiEdad);
    printf("El v1alor de iEdad desde pppiEdad  :%d\n",***pppiEdad);

    // Dejamos una Línea
    printf("\n");

     // Finaliza la aplicación retornando 0
    return 0;

}
