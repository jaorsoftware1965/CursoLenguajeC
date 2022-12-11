/* ---------------------------------------------------------------------
 Curso de C
 Clase 25
 Sentencias de Control de Flujo
 Sentencia if
 -----------------------------------------------------------------------

 Hasta este momento; todos los programas que hemos realizado; han tenido
 sentencias que se ejecutan en forma secuencial una tras otra; de arriba hacia
 abajo.

 Una necesidad imprescindible que se presentará, prácticamente en cualquier
 programa; es que dependiendo de una circunstancia o condición; se ejecuten
 ciertas instrucciones. Por ejemplo; si solicitamos la edad de una persona;
 podemos desplegar un mensaje de "Mayor de Edad" si es que la edad capturada
 es 18 o mayor; y si no; entonces desplegar "Menor de Edad". A este tipo de
 situaciones se les llama:"control de flujo del programa"; es decir; que
 dependiendo de una condición o circunstancia; se controla la ejecución del
 programa.

 La sentencia por excelencia para controlar el flujo del programa en C y en
 prácticamente todos los lenguajes de programación; es la sentencia "if".

 La sentencia "if" evalúa una condición; y dependiendo de si esta es verdadera
 o falsa se controlará el flujo o la dirección del programa. Su sintaxis
 es la siguiente:

 if (condición)
    sentencias_si_condición_true
 [else
    sentencias_si_condición_false]

 Donde:
 Condición debe ser cualquier expresión que devuelva un valor false(0); o un
 valor true (cualquier valor distinto de 0).
 Si la condición se cumple se ejecutarán las sentencias_si_condición_true.
 Si estas sentencias son mas de 1; necesitan estar entre "{}"; si es solo una
 entonces no la necesitan.

 La instrucción if utiliza otra palabra reservada de c que es "else"; la cual
 es opcional. En caso de que se utilice; se ejecutarán las instrucciones indicadas
 como "sentencias_si_condicion_false"; si condición devuelve false.

*/
// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 25 - Sentencia if \n\n");

   char   xEdadJose  = 84;
	char   xEdadJuan  = 78;
	char   xEdadMaria = 26;
	
   // Mensaje del Programa
   printf("Evaluando la Sentencia if \n");

    // Evaluando las edades e imprimiendo si son mayores de edad
    printf("Evaluando Mayoría de edad de Juan \n");
    if (xEdadJuan>=18)
       printf("a) Juan es Mayor de Edad \n");
    printf("\n");

    printf("Evaluando Mayoría de edad de María \n");
    if (xEdadMaria>=18)
       printf("b) María es Mayor de Edad \n");
    printf("\n");

    printf("Evaluando Mayoría de edad de José \n");
    if (xEdadJose>=18)
       printf("c) José es Mayor de Edad\n");
    printf("\n");

    xEdadJose=17;
    printf("Evaluando Mayoría de edad de José \n");
    if (xEdadJose>=18)
       printf("d) José es Mayor de Edad\n");
    printf("\n");

    printf("Evaluando Mayoría de edad de María \n");
    if (xEdadMaria>=18)
       printf("e) María es Mayor de Edad\n");       
    else
       printf("f) María es Menor de Edad\n");
    printf("\n");

    xEdadMaria=16;
    printf("Evaluando Mayoría de edad de María \n");
    if (xEdadMaria>=18)
       printf("g) María es Mayor de Edad\n");
    else
       printf("h) María es Menor de Edad\n");
    printf("\n");

    printf("Evaluando si Juan es Mayor de Edad y no se encuentra en la Tercera Edad \n");
    if (xEdadJuan >=18 && xEdadJuan <65) //78 
    {
       printf("i) Juan es Mayor de Edad\n");
       printf("i) Juan no se encuentra en la tercera Edad \n");
    }
    else
    {
       printf("j) Juan No es mayor de 18 años o si esta en la tercera edad \n");
    }

    printf("\n");

    xEdadJuan=50;
    printf("Evaluando si Juan es Mayor de Edad y se encuentra en la Tercera Edad \n");
    if (xEdadJuan >=18 && xEdadJuan >=65)
    {
       printf("k) Juan es Mayor de Edad\n");
       printf("k) Juan se encuentra en la tercera Edad \n");
    }
    else
       printf("l) Juan No es mayor de 18 años o Juan no es mayor de 65 \n");
    printf("\n");

    printf("Evaluando si por lo menos alguno de los 3 está en la Tercera Edad \n");
    xEdadJose  = 17;
    xEdadJuan  = 17;
    xEdadMaria = 16;
    if (xEdadJuan >17  ||  xEdadMaria > 17 || xEdadJose>17)
    {
       printf("m) Por lo menos uno de Juan, María y José es mayor de edad\n");
       printf("m) Los 3 pudieran ser mayor de edad \n");
    }
    else
       printf("n) Ni Juan, ni María; ni José; son mayores de edad \n");
    printf("\n");


    printf("\n");


    // Valor de Retorno
	return 0;

}




