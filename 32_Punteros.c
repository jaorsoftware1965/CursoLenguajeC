/* ---------------------------------------------------------------------
 Curso de Lenguaje C con GNU GCC
 Autor: JAOR
 Derechos Reservados: JAORSOFTWARE
 www.jaorsoftware.com
 Clase 32 -  Punteros
 -----------------------------------------------------------------------

 DEFINICIÓN.

 Un Puntero; es una variable que contiene una dirección de memoria; esta
 dirección por uso común, corresponde a otra variable; por lo que suele
 decirse que un Puntero "apunta" a otra variable.
 
 Es importante recalcar que este puntero, tiene su propia dirección de 
 memoria; en la cual almacena la dirección de memoria a la que apunta.

 Un Apuntador ocupa normalmente 4 bytes de memoria; pero esto con el tiempo
 puede variar de acuerdo al Sistema Operativo.

 Cuando se declara un Apuntador; se debe indicar a que tipo de dato apuntará.
 La Sintaxis para declarar un puntero es la siguiente:

 tipo_dato* nombre_apuntador;

 Donde:
 tipo_dato.        Es el tipo de dato al que va a apuntar
 *.                Se utiliza para indicar que es un puntero
 nombre_apuntador. Es el nombre del apuntador

 Ejemplo:

 int  xEdad; // Declarando una variable de tipo Integer
 int *pEdad; // Declarando una variable apuntador de tipo Integer

 En el anterior ejemplo, se está declarando un apuntador al tipo de dato
 integer y el nombre del puntero es pEdad.

 OPERADORES.
 Existen 2 operadores que se utilizan con los punteros:

 El operador de dirección:   &
 El operador de indirección: *  (yo lo llamo operador de valor)

 OPERADOR DIRECCIÓN. Se utiliza para obtener la dirección de
 cualquier variable de Memoria definida en el programa; no únicamente
 para obtener la dirección de un puntero.

 Las constantes y las expresiones no tienen dirección, por lo que no se les
 puede aplicar el operador &. Tampoco puede cambiarse la dirección de
 una variable.
 
 Los valores posibles para un puntero son las direcciones posibles de
 memoria. Un Puntero puede tener el Valor 0; equivalente a la constante NULL.

 Suponiendo que:
 int* p;
 int x;



 Las siguientes sentencias son ilegales:
 p  = &34;     // las constantes no tienen dirección
 p  = &(i+1);  // las expresiones no tienen dirección
 &i = p;       // las direcciones no se pueden cambiar
 p  = &i;
 p  = 17654;   // habría que escribir p = (int *)17654;
 

 OPERADOR INDIRECCIÓN. Se utiliza para acceder o modificar el valor que
 contiene la dirección a la que apunta un apuntador. Este operador
 es para utilizar únicamente con variables apuntadores. Ejemplo:

 // Definiendo Variables
 int iEdad = 10;

 // Definiendo un Apuntador a Integer
 int *pEdad = &iEdad;
 
 // Modificando la Edad desde el Apuntador
 *pEdad = 19; // Su resultado sería simila a hacer iEdad=19;

 // Imprimimos el Valor de la Edad
 printf("Edad: %d %d \n",*pEdad,iEdad);

 En el ejemplo anterior; la variable iEdad primero fué inicializada con
 10; se obtuvo su dirección y se colocó en el apuntador pEdad; y desde este
 apuntador se modificó el valor y se imprimió.


 ASIGNACIONES.
 Es posible realizar asignaciones entre punteros; siempre y cuando sean
 del mismo tipo; en caso de que no; se deberá realizar el "cast"
 correspondiente.

 Ejemplo:
 int  *x;
 int  *y;
 void *z;

 // Asignación entre punteros
 x=y;          // Asignación entre mismo tipo, Ok
 y=x;
 x=(int *)z;   // Asignación de void a int
 z=(void *)x;
 

 No se permiten asignaciones directas (sin casting) entre punteros que apuntan
 a distintos tipos de variables; aunque el compilador no marca error y al momento
 de ejecución tampoco; simplemente el manejo de la información es erróneo. Ejemplos

 // Definiendo Apuntadores
 int     *p;
 double  *q;
 void    *r;

 // Asignaciones entre ellos
 p = q;        // ilegal
 p = (int *)q; // ilegal
 p = r = q;    // ilegal

 IMPRIMIR PUNTEROS.
 Para imprimir punteros con la función printf() se deben utilizar los formatos
 %u (despliega la dirección en decimal) y %p (despliega la dirección en hexadecimal).
e
*/

// Se incluye la librería
#include <stdio.h>

#define CAMBIO_LINEA printf("\n")

