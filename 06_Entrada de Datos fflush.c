/* ---------------------------------------------------------------------
 Curso de C
 Clase 06
 Entrada de Datos y fflush
 -----------------------------------------------------------------------

 La Entrada y Salida de Datos desde consola, se refiere a las operaciones
 que se producen en el Teclado y la Pantalla de la Computadora. Existen
 básicamente, 6 funciones de Entrada y Salida de Datos desde consola, 3
 de Entrada y 3 de Salida.

 Estas funciones se encuentra definidas en la librería stdio.h; por lo cual
 es indispensable incluirlas en el programa para poder hacer uso de ellas.

 En esta clase veremos 2 funciones que son: getchar() y putchar() y una
 función adicional que es fflush

 La función getchar(), lee un carácter desde el teclado. Dicha función se
 encuentra definida como:

 int getchar(void);

 En donde:
 int. Indica que lo que devuelve la función es un valor entero
 void. Indica que la función no utiliza parametros.

 Dicha función lee un caracter desde el teclado, esperando la tecla "return"
 para finalizar el proceso. Esta función hace "eco" en la pantalla; es decir
 que el caracter pulsado se muestra en la pantalla.
 En caso de error devuelve EOF.

 La función putchar() escribe un carácter a la pantalla de la computadora.
 Dicha función se define como:

 int putchar(int c);

 En donde:
 int. Indica que lo que devuelve la función es un valor entero
 int c. Indica que la función necesita un valor int como parámetro.

 La función putchar(), si sucede de forma correcta, devuelve el carácter 
 escrito. En caso de error devuelve el carácter EOF.

 La función fflush se utiliza para liberar los caracteres que se encuentren en
 el buffer del teclado, utilizando el FILE stdin. La función está definida de
 la siguiente forma:

 int fflush(FILE *stream)

 En donde:
 int. Indica que lo que devuelve la función es un valor entero
 FILE *stream. Es una variable apuntador a FILE; utilizaremos stdin.

 La función fflush retorna 0 si el stream fue despejado con éxito. Si se
 detectaron errores, entonces retorna EOF.


*/

// Se incluye la librería
#include <stdio.h>

// El prototipo de la función que Limpia el Buffer del Teclado
void fnLimpiarBufferTeclado(void);

float fnRetornaPI()
{
    float x = 3.1416;
    return x;
}

// La función principal con la cual se inicia el programa
int main()
{
    char xChar=65;
    int  yChar=0;
    int  zChar='x';
    float fDatox;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 06 - Funciones de Entrada \n\n");

    printf("\nPresiona un caracter en el teclado y despues Enter:");
    xChar = getchar();
    xChar = fnRetornaPI();
    printf("\nEl Caracter 1 que presionaste fue:");
    putchar(xChar);

    // Limpia el Buffer
    //fflush(stdin);// No funciona en Linux
    fnLimpiarBufferTeclado();


    printf("\nPresiona otro caracter en el teclado y despues Enter:");
    yChar = getchar();
    printf("\nEl Caracter 2 que presionaste fue:");
    putchar(yChar);
    printf("\nEste:%d",yChar);    
    //fflush(stdin);
    fnLimpiarBufferTeclado();


    printf("\nPresiona otro caracter en el teclado y despues Enter:");
    zChar = getchar();
    printf("\nEl Caracter 3 que presionaste fue:");
    putchar(zChar);
    printf("\nEl ASCII del Caracter 3 que presionaste fue%d:\n",zChar);
    putchar(zChar);
    fnLimpiarBufferTeclado();

	// Valor de Retorno
	return 0;
}

// La función que libera el buffer
void fnLimpiarBufferTeclado(void)
{
    int c;
    printf("\nCaracteres en el buffer:");
    do 
    {
        c = getchar();
        printf("[%d]",c);
    }
    while (c != '\n' && c != EOF);
    printf("\n");
}
