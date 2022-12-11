/* ---------------------------------------------------------------------
 Curso de C
 Clase 09
 Entrada y Salida. gets y puts
 -----------------------------------------------------------------------

 En esta clase continuaremos con las funciones de Entrada y Salida de
 datos. Ahora veremos 2 mas; gets y puts.

 La función gets() lee un string desde el teclado. La función se define
 como:

 char *gets(char *s);

 La función gets() lee un string desde el teclado hasta que se pulsa un
 retorno de carro. El string es almacenado en la variable s, y el retorno
 de carro leído desde el teclado es, automáticamente, reemplazado por un
 carácter de final de string ('\0').

 Devuelve un puntero a la variable s si sucede de forma correcta, y NULL
 en caso contrario. La función gets() permite corregir errores de teclado
 usando la tecla de retroceso antes de pulsar el retorno de carro.

 La función puts() escribe un string en pantalla. La función se define
 como:

 int puts(const char *s);

 La función puts() escribe en pantalla el string almacenado en s, y añade
 al final un retorno de carro. Devuelve un entero no negativo si sucede
 de forma correcta, indicando el Número de Caracteres impresos y EOF
 en caso de error.

*/
// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
    // Arreglo de Nombre, Apellido y  variable para Caracteres
    char strNombre[10];
    char strApellido[10];
    int  intCaracteres;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 09 - Cadenas \n\n");

    // Captura las Cadenas
    printf("Capture el Nombre:\n");
    gets(strNombre);
    printf("Capture el Apellido:\n");
    gets(strApellido);

    // Los datos capturados
    printf("El Nombre capturado:");
    intCaracteres = puts(strNombre);
    printf("La longitud del nombre:%d\n",intCaracteres);

    printf("El Apellido capturado:");
    intCaracteres = puts(strApellido);
    printf("La longitud del Apellido:%d\n",intCaracteres);


    // Capture otro nombre
    printf("Capture otra vez el Nombre:\n");
    puts(gets(strNombre));
    printf("\nCapture otra vez el Apellido:\n");
    puts(gets(strApellido));
    puts("Hola");

    // Valor de Retorno
	return 0;
}
