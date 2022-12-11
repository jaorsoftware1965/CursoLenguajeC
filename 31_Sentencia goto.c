/* ---------------------------------------------------------------------
 Curso de C
 Clase 31
 Sentencia goto
 -----------------------------------------------------------------------

 La sentencia goto nos permite enviar el control de la secuencia del
 programa a otra sección de código. Su sintaxis es:

 goto ETIQUETA;
 ....
 ETIQUETA:

 Donde etiqueta debe existir en alguna parte del código, y debe ser seguida
 de ":".

 La sentencia goto no es una sentencia muy prestigiada en el mundo de los
 programadores de C, pues disminuye la claridad y legibilidad del código.

 Fue introducida en el lenguaje por motivos de compatibilidad con antiguos
 hábitos de programación, pero siempre puede ser sustituida por otras sentencias
 mas claras y estructuradas.

*/
// Se incluye la librería
#include "stdio.h"

// La función principal con la cual se inicia el programa
int main()
{
    // // Variable para Contar
    // int iCuenta=0;

	// // Mandamos un mensaje a la Pantalla
	// printf("Curso de C \n");
	// printf("Clase 31 - Sentencia goto \n\n");

	// // Ciclo
	// while (1)
	// {
	//   // Mensaje de Inicio del While
	//   printf("Inicio del Ciclo While ...\n");

    //   // Si llega a valer mas de 10 salta a Final
	//   if (iCuenta>=10)
    //      goto CUALQUIERPALABRA;

	//   // Defino Etiqueta dentro del While
	//   IN_WHILE:
	//   iCuenta++;
	//   printf("Inicio Etiqueta IN_WHILE...\n");

	//   // Salta fuera del Ciclo a ENMEDIO
    //   goto ENMEDIO;

    //   // Etiqueta que sale del While
    //   OUT_WHILE:
    //   printf("Inicio Etiqueta OUT_WHILE... \n");
    //   break;

	// }

	// // Incremente Cuenta
	// iCuenta++;

    // // Etiqueta de Enmedio
	// ENMEDIO:


	// // Verifica si es menor que 5
	// if (iCuenta<5)
	//     // Va a etiqueta que sale del Wile
    //    	goto OUT_WHILE;
    // else
    //    // Verifica si es igual a 5
    //    if (iCuenta==5)
    //       // Va a etiqueta dentro del While
    //       goto IN_WHILE;

    // // Salta a Etiqueta Final
    // goto CUALQUIERPALABRA;

    // // Esto ya no se ejecuta
    // printf("Este código no se ejecuta");

    // // Etiqueta Final
    // CUALQUIERPALABRA:


    

    // Valor de Retorno
	return 0;
}







