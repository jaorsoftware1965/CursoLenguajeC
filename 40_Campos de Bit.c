/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE

Clase 40 - Campos de Bit

Un campo de bit es la definición de una estructura especial,
dentro de la cual existen elementos que hacen referencia a un
bit dentro de la memoria.

La declaración de un Campo de Bit se realiza de igual forma que
una estructura, solo que los elementos que lo integran; tienen
una defición distinta; en la cual se indica; a cuantos bits hará
referencia la variable. Veamos la definición:

struct nombre_campo_bit
{
   tipo   nombre1 : longitud;
   tipo [nombre2] : longitud;
   ...
   tipo [nombreN] : longitud;
}variables_campo_bit;


Como se observa; en la declaración de las variables; posteriormente
se escriben ":" seguido de la longitud en bits que va a manejar
la variable. Ejemplo:

struct TEST
{
   unsigned a:1;
   signed   b:2;
   unsigned  :4;  // Estos se van a ignorar
   unsigned c:1;
};

Dependiendo del Número de bit's que se le asigne a cada variable,
es el valor que puede ser asignado. Por ejemplo; si es un solo bit;
entonces solo puede ser asignado 0 y 1. Si fuera 2 bit's; solo pudiera
asignar 0,1,2,3; ya que 3 es el valor mas grande que puede representarse
con 2 bits; y así sucesivamente.

Los tipos aplicables son los Integer; no es posible utilizar
float y double.

Existen muchos textos al respecto, que indican que el operador sizeof,
no es posible usarlo con estas estructuras; pero en esta clase demostraremos
que si es posible; y que su comportamiento varía de acuerdo al tipo de
dato que se asigne en los elementos del campo de bit.

*/

#include "stdio.h"

// Definimos el cambio de Línea
#define CR printf("\n")

// Campo de Bit de TEST
struct TEST
{
   unsigned char a:1;
   unsigned char b:2;
   unsigned char  :4;
   unsigned char c:1;
};

// Campo de Bit para manejar un  Byte
struct BYTE
{
   unsigned char bit1:1;
   unsigned char bit2:1;
   unsigned char bit3:1;
   unsigned char bit4:1;
   unsigned char bit5:1;
   unsigned char bit6:1;
   unsigned char bit7:1;
   unsigned char bit8:1;
};

// Estructura para manejar un Word
struct WORD
{
   unsigned char nible1:4;
   unsigned char nible2:4;
   unsigned char byte2 :8;
};

// Define Doble Word
struct DWORD
{
   unsigned char byte1:8;
   unsigned char byte2:8;
   unsigned char byte3:8;
   unsigned char byte4:8;
};

