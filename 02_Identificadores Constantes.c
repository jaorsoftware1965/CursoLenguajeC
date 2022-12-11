/* ---------------------------------------------------------------------
 Curso de C
 Clase 02
 Identificadores y Constantes
 ---------------------------------------------------------------------

 Un Identificador es un conjunto de caracteres con el cual se le
 asigna un nombre a las variables, constantes, funciones y tipos de
 datos que el programador define. Deben de iniciar con una letra o con
 "_", seguido de numeros, letras o "_". Ejemplos:

 a,b, número, costo_unitario, Costo_Unitario,_pedido_solicitud_10
 
 C es "sensible al tamaño"; esto quiere decir que diferencía entre
 mayúsculas y minúsculas. Es decir; el identificador "edad" es un
 identificador distino a "Edad".

 Una constante es un Identificador que tiene un valor fijo el cual
 no puede ser cambiado y que se mantiene durante toda la ejecución
 del programa.


 En C las constantes pueden ser númericas, caracter o cadenas de
 caracteres.
 
 Para definir una constante, se utiliza la directiva del procesador
 #define. La sintaxis para definir una constante es la siguiente.

 #define identificador valor

 Ejemplos:
 #define INT_VELOCIDAD       38
 #define DEC_VALOR_PI        3.1416
 #define STR_NOMBRE_SISTEMA  "Sistema DEMO Ver. 1.3"
 #define CHR_ESPACIO         '\x32'

*/

// Incluye la librería es una directiva del procesador
#include "stdio.h"

// Define una Constante es una directiva del procesador
// #define INT_VELOCIDAD    38.34
// #define DEC_PI           3.1416
// #define STR_SISTEMA      "Sistema DEMO Ver. 1.3"
// #define CHR_LETRA_a      '\x61'

// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 02 - Identificadores y Constantes \n\n");

	printf("Desplegando Constantes\n");
	printf("Velocidad   : %d \n",38);
	printf("Valor de PI : %f \n",3.1416);
	printf("SISTEMA     : %s \n","Sistema DEMO Ver. 1.3");
	printf("LETRA a     : %c \n",'\x61');

	//printf("Valores: %d %f %s %c",INT_VELOCIDAD,DEC_PI,STR_SISTEMA,CHR_LETRA_a);
    
	// Valor de Retorno
	return 0;
}

