/* ---------------------------------------------------------------------
 Curso de C
 Clase 12
 Arreglos Multidimensionales
 -----------------------------------------------------------------------

 En Clases anteriores vimos como definir un arreglo de una sola dimension.
 Determinanos que para poder acceder a cada elemento del arreglo necesitamos
 un valor llamado indice, el cual nos indica la posicion del elemento del
 arreglo.
 Es posible definir Arreglos de mas de una dimension. Cuando el arreglo es
 de 2 dimensiones, se le llama Arreglo Bidimensional o Matriz. Cuando el
 arreglo es de 3 dimensiones, se lo conoce como Arreglo Tridimensional.

 Para definir un arreglo de "n" dimensiones; simplemente se indica con n
 pares de corchetes despues del nombre del arreglo, y dentro de cada uno
 de ellos se indica el número de elementos que tendrá. Su sintaxis pudiera
 definirse de la siguiente forma

 tipo nombre_arreglo[n]...[];

 Ejemplos:
 int intPlanoCartesiano[10][10];
 int intPlanoTriDimensional[10][10][10];

 Al igual que con los arreglos, es posible inicializar los arreglos multidimensionales
 al momento de su definicion, indicando los elementos separados por "{}" y ","
 en forma ordenada en relacion a la definicion. Ejemplo:

 int intMatriz[2][3]={ {11, 12, 13} , {21, 22, 23} };



*/

// Se incluye la libreria
#include <stdio.h>
#include <string.h>


// La funcion principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 12 - Arreglos Multidimensionales \n\n");

	// Definimos un arreglo de 2 dimemnsiones (matriz) y asignamos valores
	int intMatriz[2][5]={ {00, 01, 02, 03, 04}, {10, 11, 12, 13, 14} };

	// 00  01  02    00 01 02 03 04
	// 10  11  12    10 11 12 13 14
	// 20  21  22
	// 30  31  32
	// 40  41  42

	// Definimos un arreglo de 3 dimensiones
	int intPlano3d[2][3][4]={{{000,001,002,003},{010,011,012,013},{020,021,022,023}},
                             {{100,101,102,103},{110,111,112,113},{120,121,122,123}}};



	// Definimos una Matriz de Caracteres o un arreglo de Cadenas
	char strArrNombres[3][10]={ "0>Juan","1>Maria","2>Jose"};
	char strMatNombres[2][3][10]={ {"00>Juan","01>Maria","02>Jose"},
	                               {"10>Daniel","11>Moises","12>Martha"}};

	// Accediendo a los valores
	printf("Posicion en Matriz: %d \n",intMatriz[1][2]);
	intMatriz[1][2]=89;
	printf("Posicion en Matriz: %d \n",intMatriz[1][2]);

    // Accediendo a los valores
	printf("Posicion en Plano: %d \n",intPlano3d[1][1][2]);
	intPlano3d[1][1][2]=100;
	printf("Posicion en Plano: %d \n",intPlano3d[1][1][2]);

	// Accediendo a los valores
	printf("Posicion en Arreglo: %s \n",strArrNombres[2]);
	strcpy(strArrNombres[2],"JESUS");
	printf("Posicion en Arreglo: %s \n",strArrNombres[2]);


	// Accediendo a los valores
	printf("Posicion en Matriz: %s \n",strMatNombres[1][1]);
	strcpy(strMatNombres[1][1],"DANIEL");
	printf("Posicion en Matriz: %s \n",strMatNombres[1][1]);


    // Leyendo
	printf("Captura un Numero para la posicion 1:");
    scanf("%d",intMatriz[1]);
	printf("Posicion en Matriz: %d \n",intMatriz[1][0]);

    // Leyendo
	printf("Captura un Numero para la posicion 1,1:");
    scanf("%s",strMatNombres[1][1]);

    // Accediendo a los valores
	printf("Posicion en Matriz: %s \n",strMatNombres[1][1]);

    // Leyendo
	printf("Captura un Nombre  para la posicion 1 de Nombres:");
    scanf("%s",strMatNombres[1]);

    // Accediendo a los valores
	printf("Posicion en Matriz: %s \n",strMatNombres[1]);

    // Accediendo a los valores
	printf("Posicion en Matriz: %s \n",strMatNombres[1][1]);

	// Accediendo a los valores
	printf("Posicion en Matriz: %s \n",strMatNombres[1][0]);

	strcpy(strArrNombres[0],"JESUS");
	printf("Posicion en Matriz: %s \n",strArrNombres[0]);


	// Valor de Retorno2
	return 0;
}

