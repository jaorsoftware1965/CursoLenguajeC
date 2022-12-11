/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE

Clase 39 - Uniones

Una unión es un area de memoria la cual se encuentra compartida por varias variables
que pueden ser de tipos diferentes.

La definición de unión es:

union [nombre_union]
{
    tipo nombre1;
    tipo nombre2;
    ...
    tipo nombreN;
}[var_union];

Como puede observarse su declaración, es parecida a la declaración de una
estructura.

En una unión, todas las variables comparten la misma área de memoria.
Así, si declaramos:

union comparte
{
    char        xChar;   // 1 Byte
    short int   xsInt;   // 2 Bytes
    float       xFloat;  // 4 Bytes
    double      xDouble; // 8 Bytes
}xVar;

La cantidad de memoria reservada por la unión en el caso anterior se encuentra
indicada por la variable que ocupe la mayor cantidad de bytes;
para el caso anterior es 8 bytes. 
"Visualamente" en bits, esto se explicaría así

VARIABLE    MEMORIA QUE OCUPA
            12345634
xChar       00000005
xsInt                00000000
xFloat                        00000000 00000000
xDouble                                         00000000 00000000 00000000 00000000

Ahora ya en forma compartida

            --------------------------------xDouble--------------------------------
            --------------xFloat---------------
            ------xsInt------
            -xChar--
Memoria     00000000 00000000 00000000 00000000 00000000 00000000 00000000 00000000

*/


// Definimos el cambio de Línea
#define CR printf("\n")

// Union para manejar un Número en 4 Bases
struct ACCESO
{
  union
  {
    // Vectores para representar los Números
    int  iIde;
    char cNick[8];
  };

};

// iIde
// N i c  k
// 00000000


// Definimos una Unión para el Manejo del Color
union COLOR
{
    // Variable para el manejo del Color Global
    int   rgb; // 4 Bytes
    struct
    {
       unsigned char  red;  //ff0000
       unsigned char  green;//00ff00
       unsigned char  blue; //0000ff       
    }; // 3
};

// Compartimiento de la memoria
//                            --blue--
//                   -green--
//          ---red--
// ----------------rgb----------------
// 00000000 00000000 00000000 00000000
// 00000000 11111111 11111111 11111111 <= FF FF FF

union comparte
{
    char        xChar;   // 1 Byte
    short int   xsInt;   // 2 Bytes
    float       xFloat;  // 4 Bytes
    double      xDouble; // 8 Bytes
};

#include "stdio.h"
#include "string.h"

// Función Principal
int main()
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 39 - Uniones \n\n");

    // Declaramos una variable para el Numero
    struct ACCESO xAcceso;
    union comparte xVar;

    // Imprimimos tamaño de la Union    
    printf("Tamaño de la Union del Acceso:%d \n",sizeof(xVar));
    printf("Tamaño de la Union del Acceso:%d \n",sizeof(xAcceso));


    // Accedemos por Ide
    xAcceso.iIde  = 456;

    // Imprimimos la Union
    printf("Imprimos el Acceso \n");
    printf("Ide  :%d %p \n",xAcceso.iIde,&xAcceso.iIde);
    printf("Nick :%s %p \n",xAcceso.cNick,&xAcceso.cNick);
    CR;

    // Accedemos por Nick
    strcpy(xAcceso.cNick,"Super");

    // Imprimimos la Union
    printf("Imprimos el Acceso \n");
    printf("Ide  :%d \n",xAcceso.iIde);
    printf("Nick :%s \n",xAcceso.cNick);
    CR;

    // Asignamos el valor a los colores
    union COLOR xColor;
    printf("Tamaño de la Union del Color:%d \n",sizeof(xColor));

    // Definimos los Colores
    xColor.rgb=0xFFFFFF; // Establecemos el Color Blanco

    // Imprimimos el Color y su proporción en RGB
    printf(" El Color establecido a Blanco \n");
    printf(" El Valor del Color RGB    :%d\t %X \n",xColor.rgb,xColor.rgb);
    printf(" El Valor del Color Red    :%d\t\t %X \n",xColor.red,xColor.red);
    printf(" El Valor del Color Green  :%d\t\t %X \n",xColor.green,xColor.green);
    printf(" El Valor del Color Blue   :%d\t\t %X \n\n",xColor.blue,xColor.blue);

    // Colocamos el Color Azul en 0
    xColor.blue=0;
    
    printf(" Ponemos el Color Azul a 0 \n");
    printf(" El Valor del Color RGB    :%d\t %X \n",xColor.rgb,xColor.rgb);
    printf(" El Valor del Color Red    :%d\t\t %X \n",xColor.red,xColor.red);
    printf(" El Valor del Color Green  :%d\t\t %X \n",xColor.green,xColor.green);
    printf(" El Valor del Color Blue   :%d\t\t %X \n\n",xColor.blue,xColor.blue);

    // Colocamos el Color Verde en 0
    xColor.green=0;
    printf(" Ponemos el Color Verde a 0 \n");
    printf(" El Valor del Color RGB    :%d\t %X \n",xColor.rgb,xColor.rgb);
    printf(" El Valor del Color Red    :%d\t\t %X \n",xColor.red,xColor.red);
    printf(" El Valor del Color Green  :%d\t\t %X \n",xColor.green,xColor.green);
    printf(" El Valor del Color Blue   :%d\t\t %X \n\n",xColor.blue,xColor.blue);

    // Colocamos el Color Rojo en 0
    xColor.red=0;
    printf(" Ponemos el Color Rojo a 0 lo que es igual al Color NEGRO: 000000 \n");
    printf(" El Valor del Color RGB    :%d\t\t %X \n",xColor.rgb,xColor.rgb);
    printf(" El Valor del Color Red    :%d\t\t %X \n",xColor.red,xColor.red);
    printf(" El Valor del Color Green  :%d\t\t %X \n",xColor.green,xColor.green);
    printf(" El Valor del Color Blue   :%d\t\t %X \n\n",xColor.blue,xColor.blue);

    // Establecemos una tonalidad de Gris a través de los Colores
    xColor.red=39;
    xColor.green=82;
    xColor.blue=70;
    

    // Imprimimos lo valores
    printf(" Ponemos el Color en Tonalidad Gris \n");
    printf(" El Valor del Color RGB    :%d\t %X \n",xColor.rgb,xColor.rgb);
    printf(" El Valor del Color Red    :%d\t\t %X \n",xColor.red,xColor.red);
    printf(" El Valor del Color Green  :%d\t\t %X \n",xColor.green,xColor.green);
    printf(" El Valor del Color Blue   :%d\t\t %X \n\n",xColor.blue,xColor.blue);

    // Finaliza retornando 0
    return 0;
}
