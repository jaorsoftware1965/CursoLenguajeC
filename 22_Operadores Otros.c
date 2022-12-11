/* ---------------------------------------------------------------------
 Curso de C
 Clase 22
 Operadores Otros
 -----------------------------------------------------------------------

 En esta clase veremos algunos otros operadores que no son parte de una
 clasificación o grupo.

 El Operador sizeof(tipo o variable).

 La función de este operador es devolver el tamaño en bytes del tipo de
 dato o la variable indicada. El tamaño devuelto dependerá del compilador
 y del Sistema Operativo en el que se esté ejecutando la aplicación.
 El operador sizeof es un operador en tiempo de compilación ya que el valor
 devuelto lo realiza durante la compilación, y no durante la ejecución del
 programa. Veamos algunos ejemplos:

 // Variable para obtener la Longitud en Bytes
 int iLongBytes;

 // Devuelve 2 en los S.O. operativos de 16 bits y 4 en los de 32 bits.
 iLongBytes = sizeof(int);

 // Devuelve el valor de 4
 iLongBytes = sizeof(double);

 // Define un Arreglo de 20 Caracteres
 char a[20];


 // Devuelve el valor 20
 iLongBytes = sizeof(a);

 // Define un Arreglo de 6 Float
 float a[6];

 // Devuelve el valor 24 (4*6).
 iLongBytes = sizeof(a);


 El Operador "?" se utiliza para ejecutar una de 2 expresiones dependiendo del resultado
 de evaluar una condición. El formato para su uso es el siguiente:
 Exp1 ? Exp2 : Exp3

 El operador ? evalúa la expresión Exp1, si es cierta se evalúa Exp2 y si es falsa
 se evalúa Exp3. Veamos algunos ejemplos:

 int x,y;
 y = (x>10) ? 100 : 200;

 Asignara el valor 100 a y si x es mayor de 10, y el valor 200 en caso contrario.
 En este caso podemos observar que

 int t;
 (t) ? (t+=10) : printf("t vale cero");

 Ejecutara la suma de t + 10 si t es distinto de cero, y la función printf
 si t vale cero.

 El Operador "," se utiliza para separar elementos, como por ejemplo; cuando
 inicializamos valores en un arreglo. También se utiliza que se ejecute una
 instrucción despues de otra. Ejemplo:

 printf("Hola %s tu edad es %d","Juan",45);
 x = 5+6, x=7;

*/

// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int x=4,y=0,z=0;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 22 - Operadores Otros \n\n");

	printf(" Desplegando los tamaños de los tipos de datos en C \n");
	printf(" La longitud de char           :%d\n",sizeof(char));
	printf(" La longitud de int            :%d\n",sizeof(int));
	printf(" La longitud de short int      :%d\n",sizeof(short int));
	printf(" La longitud de long  int      :%d\n",sizeof(long int));
	printf(" La longitud de float          :%d\n",sizeof(float));
	printf(" La longitud de double         :%d\n",sizeof(double));
    printf(" La longitud de long  double   :%d\n\n",sizeof(long double));

    // Definiendo variables para obtener sus tamaños
    char       xChar;
    int        xInteger;
    float      xFloat;
    double     xDouble;
    char       arrChar[10];
    int        arrInteger[10];
    float      matFloat[5][4];
    double     arrDouble[10];

    printf(" Desplegando los tamaños de las Variables Definidas \n");
	printf(" La longitud de xChar          :%d\n",sizeof(xChar));
	printf(" La longitud de xInteger       :%d\n",sizeof(xInteger));
	printf(" La longitud de xFloat         :%d\n",sizeof(xFloat));
	printf(" La longitud de xDouble        :%d\n",sizeof(xDouble));
	printf(" La longitud de arrChar        :%d\n",sizeof(arrChar));
	printf(" La longitud de arrInteger     :%d\n",sizeof(arrInteger));
    printf(" La longitud de matFloat       :%d\n",sizeof(matFloat));
    printf(" La longitud de arrDouble      :%d\n\n",sizeof(arrDouble));


    // Define 2 variables
    int iExistencia = 12, iPrecio=0;
    iPrecio = (iExistencia>10) ? 100 : 102;

    // Imprime el valor del Precio
    printf(" El Precio es:%d \n",iPrecio);
    iExistencia=5;

    // Modificamos el Precio
    iPrecio = (iExistencia>10) ? 100+10 : 102;
    printf(" El Precio es:%d \n",iPrecio);

    // Verifica si el Precio es mayor que 100 para imprimir mensaje, 
    // si no le asigna 101 al Precio
    (iPrecio > 100) ? printf(" El Precio es mayor que 100 \n") : (iPrecio+=10);

    // Modificamos el Precio
    iPrecio = 29;

    // Verifica si el Precio es mayor que 100 para imprimir mensaje, si no le asigna 101 al Precio
    (iPrecio > 100) ? printf(" El Precio es mayor que 100 \n") : (iPrecio+=10), printf(" El Precio se ha modificado \n");

    // El Precio
    printf(" El Precio es:%d \n",iPrecio);

    if (iPrecio > 100)
       if (iPrecio < 150)
          printf("El precio está entre 100-150 \n");
       else
       {
          iPrecio +=20;
          printf("El precio se ha incrementado en 20\n");
          printf("El precio es %d\n",iPrecio);
       }
    else
       if (iPrecio == 100)
       {
           // Decrementa en 10
           iPrecio -=10;
           // Imprime
           printf("El Precio de 100 se ha decrementado en 10: %d",iPrecio);
       }
       else
          printf("El Precio es menor que 100");

    (iPrecio > 100) ? 
                    (iPrecio < 150 ) ? 
                            printf("El precio está entre 100-150 \n"): 
                            (iPrecio +=20,
                            printf("El precio se ha incrementado en 20\n"),
                            printf("El precio es %d\n",iPrecio)) : 
                    (iPrecio ==100) ? 
                            // Decrementa en 10
                            iPrecio -=10,
                            // Imprime
                            printf("El Precio de 100 se ha decrementado en 10: %d",iPrecio):
                            printf("El Precio es menor que 100");             
          
	// Valor de Retorno
	return 0;

}


