/* ---------------------------------------------------------------------
 Curso de C
 Clase 08
 Cadenas
 -----------------------------------------------------------------------

 Cuando un Arreglo se define de espacios de memoria de tipo char, se le
 llama String-Cadena.

 Ejemplo:
 char strNombre[10];

 Para que un arreglo de tipo char, funcione correctamente con las funciones
 de manejo de cadenas, el último espacio utilizado del Arreglo debe tener
 el caracter '\0'.

 Lo anterior lleva a concluir que si queremos manejar una cadena de 20
 caracteres; la debemos de definir de 21 para que el último caracter
 sea utilizado por el valor '\0'.

 Podemos inicializar un Arreglo al momento de definirlo, de la siguiente
 forma:

 char strNombre1[]={'j','u','a','n','\0',' ', ' '};
 char strNombre2[]="juan";

*/
// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{

    // Arreglos
    char chrVocales[]={'a','e','i','o','u'};
    char strNombre[]="Juan Perez";
    char strApellido[10];

    // Coloca el Apellido
    strApellido[0]='P';
    strApellido[1]='e';
    strApellido[2]='r';
    strApellido[3]='e';
    strApellido[4]='z';
    strApellido[5]='-';
    strApellido[6]='x';
    strApellido[7]='y';
    strApellido[8]='z';
    strApellido[9]='4';


	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 08 - Cadenas \n\n");

    printf("Las Vocales:\n");
    printf("Vocal 0:%c \n", chrVocales[0]);
    printf("Vocal 1:%c \n", chrVocales[1]);
    printf("Vocal 2:%c \n", chrVocales[2]);
    printf("Vocal 3:%c \n", chrVocales[3]);
    printf("Vocal 4:%c \n\n", chrVocales[4]);
    printf("Las Vocales-> %s \n",chrVocales);
    printf("El valor del Caracter 5 de Vocales:%d=%c \n",chrVocales[5],chrVocales[5]);


    printf("El Nombre-> %s \n",strNombre);
    printf("El valor del Caracter 10 de Nombre:%d \n",strNombre[10]);
    strNombre[10]='X';
    chrVocales[5]='>';
    chrVocales[6]='>';
    chrVocales[7]='>';
    chrVocales[8]='>';
    chrVocales[9]='>';
    chrVocales[10]='>';
    chrVocales[11]='>';
    chrVocales[12]='>';
    chrVocales[13]='>';
    chrVocales[14]='>';
    chrVocales[15]='>';
    chrVocales[17]='<';
    printf("El Apellido-> %s \n",strApellido);
    //printf("El Apellido-> %c%c%c%c%c",strApellido[0],strApellido[1],strApellido[2],strApellido[3],strApellido[6]);

    // Valor de Retorno
	return 0;
}
