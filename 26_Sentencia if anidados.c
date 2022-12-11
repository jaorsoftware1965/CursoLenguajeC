/* ---------------------------------------------------------------------
 Curso de C
 Clase 26
 Sentencias de Control de Flujo
 Sentencia if anidados
 -----------------------------------------------------------------------

 En esta clase continuaremos viendo el uso de la sentencia if; solo que
 ahora utilizaremos un concepto en programación llamado "anidar".
 Se dice que podemos usar "if's anidados" cuando podemos utilizar un if
 dentro de otro if. Es decir.

 Cuando evaluamos una condición de una sentencia if, dentro de las
 instrucciones que pueden haber dentro de las sentencias que se ejecuten
 si es que la condición es verdadera o falsa; puede haber mas declaraciones
 if.

*/
// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 26 - Sentencia if anidados \n\n");

    // Variable para la Edad
	char   xEdadJuan  = 28;
	char   xEdadJose  = 24;
	char   xEdadMaria = 16;

    // Mensaje del Programa
    printf("Evaluando la Sentencia if anidados\n");

    printf("Etapa de Estudio de Juan según su Edad \n");
    if (xEdadJuan < 3)
       printf("Maternal\n");

    if (xEdadJuan >=3 && xEdadJuan <=5)
       printf("Pre-Primaria\n");           

    if (xEdadJuan >=6 && xEdadJuan <=11)
       printf("Primaria\n");

    if (xEdadJuan >=12 && xEdadJuan <=14)
       printf("Secundaria\n");

    if (xEdadJuan >=15 && xEdadJuan <=17)
       printf("Bachillerato\n");

    if (xEdadJuan >=18 && xEdadJuan <=22)
       printf("Universidad\n");

    if (xEdadJuan >=23 && xEdadJuan <=24)
       printf("Maestría\n");

    if (xEdadJuan >=25 && xEdadJuan <=26)
       printf("Doctorado\n");

    if (xEdadJuan >=27 && xEdadJuan <=65)
       printf("En Producción\n");

    if (xEdadJuan >=66)
       printf("En Jubilación\n");
    printf("\n");

    
    printf("Etapa de Estudio de Juan según su Edad \n");
    if (xEdadJuan <3)
       printf("Maternal\n");
    else if (xEdadJuan <=5)
       printf("Pre-Primaria\n");
    else if (xEdadJuan <=11)
       printf("Primaria\n");
    else if (xEdadJuan <=14)
       printf("Secundaria\n");
    else if (xEdadJuan <=17)
       printf("Bachillerato\n");
    else if (xEdadJuan <=22)
       printf("Universidad\n");
    else if (xEdadJuan <=24)
       printf("Maestría\n");
    else if (xEdadJuan <=26)
       printf("Doctorado\n");
    else if (xEdadJuan <=65)
       printf("En Producción\n");
    else //if (xEdadJuan >=66)
       printf("En Jubilación\n");

    // Deja una linea
    printf("\n");

    // Le regreso la edad inicial
    xEdadJose  = 27;
    xEdadJuan  = 27;
    xEdadMaria = 27;

    // Averiguar cual de los 3 tiene mayor edad
    printf("Verificando quien es el mayor de los 3\n");
    if (xEdadJuan > xEdadJose && xEdadJuan > xEdadMaria)
       printf("a) Juan es el Mayor de los 3\n");
    else
       if (xEdadJose > xEdadJuan && xEdadJose > xEdadMaria)
          printf("a) José es el Mayor de los 3\n");
       else
          if (xEdadMaria > xEdadJuan && xEdadMaria > xEdadJose)
             printf("a) María es la Mayor de los 3\n");
          else
             printf("a) Por lo menos 2 de Ellos tienen la misma edad\n");

    // Deja una línea
    printf("\n");

    // Le coloco la misma edad de Juan
    xEdadJose=28;

    // Mensaje de verificación
    printf("Verificando quien es el mayor de los 3\n");
    if (xEdadJuan > xEdadJose && xEdadJuan > xEdadMaria)
       printf("b) Juan es el Mayor de los 3\n");
    else
       if (xEdadJose > xEdadJuan && xEdadJose > xEdadMaria)
          printf("b) José es el Mayor de los 3\n");
       else
          if (xEdadMaria > xEdadJuan && xEdadMaria > xEdadJose)
             printf("b) María es la Mayor de los 3\n");
          else
             printf("b) Por lo menos, 2 de Ellos tienen la misma edad\n");

    // Deja un Línea
    printf("\n");

    // Le regreso la edad inicial
    xEdadJose  = 17;
    xEdadJuan  = 27;
    xEdadMaria = 27;

    // Desplegando un Mensaje
    printf("Desplegando en Orden los 3\n");
    if (xEdadJuan > xEdadJose && xEdadJuan > xEdadMaria)
    {
       printf("c) Juan es el Mayor\n");
       if (xEdadJose > xEdadMaria)
          printf("c) Sigue José y al final María\n");
       else
          if (xEdadMaria > xEdadJose)
             printf("c) Sigue María y al final José\n");
          else
             printf("c) José y María tienen la misma Edad\n");
    }
    else
      if (xEdadJose > xEdadJuan && xEdadJose>xEdadMaria)
      {
          printf("c) José es el Mayor\n");
          if (xEdadJuan > xEdadMaria)
             printf("c) Sigue Juan y al final María\n");
          else
             if (xEdadMaria > xEdadJuan)
                printf("c) Sigue María y al final Juan\n");
             else
                printf("c) Juan y María tienen la misma Edad\n");
       }
       else
          if (xEdadMaria > xEdadJuan && xEdadMaria>xEdadJose)
          {
             printf("c) María es la Mayor\n");
             if (xEdadJuan > xEdadJose)
                printf("c) Sigue Juan y al final Jose\n");
             else
                if (xEdadJose > xEdadJuan)
                   printf("c) Sigue José y al final Juan\n");
                else
                   printf("c) Juan y José tienen la misma Edad\n");
          }
          else
             printf("c) Por lo menos 2 de Ellos tienen la misma edad");

    // Deja una Linea
    printf("\n");

    // Valor de Retorno
	return 0;

}





