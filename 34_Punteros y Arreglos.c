/* ---------------------------------------------------------------------
 Curso de Lenguaje C con GNU GCC
 Autor: JAOR
 Derechos Reservados: JAORSOFTWARE
 www.jaorsoftware.com
 Clase 34 -  Punteros y Arreglos
 -----------------------------------------------------------------------

 En clases previas, vimos que un arreglo,es un conjunto de espacios de
 memoria a los que se accede por un nombre y por un valor,llamado índice;
 el cual identifica a cada uno de estos espacios.
 Dicho de otra forma, es una variable que almacena muchos espacios de memoria
 del mismo tipo; a los que se accede a través de un índice. Por ejemplo:

 int iCalificaciones[10];

 La anterior sentencia podemos decir que define 10 variables de tipo entero;
 a las cuales se accede por el mismo nombre; y por un índice que las identifica
 a cada una de ellas.

 Los arreglos y los punteros tienen ciertas similitudes; en si el nombre de un
 arreglo es un puntero; solo que es un puntero constante; ya que la dirección
 a la que apunta NO PUEDE SER CAMBIADA. 


 Un arreglo sin indicar un índice, es un
 puntero que apunta a la dirección correspondiente al elemento 0 del arreglo.

 Ejemplo:

 char sCadena[10];
 char *pChar;

 El identificador sCadena, es decir el nombre del Arreglo, es un puntero al primer
 elemento del vector. Esto es lo mismo que decir que el valor-dirección de sCadena es igual
 &sCadena[0]; y tambien es igual a &sCadena.

 // Las siguientes declaraciones tienen el mismo efecto
 // pChar almacenará la dirección del primer elemento
 pChar = &sCadena[0];
 pChar = &sCadena;
 pChar = sCadena;

 Existen más puntos de coincidencia entre los vectores y los punteros:

– Ya que el nombre de un vector es un puntero, obedecerá las leyes de la aritmética de
  punteros. Por lo tanto, si sCadena apunta a sCadena[0], (sCadena+1) apuntará a 
  sCadena[1], y (sCadena+i) apuntará a sCadena[i].

– Recíprocamente, a los punteros se les pueden poner subíndices, 
  igual que a los vectores.
  Así pues, si pChar apunta a sCadena[0] se puede escribir:
  pChar[3]=pChar[2];

– Si se supone que pChar = sCadena, la relación entre punteros y vectores 
  puede resumirse  como se indica en las líneas siguientes:
  char sCadena[5];
  pChar = sCadena;
  *pChar     es igual a sCadena[0], y es igual a *sCadena     y a pChar[0]
  *(pChar+1) es igual a sCadena[1], y es igual a *(sCadena+1) y a pChar[1]
*/

// Se incluye la librería
#include <stdio.h>

#define CR printf("\n")

// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 34 - Punteros y Arreglos \n\n");

    // Para Contar
    char iCuenta=0;

    // Declaramos un Apuntador a Char
    char *pChar;

	// Declaramos un Arreglo de Caracteres
	char sCadena[5]="JAOR";

    // Espera
    char espera[10];

    // Asignamos la Dirección de sCadena al apuntador;
    pChar = sCadena;
    printf("Dirección de pChar:%p\n",pChar);

    pChar = &sCadena;
    printf("Dirección de pChar:%p\n",pChar);

    pChar = &sCadena[0];
    printf("Dirección de pChar:%p\n",pChar);
    
    // Pausa
    gets(espera);

    // Dejamos una Línea
    CR;

    // Mensaje
    printf ("1)Imprimimos la Cadena desde el Arreglo \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",sCadena[iCuenta]);

    // Dejamos una Linea
    CR;CR;

    // Mensaje
    printf ("2)Imprimimos la Cadena desde el Vector como Apuntador \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",*(sCadena+iCuenta));

    // Dejamos una Linea
    CR;CR;
    // Pausa
    gets(espera);


    // Mensaje
    printf ("3)Imprimimos Cadena desde el Apuntador como Arreglo \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",pChar[iCuenta]);

    // Dejamos una Línea
    CR; CR;
    // Mensaje
    printf ("4)Imprimimos Cadena desde el Apuntador \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",*(pChar+iCuenta));

    // Dejamos una Linea
    CR;CR;

    // Modificamos desde el Apuntador
    strcpy(pChar,"soft");

    // Mensaje
    printf ("5)Imprimimos Cadena modificada con strcpy desde el Arreglo \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",sCadena[iCuenta]);

    // Dejamos una Linea
    CR;CR;

    // Mensaje
    printf ("6)Imprimimos Cadena modificada con strcpy desde el Apuntador como Arreglo \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",pChar[iCuenta]);

    // Dejamos una Línea
    CR;CR;

    // Modificamos uno a uno desde el Apuntador    
    *(pChar+0)='A';
    *(pChar+1)='B';
    *(pChar+2)='C';
    *(pChar+3)='D';
    *(pChar+4)='\0';

    // Mensaje
    printf ("7)Imprimimos Cadena modificada uno a uno desde el Apuntador como Arreglo \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",pChar[iCuenta]);

    // Dejamos una Línea
    CR;CR;

    // Mensaje
    printf ("8)Imprimimos Cadena modificada uno a uno desde el Apuntador \n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",*(pChar+iCuenta));

    // Dejamos una Línea
    CR;CR;

    // Modificamos uno a uno desde el Apuntador
    pChar[0]='W';
    pChar[1]='X';
    pChar[2]='Y';
    pChar[3]='Z';
    pChar[4]='\0';

    // Mensaje
    printf ("9)Imprimimos Cadena modificada como Arreglo uno-uno desde Apuntador como Arreglo\n");

    // Ciclo para imprimir los caracteres de la Cadena
    for (iCuenta=0;iCuenta<5;iCuenta ++)
        printf("%c",pChar[iCuenta]);

    // Dejamos una Línea
    CR;CR;

    return 0;
}