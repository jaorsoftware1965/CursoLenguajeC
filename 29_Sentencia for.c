/* ---------------------------------------------------------------------
 Curso de C
 Clase 29
 Sentencias de Ciclos de Repetición
 Sentencia for
 -----------------------------------------------------------------------

 En esta clase continuaremos viendo las sentencias de ciclos, y toca el
 turno a la sentencia "for".

 La sentencia for es una sentencia de repetición similar en funcionamiento
 que la sentencia while, solo que es una función que está orientada a ser
 un ciclo repetivo basado en una cantidad de veces que el ciclo se repite.
 
 El ciclo for tiene una definición mas orientada a un ciclo repetitivo de
 N veces y con mucha flexibilidad en su uso.

 La sintaxis del bucle for es la siguiente:

 for (inicializacion; expresion_de_control; actualizacion)
    sentencia(s);

 Si hiciéramos una analogía con la sentencia while; sería la siguiente:

 inicializacion;
 while (expresion_de_control)
 {
     sentencia(s);
     actualizacion;
 }

 Ahora analicemos cada parte de la definición.

 inicialización. En esta parte se especifica la variable que definirá
 cuantas veces se repetirá el ciclo. Veremos que no necesariamente debe
 ser una variable; pueden ser mas.

 expresion_de_control. Es una expresión que devuelve un valor booleano,
 es decir TRUE o FALSE; y que mientras esta expresión sea verdadera; el
 ciclo se estará repitiendo. Obviamente la variable definida en la
 inicialización; debe estar involucrada en esta expresión.

 actualizacion. En esta parte se define como es que la variable de
 inicialización va a irse modificando; para que cuando alcance cierto
 valor; la expresion de control, ya no sea verdadera; y el ciclo
 finalice.

 En C, el bucle for puede no contener inicialización, condición o incremento, o
 incluso pueden no existir dos e incluso las tres expresiones del bucle; inclusive
 puede no haber sentencias.

*/
// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{
    // Variable para Contar
    int iCuenta,iCuenta2;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 29 - Sentencia for \n\n");

    // Imprimimos los primeros 100 números
    printf("Imprimiendo los Números del 1 al 100 \n1");

    // Ciclo para imprimir los 100 Números
    for (iCuenta=1;iCuenta<=100;iCuenta++)
        printf("[%d] ",iCuenta);
    printf("\n");

    // Imprimiendo tabla de Multiplicar
    for (iCuenta=1;iCuenta<=10;iCuenta++)
        printf("7 x  %02d = %02d \n", iCuenta, 7 * iCuenta);
    printf("\n");

    // Imprimiendo tabla de Multiplicar
    iCuenta=1;

    for (;iCuenta<=10;)
        printf("8 x  %02d = %02d \n",iCuenta++,8*iCuenta);
    printf("\n");

    // Imprimiendo tabla de Multiplicar en decremento
    iCuenta=10;
    for (;iCuenta>0;)
        printf("5 x  %02d = %02d \n",iCuenta--,5*iCuenta);
    printf("\n");

    // Imprimiendo tabla de Multiplicar
    iCuenta=1;
    for (;;)
    {
       printf("9 x  %02d = %02d \n",iCuenta++, 9 * iCuenta);
       if (iCuenta==10)
          break;
    }
    printf("\n");

    // Ciclo para imprimir números pares en positivo y negativo
    // En decremento
    printf("Números pares Positivos y Negativos del 10,-10  hasta el 2,-2\n");
    for( iCuenta=0, iCuenta2 = 10; iCuenta2 > iCuenta ; iCuenta++, iCuenta2--)
    {
       printf("%d\n", iCuenta2 - iCuenta);   //  10, 8,  6,  4, ... 2
       printf("%d\n", iCuenta -  iCuenta2);  // -10,-8, -6, -4, ...-2
    }
    // 10-0, 9-1, 8-2, 7-3, 6-4, 5-5
    printf("\n");

    // Ciclo para imprimir números pares en positivo y negativo
    // En decremento
    printf("Números pares Positivos y Negativos del 10 hasta el 2 mayores que 7\n");
    for(iCuenta=0,iCuenta2=10; iCuenta2 >iCuenta && iCuenta2 > 7;iCuenta++,iCuenta2--)
    {
       printf("%d\n",iCuenta2-iCuenta);
       printf("%d\n",iCuenta-iCuenta2);
    }// 10-0, 9-1,8-2, 7
    printf("\n");

    // Ciclo para imprimir coordenadas de una matriz
    printf("Imprime Coordenadas o Indices de una Matriz\n");
    for (iCuenta=1;iCuenta<10;iCuenta++)
    {
       for (iCuenta2=1;iCuenta2<10;iCuenta2++)
           printf("%d%d\n",iCuenta,iCuenta2);
       printf("\n");
    }

    // 

    // Ejemplo de for sin sentencias
    char cTecla;
    printf("Presiona Q para finalizar el programa\n");
    for( ; getc(stdin)!='Q' ; );

    printf("Presiona X para finalizar el programa\n");
    while (cTecla!='X')
       cTecla = getc(stdin);

    iCuenta=1;
    for (;iCuenta;)
        iCuenta=0;

    // Valor de Retorno
	return 0;
    
}