// Función Principal
int main()
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 40 - Campos de Bit \n\n");

   // Definimos la Variable
   struct TEST xTest;

   // Imprimimos el sizeof de xByte
   printf("El sizeof de xTest :%d \n",sizeof(xTest));

   // Iniciamos en
   xTest.a=0;
   xTest.b=0;
   xTest.c=0;
   printf("xTest  : %d \n",xTest);
   printf("xTest.a: %d \n",xTest.a);
   printf("xTest.b: %d \n",xTest.b);
   printf("xTest.c: %d \n",xTest.c);
   CR;

   // cxxxxbba
   // 10000111
   //10
   // 135 + 48 = 183
   xTest.a=1;
   printf("xTest  : %d \n",xTest);
   printf("xTest.a: %d \n",xTest.a);
   printf("xTest.b: %d \n",xTest.b);
   printf("xTest.c: %d \n",xTest.c);
   CR;

   xTest.b=1;
   printf("xTest  : %d \n",xTest);
   printf("xTest.a: %d \n",xTest.a);
   printf("xTest.b: %d \n",xTest.b);
   printf("xTest.c: %d \n",xTest.c);
   CR;

   xTest.b=2;
   printf("xTest  : %d \n",xTest);
   printf("xTest.a: %d \n",xTest.a);
   printf("xTest.b: %d \n",xTest.b);
   printf("xTest.c: %d \n",xTest.c);
   CR;

   xTest.b=3;
   printf("xTest  : %d \n",xTest);
   printf("xTest.a: %d \n",xTest.a);
   printf("xTest.b: %d \n",xTest.b);
   printf("xTest.c: %d \n",xTest.c);
   CR;

   xTest.c=1;
   xTest.a=0;
   xTest.b=0;
   printf("xTest  : %d \n",xTest);
   printf("xTest.a: %d \n",xTest.a);
   printf("xTest.b: %d \n",xTest.b);
   printf("xTest.c: %d \n",xTest.c);
   CR;

   // Esto ya es un error porque refleja 0
   xTest.c=2;
   printf("xTest  : %d \n",xTest);
   printf("xTest.a: %d \n",xTest.a);
   printf("xTest.b: %d \n",xTest.b);
   printf("xTest.b: %d \n",xTest.c);
   CR;

   // Variable Byte
   struct BYTE xByte;

   // Imprimimos el sizeof de xByte
   printf("El sizeof de xByte :%d \n",sizeof(xByte));

   // Inicializamos todo
   xByte.bit1=0;
   xByte.bit2=0;
   xByte.bit3=0;
   xByte.bit4=0;
   xByte.bit5=0;
   xByte.bit6=0;
   xByte.bit7=0;
   xByte.bit8=0;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xByte     :%d \n",xByte);
   printf("El Valor del xByte.bit1:%d \n",xByte.bit1);
   printf("El Valor del xByte.bit2:%d \n",xByte.bit2);
   printf("El Valor del xByte.bit3:%d \n",xByte.bit3);
   printf("El Valor del xByte.bit4:%d \n",xByte.bit4);
   printf("El Valor del xByte.bit5:%d \n",xByte.bit5);
   printf("El Valor del xByte.bit6:%d \n",xByte.bit6);
   printf("El Valor del xByte.bit7:%d \n",xByte.bit7);
   printf("El Valor del xByte.bit8:%d \n",xByte.bit8);
   CR;

   // Colocamos Valores
   xByte.bit1=1;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xByte     :%d \n",xByte);
   printf("El Valor del xByte.bit1:%d \n",xByte.bit1);
   printf("El Valor del xByte.bit2:%d \n",xByte.bit2);
   printf("El Valor del xByte.bit3:%d \n",xByte.bit3);
   printf("El Valor del xByte.bit4:%d \n",xByte.bit4);
   printf("El Valor del xByte.bit5:%d \n",xByte.bit5);
   printf("El Valor del xByte.bit6:%d \n",xByte.bit6);
   printf("El Valor del xByte.bit7:%d \n",xByte.bit7);
   printf("El Valor del xByte.bit8:%d \n",xByte.bit8);
   CR;


   // Colocamos Valores
   xByte.bit8=1;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xByte     :%d \n",xByte);
   printf("El Valor del xByte.bit1:%d \n",xByte.bit1);
   printf("El Valor del xByte.bit2:%d \n",xByte.bit2);
   printf("El Valor del xByte.bit3:%d \n",xByte.bit3);
   printf("El Valor del xByte.bit4:%d \n",xByte.bit4);
   printf("El Valor del xByte.bit5:%d \n",xByte.bit5);
   printf("El Valor del xByte.bit6:%d \n",xByte.bit6);
   printf("El Valor del xByte.bit7:%d \n",xByte.bit7);
   printf("El Valor del xByte.bit8:%d \n",xByte.bit8);
   CR;

   // Colocamos Valores
   xByte.bit8=0;

   // Colocamos Valores
   xByte.bit1=-1;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xByte     :%d \n",xByte);
   printf("El Valor del xByte.bit1:%d \n",xByte.bit1);
   printf("El Valor del xByte.bit2:%d \n",xByte.bit2);
   printf("El Valor del xByte.bit3:%d \n",xByte.bit3);
   printf("El Valor del xByte.bit4:%d \n",xByte.bit4);
   printf("El Valor del xByte.bit5:%d \n",xByte.bit5);
   printf("El Valor del xByte.bit6:%d \n",xByte.bit6);
   printf("El Valor del xByte.bit7:%d \n",xByte.bit7);
   printf("El Valor del xByte.bit8:%d \n",xByte.bit8);
   CR;




   // Variable Byte
   struct WORD xWord;

   // Imprimimos el sizeof de xByte
   printf("El sizeof de xWord :%d \n",sizeof(xWord));

   // Inicializamos todo
   xWord.nible1=0;
   xWord.nible2=0;
   xWord.byte2=0;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xWord      :%d \n",xWord);
   printf("El Valor del xWord.byte1:%d \n",xWord.nible1);
   printf("El Valor del xByte.byte2:%d \n",xWord.nible2);
   printf("El Valor del xByte.byte2:%d \n",xWord.byte2);
   CR;

   // 1111
   // Inicializamos todo
   xWord.nible1=15;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xWord      :%d \n",xWord);
   printf("El Valor del xWord.nible1:%d \n",xWord.nible1);
   printf("El Valor del xByte.nible2:%d \n",xWord.nible2);
   printf("El Valor del xByte.byte2:%d \n",xWord.byte2);
   CR;

   // 1111 1111
   // Inicializamos todo
   xWord.nible2=15;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xWord      :%d \n",xWord);
   printf("El Valor del xWord.nible1:%d \n",xWord.nible1);
   printf("El Valor del xByte.nible2:%d \n",xWord.nible2);
   printf("El Valor del xByte.byte2:%d \n",xWord.byte2);
   CR;

   // 1111
   // Inicializamos todo
   xWord.byte2=255;

   // Imprimimos el Byte y los Nibbles
   printf("El Valor del xWord      :%d \n",xWord);
   printf("El Valor del xWord.nible1:%d \n",xWord.nible1);
   printf("El Valor del xByte.nible2:%d \n",xWord.nible2);
   printf("El Valor del xByte.byte2:%d \n",xWord.byte2);
   CR;



    // Variable Byte
    struct DWORD xdWord;

    // Imprimimos el sizeof de xByte
    printf("El sizeof de xdWord :%d \n",sizeof(xdWord));

    // Inicializamos todo
    xdWord.byte1=0;
    xdWord.byte2=0;
    xdWord.byte3=0;
    xdWord.byte4=0;

    // Imprimimos el Byte y los Nibbles
    printf("El Valor del xdWord      :%d \n",xdWord);
    printf("El Valor del xdWord.byte1:%d \n",xdWord.byte1);
    printf("El Valor del xdWord.byte2:%d \n",xdWord.byte2);
    printf("El Valor del xdWord.byte3:%d \n",xdWord.byte3);
    printf("El Valor del xdWord.byte4:%d \n",xdWord.byte4);
    CR;

    // Inicializamos todo
    xdWord.byte1=128;
    xdWord.byte2=128;
    xdWord.byte3=128;
    xdWord.byte4=128;

    // Imprimimos el Byte y los Nibbles
    printf("El Valor del xdWord      :%u \n",xdWord);
    printf("El Valor del xdWord.byte1:%d \n",xdWord.byte1);
    printf("El Valor del xdWord.byte2:%d \n",xdWord.byte2);
    printf("El Valor del xdWord.byte3:%d \n",xdWord.byte3);
    printf("El Valor del xdWord.byte4:%d \n",xdWord.byte4);
    CR;


    // Finaliza retornando 0
    return 0;
}
