/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 44 - Funciones para Cadenas

Antes de comenzar a analizar las funciones; debemos de
analizar la estructura de una función.

La definición de una función, sigue las siguientes convenciones:

tipo     función(parámetros)

donde:

tipo.
Indica que tipo de infomacíón va a devolver la función.
Estos tipos; puede ser cualquier de los que se utilizan para
definir variable; e inclusive tipos definidos por el usuario
con typedef.

función.
Es el nombre de la función; con la cual está puede ser llamada
o referida.

parámetros.
Es una lista de variables, separadas cada una de ellas por ","
en donde cada una tiene indicado su tipo.


FUNCIONES DE CADENA.
Las funciones para el Manejo de Cadenas, se encuentran definidas
en el archivo "string.h".

A continuación veremos algunas de las funciones para cadena mas
utilizadas.

strcpy
char* strcpy(char *cad1,const char *cad2);

La función strcpy() se utiliza para copiar el contenido de cad2 en cad1. El
elemento cad2 debe ser un puntero a una cadena que finalice con un carácter nulo. 
La función devuelve un puntero a cad1.

strcat
char* strcat(char *cad1,const char *cad2);

La función strcat() concatena cad2 en cad1, y añade al final de
cad1 un carácter nulo ('\0'). El carácter nulo de terminación, que originalmente 
tenía cad1, es sustituido por el primer carácter de cad2.
La cadena cad2 no se modifica en esta operación. 
La función strcat() devuelve cad1.

strchr
char* strchr(char *cad1,const char *cad2);

La función strchr() devuelve un puntero a la primera ocurrencia de cad2 en cad1.
Si no sucede, devuelve un puntero nulo (NULL).

strcmp
int strcmp(const char *cad1,const char *cad2);

La función strcmp() compara lexicográficamente dos cadenas que finalizan con
el carácter nulo, y devuelve un entero que se interpreta de la siguiente forma:

Valor Devuelto      Descripción
----------------------------------
Menor que cero      cad1 es menor que cad2
Igual a cero        cad1 es igual a cad2
Mayor que cero      cad1 es mayor que cad2

strlen
unsigned int strlen(char *cad);

La función strlen() devuelve el número de caracteres de la cadena apuntada por
cad que finaliza con un carácter nulo. El carácter nulo no se contabiliza.

strtok
char* strtok(char *cad1,const char *cad2);

La función strtok() devuelve un puntero a la primera-siguiente palabra de la cadena
apuntada por cad1, delimitada por los caracteres indicados en cad2. Devuelve un
puntero nulo (NULL) cuando no existe ninguna palabra que devolver.

La primera vez que se llama a strtok() se utiliza realmente cad1 en la llamada.
Las llamadas posteriores utilizan un puntero nulo (NULL) como primer argumento.
La función strtok() modifica la cadena apuntada por cad1, pues, cada vez que se
encuentra una palabra, se pone un carácter nulo donde esta el delimitador. De esta
forma strtok() puede continuar avanzando por la cadena.

*/


// Definimos el cambio de Línea
#define CR printf("\n")

// Librerias
#include "stdio.h"
#include "string.h"

// Función Principal
int main()
{

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 44 - Funciones de Cadena \n\n");

    // Variables de Cadena
    char sNombre[]     = "Juan";
    char sPaterno[]    = "Perez";
    char sMaterno[]    = "Rodriguez";
    char sCompleto[50] = "";
    char sAux[50]      = "";

    // Creamos el Nombre Completo,colocando primeramente el Nombre
    strcpy(sCompleto,sNombre);

    // Desplegamos el Nombre
    printf("Completo:%s \n",sCompleto); // Bug recuerda
    CR;

    // Agregamos un Segundo Nombre con una constanta Cadena
    strcat(sCompleto," Jose");

    // Desplegamos el Nombre
    printf("Completo:%s \n",sCompleto);
    CR;

    // Agregamos los 2 Apellidos
    strcat(sCompleto," ");
    strcat(sCompleto,sPaterno);
    strcat(sCompleto,"-");
    strcat(sCompleto,sMaterno);

    // Desplegamos el Nombre
    printf("Completo:%s \n",sCompleto);
    CR;

    // Busca un caracter y devuelve el Puntero
    printf("Busca la primera Ocurrencia de Ro y devuelve el resto es:%s\n",strstr(sCompleto,"Ro"));
    CR;

    // Lo copia a una variable cadena
    strcpy(sAux,strstr(sCompleto,"Perez"));

    // Desplegamos Búsqueda
    printf("Búsqueda:%s \n",sAux);
    CR;

    // Comparando
    int iResult=0;

    // Compara el Nombre Completo
    strcpy(sAux,"JUAN");
    iResult = strcmp(sNombre,sAux);

    if (iResult < 0)
       printf("%s es menor que %s \n",sNombre,sAux);
    else
      if (iResult > 0)
         printf("%s es mayor que %s \n",sNombre,sAux);
      else
         printf("%s es igual a %s \n",sNombre,sAux);


    // Compara el Nombre Completo
    strcpy(sAux,"Juana");
    iResult = strcmp(sNombre,sAux);

    if (iResult < 0)
       printf("%s es menor que %s \n",sNombre,sAux);
    else
      if (iResult > 0)
         printf("%s es mayor que %s \n",sNombre,sAux);
      else
         printf("%s es igual a %s \n",sNombre,sAux);
    CR;

    // Compara el Nombre Completo
    strcpy(sNombre,"1");
    strcpy(sAux,"2");
    iResult = strcmp(sNombre,sAux);

    if (iResult < 0)
       printf("%s es menor que %s \n",sNombre,sAux);
    else
       if (iResult > 0)
         printf("%s es mayor que %s \n",sNombre,sAux);
       else
         printf("%s es igual a %s \n",sNombre,sAux);
    CR;

    // Compara el Nombre
    strcpy(sAux,"Juan");
    strcpy(sNombre,"Juan");
    iResult = strcmp(sNombre,sAux);

    if (iResult < 0)
       printf("%s es menor que %s \n",sNombre,sAux);
    else
      if (iResult > 0)
         printf("%s es mayor que %s \n",sNombre,sAux);
      else
         printf("%s es igual a %s \n",sNombre,sAux);
    CR;



    // Obteniendo Longitudes
    strcpy(sNombre,"Juan");
    printf("La Longitud del Nombre   es:%d \n",strlen(sNombre));
    printf("La Longitud del Paterno  es:%d \n",strlen(sPaterno));
    printf("La Longitud del Materno  es:%d \n",strlen(sMaterno));
    printf("La Longitud del Completo es:%d \n",strlen(sCompleto));

    // Evaluando tokens
    printf("Completo:%s \n",sCompleto);
    printf("strtok:%s \n",strtok(sCompleto," -"));
    printf("strtok:%s \n",strtok(NULL," -"));
    printf("strtok:%s \n",strtok(sCompleto," -"));
    printf("strtok:%s \n",strtok(NULL," -"));
    printf("strtok:%s \n",strtok(sCompleto," "));
    printf("strtok:%s \n",strtok(NULL," -"));

    // Finaliza retornando 0
    return 0;
}