// La función principal con la cual se inicia el programa
int main()
{

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 32 - Punteros \n\n");

    // Definicio de Variables
    int    xInteger = 10;
    long   xLong    = 20;
    char   xChar    = 'X';
    float  xFloat   = 14.50;
    double xDouble  = 345.50;


    // Apuntadores
    int    *pInteger;
    long   *pLong;
    char   *pChar;
    float  *pFloat;
    double *pDouble;
    void   *pVoid;

    printf("Desplegando longitud en bytes de las Apuntadores \n");
    printf("SizeOf pInteger:%d \n",sizeof(pInteger));
    printf("SizeOf pLong   :%d \n",sizeof(pLong));
    printf("SizeOf pChar   :%d \n",sizeof(pChar));
    printf("SizeOf pFloat  :%d \n",sizeof(pFloat));
    printf("SizeOf pDouble :%d \n",sizeof(pDouble));
    printf("SizeOf pVoid   :%d \n",sizeof(pVoid));

    // Deja una línea
    CAMBIO_LINEA;

    printf("Desplegando las direcciones de las Variables \n");
    printf("Dirección xInteger:%p - %u \n",&xInteger,&xInteger);
    printf("Dirección xLong   :%p - %u \n",&xLong,&xLong);
    printf("Dirección xChar   :%p - %u \n",&xChar,&xChar);
    printf("Dirección xFloat  :%p - %u \n",&xFloat,&xFloat);
    printf("Dirección xDouble :%p - %u \n",&xDouble,&xDouble);



    // Deja una línea
    CAMBIO_LINEA;

    // Asignando a las apuntadores, las direcciones de las Variables
    pInteger = &xInteger;
    pLong    = &xLong;
    pChar    = &xChar;
    pFloat   = &xFloat;
    pDouble  = &xDouble;
    pVoid    = &xInteger;

    printf("Desplegando las direcciones de los Apuntadores y a Donde Apuntan \n");
    printf("Dirección pInteger:%p Donde Apunta pInteger %p\n",&pInteger,pInteger);
    printf("Dirección pLong   :%p Donde Apunta pLong    %p\n",&pLong,pLong);
    printf("Dirección pChar   :%p Donde Apunta pChar    %p\n",&pChar,pChar);
    printf("Dirección pFloat  :%p Donde Apunta pFloat   %p\n",&pFloat,pFloat);
    printf("Dirección pDouble :%p Donde Apunta pDouble  %p\n",&pDouble,pDouble);
    printf("Dirección pVoid   :%p Donde Apunta pVoid    %p\n",&pVoid,pVoid);

    // Deja una línea
    CAMBIO_LINEA;

    printf("Desplegando Valores a que apuntan los Valores-Direcciones de los Apuntadores \n");
    printf("Valor pInteger:%d \n",*pInteger);
    printf("Valor pLong   :%d \n",*pLong);
    printf("Valor pChar   :%c \n",*pChar);
    printf("Valor pFloat  :%f \n",*pFloat);
    printf("Valor pDouble :%e \n",*pDouble);
    //printf("Dirección pVoid   :%d \n",*pVoid);// No es permitido

    // Deja una línea
    CAMBIO_LINEA;

    // Modificamos los valores de las Variables a través de los apuntadores
    *pInteger =45;
    *pLong = 100;
    *pChar = 'Q';
    *pFloat = 556.90;
    *pDouble = 333.99;

    printf("Desplegando los Valores desde la Variables y Apuntadores \n");
    printf("Valor pInteger:%d  Valor xInteger %d\n",*pInteger,xInteger);
    printf("Valor pLong   :%d  Valor xLong    %d\n",*pLong,xLong);
    printf("Valor pChar   :%c  Valor xChar    %d\n",*pChar,xChar);
    printf("Valor pFloat  :%f  Valor xFloat   %f\n",*pFloat,xFloat);
    printf("Valor pDouble :%e  Valor xDouble  %e\n",*pDouble,xDouble);


    // Deja una línea
    CAMBIO_LINEA;

    // Verificando Asignaciones
    printf("Verificando asignaciones\n",*pInteger,pInteger);

    // Asignaciones entre Apuntadores
    pInteger = pLong; // Esto es Permitido

    // Verificamos
    printf("pInteger despues se le asigna pLong %d - %p \n",*pInteger,pInteger);

    // Asignamos a pInteger pFloat
    pInteger = pFloat;  // Esto Falla

    // Verificamos
    printf("pInteger despues se le asigna pFloat %d - %f - %p\n",*pInteger,*pInteger,pInteger);

    // Reasignamos pInteger
    pInteger = &xInteger;

    // Asignamos a pInteger pFloat
    pInteger = (int *)pFloat;  // Esto Falla

    // Verificamos
    printf("pInteger despues se le asigna (int *)pFloat %d - %f - %p\n",*pInteger,*pInteger,pInteger);

    // Asignamos a pFloat
    pInteger = pChar;

    // Verificamos
    printf("pInteger despues se le asigna pChar %d %p\n",*pInteger,pInteger);
    printf("pInteger despues se le asigna pChar %c %p\n",*pInteger,pInteger);

    // Reasignamos pInteger
    pInteger = &xInteger;

    // Asignamos a Double
    pInteger = pDouble;

    // Verificamos
    printf("pInteger despues se le asigna pDouble %e %p\n",*pInteger,pInteger);

    // Asigna pDouble al void
    pVoid = &xInteger;
    pInteger = pVoid;

    // Imprimimos el void omo si fuera ouble
    printf("pInteger despues pVoid=&xInteger %d %p\n",*pInteger,pInteger);

    // Valor de Retorno
	return 0;

}



