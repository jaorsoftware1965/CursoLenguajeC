/* ---------------------------------------------------------------------
 Curso de Lenguaje C con GNU GCC
 Autor: JAOR
 Derechos Reservados: JAORSOFTWARE
 www.jaorsoftware.com
 Clase 33 -  Operaciones con Punteros
 -----------------------------------------------------------------------

 OPERACIONES CON PUNTEROS.

 Como ya hemos visto en la clase anterior, los punteros son una clase de
 variable que almacena direcciones; con las cuales se puede acceder a la
 información que contiene la dirección a la que apuntan.

 Muchas de las operaciones que hemos visto con otras variables; no tienen
 sentido con los punteros; ya que no tendría mucho sentido realizar una
 división o una multiplicación de una dirección de memoria; a menos que
 el resultado se utilizara para desplazarse a alguna dirección específica.

 Las operaciones que son utilizadas con los punteros, son la suma y la resta;
 utilizando los operadores: +, -, ++ y --; solo que estas tienen un manejo
 "especial"; ya que el incremento o el decremento que realizan, se hace en
 base al número de bytes que maneje el tipo de dato. Es decir. Si se tiene
 un apuntador a Integer; por ejemplo; int *pInteger; y se realiza la operación
 de: pInteger++; esto hará que la dirección a la que apunta pInteger se incremente
 en 4; ya que el tipo de dato Integer; utiliza 4 bytes.

 int   x = 10;
 int* pX = &x;

 Lo quw significa que el incremento o decremento se realiza de acuerdo al tipo
 de dato al que apunta el puntero, de ahí la importancia del tipo al momento
 de declarar la variable. Para el apuntador a void, el incremento y decremento
 se realiza de 1 en 1. Veamos esto con la siguiente tabla:

 ---------------------------------------------------------------------
 | Variable         | Long  | Direcc |        Operacion              |
 | Apuntador        | Bytes | Actual |  ++   |  --   |  +3   |  -3   |
 ---------------------------------------------------------------------
 | char      *pChar |  1    | 70010  | 70011 | 70009 | 70013 | 70007 |
 | short int *psInt |  2    | 70010  | 70012 | 70008 | 70016 | 70004 |
 | int       *pInt  |  4    | 70010  | 70014 | 70006 | 70022 | 69998 |
 | void      *pVoid |  1    | 70010  | 70011 | 70009 | 70013 | 70007 |
 ---------------------------------------------------------------------
 
*/

// Se incluye la librería
#include <stdio.h>

#define CR printf("\n")

// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 33 - Operaciones con Punteros \n\n");

    // Declaramos 3 Variables char
	char xChar1='A';
	char xChar2='B';
	char xChar3='C';

    // Declaramos 3 Variables short int
	short int xsInt1=1;
	short int xsInt2=2;
	short int xsInt3=3;

    // Declaramos 3 Variables int
	int xInt1=7;
	int xInt2=8;
	int xInt3=9;

	// Declaramos 4 Variables Apuntador
	char*      pChar = &xChar1; // Apuntando a A
	short int* psInt = &xsInt1; // Apuntando a 1
	int*       pInt  = &xInt1;  // Apuntando a 7
    void*      pVoid = &xInt1;  // Apuntando a 7

    char espera[10];

    // Desplegamos el tamaño en bytes del tipo de dato
    printf ("Desplegamos el tamaño en Bytes de los tipos de datos\n");
    printf ("sizeof(char):%d  sizeof(short int):%d sizeof(int):%d sizeof(void):%d\n",sizeof(char),sizeof(short int),sizeof(int),sizeof(void));
    gets(espera);

    // Dejamos una Línea
    CR;

    // Desplegamos las direcciones correspondientes
    printf ("Desplegamos las direcciones y valores de las Variables\n");
    printf ("Direcciones xChar1:%p %c xChar2:%p %c xChar3:%p %c \n",&xChar1,xChar1,&xChar2,xChar2,&xChar3,xChar3);
    printf ("Direcciones xsInt1:%p %d xsInt2:%p %d xsInt3:%p %d \n",&xsInt1,xsInt1,&xsInt2,xsInt2,&xsInt3,xsInt3);
    printf ("Direcciones xInt1 :%p %d xInt2 :%p %d xInt3 :%p %d \n",&xInt1 ,xInt1 ,&xInt2 ,xInt2 ,&xInt3 ,xInt3);
    gets(espera);
    // Dejamos una Línea
    CR;

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("Desplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("Valor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("Valor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("Valor-Dirección pInt :%p Valor donde apunta:%d \n",pInt ,*pInt);
    printf ("Valor-Dirección pVoid:%p \n",pVoid);
    gets(espera);
    // Dejamos una Línea
    CR;

    // Incrementamos en 1 a cada apuntador
    pChar++;
    psInt++;
    pInt++;
    pVoid++;

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("Desplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("Valor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("Valor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("Valor-Dirección pInt :%p Valor donde apunta:%d \n",pInt ,*pInt);
    printf ("Valor-Dirección pVoid:%p \n",pVoid);
    gets(espera);
    // Dejamos una Línea
    CR;

    // Incrementamos en 1 a cada apuntador
    pChar++;
    psInt++;
    pInt++;

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("Desplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("Valor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("Valor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("Valor-Dirección pInt :%p Valor donde apunta:%d \n",pInt ,*pInt);
    gets(espera);
    // Dejamos una Línea
    CR;

    // Incrementamos en 1 a cada apuntador
    pChar++;
    psInt++;
    pInt++;

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("Desplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("Valor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("Valor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("Valor-Dirección pInt :%p Valor donde apunta:%d \n",pInt ,*pInt);
    gets(espera);
    // Dejamos una Línea
    CR;

    pChar =pChar -5;
    psInt =psInt -5;
    pInt  =pInt  -5;

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("Desplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("Valor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("Valor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("Valor-Dirección pInt :%p Valor donde apunta:%d \n",pInt ,*pInt);
    gets(espera);
    // Dejamos una Línea
    CR;

    // Definimos Vectores
    char      acCaracteres[5]={"ABCDE"};
    short int asiEnteros[5]  ={10,20,30,40,50};
    int       aiEnteros[5]   ={100,200,300,400,500};

    // Asignamos la dirección de los vectores a los apuntadores correspondientes
    pChar = (char *)&acCaracteres; // Warning
    psInt = (short int*)&asiEnteros;
    pInt  = (int*)&aiEnteros;

    pChar = pChar +4;
    psInt = psInt +4;
    pInt  = pInt +4;


    int indice;
    for (indice=0; indice<5; indice++)
    {
        printf("%c %d %d \n",*pChar,*psInt,*pInt);
        pChar--;
        psInt--;
        pInt--;
    }

    // Me desplazo al final
    pChar = pChar + 4;*pChar = 'X';
    psInt = psInt + 4;*psInt = 5;
    pInt  = pInt  + 4;*pInt  = 50;

    printf("Demostracion K :%c %d %d",acCaracteres[4],asiEnteros[4],aiEnteros[4]);
    gets(espera);

    

    

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("Desplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("Valor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("Valor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("Valor-Dirección pInt :%p Valor donde apunta:%d \n",pInt ,*pInt);
    gets(espera);
    // Dejamos una Línea
    CR;

    // Incrementamos en 3 los apuntadores
    pChar =pChar +3;
    psInt =psInt +3;
    pInt  =pInt  +3;

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("Desplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("Valor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("Valor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("Valor-Dirección pInt :%p Valor donde apunta:%d \n",pInt ,*pInt);
    gets(espera);
    // Dejamos una Línea
    CR;

    // Podemos hacer las operaciones normales con los valores apuntados
    *pChar=49;
    *psInt=7;
    *pInt =5;

    // Desplegamos los valores-dirección y valores a los que apuntan los apuntadores
    printf ("xDesplegamos los valores-dirección y valores a los que apuntan los apuntadores\n");
    printf ("xValor-Dirección pChar:%p Valor donde apunta:%c \n",pChar,*pChar);
    printf ("xValor-Dirección psInt:%p Valor donde apunta:%d \n",psInt,*psInt);
    printf ("xValor-Dirección pInt :%p Valor1 donde apunta:%d \n",pInt ,*pInt);
    gets(espera);
    printf("Demostracion :%c %d %d",acCaracteres[3],asiEnteros[3],aiEnteros[3]);
    gets(espera);

   

    return 0;
}

