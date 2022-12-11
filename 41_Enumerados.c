/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 41 - Enumerados

Un Enumerado es un forma de definir un tipo de dato, el cual está
formado por un conjunto de constantes enteras con nombre y dentro
de un rango definido de valores.

Los Enumerados se declaran de la siguiente forma:

enum nombre_enum
{
  nombre_constante1[=valor],
  nombre_constante2[=valor],
  .........
  nombre_constanten[=valor]

}lista_de_variables;


Donde:
nombre_enum. Es el nombre del Enumerado que funcionará como un tipo
de dato para poder declarar variables.

nombre_constante. Es el nombre de la constante; si no se indica el valor;
la primer constante inicia con el valor de 0; y así sucesivamente las
siguientes; con un valor + 1 con respecto a su precededor; a menos que se
indique el valor.

Ejemplo:

enum dia
{
   lunes,     // = 0
   martes,    // = 1
   miercoles, // = 2
   jueves,    // = 3
   viernes,   // = 4
   sabado,    // = 5
   domingo    // = 6
}xDia1;

Como podemos observar, la primer constante toma el valor de 0; y el resto
el siguiente valor consecutivo con respecto a su anterior.

En el caso del ejemplo, se declaró al momento la variable xDia1; pero es
posible declarar mas variables posteriormente de la siguiente forma.

enum dia xDia2,xDia3;

Y a estas variables, le podemos asignar los nombres de las constantes:
xDia1 = lunes;
xDia2 = martes;
xDia3 = miercoles;


Otros ejemplos:

enum dia
{
   lunes=1,
   martes,      //=2
   miercoles,   //=3
   jueves,      //=4
   viernes,     //=5
   sabado,      //=6
   domingo      //=7
};

En el caso anterior; la constante lunes toma el valor de 1; y martes 2;
y así sucesivamente con los demás.

enum dia
{
   lunes=1,
   martes,     //=2
   miercoles,  //=3
   jueves=7,
   viernes,    //=8
   sabado,     //=9
   domingo     //=10
};

*/

// Librerías
#include "stdio.h"

// Definimos el cambio de Línea
#define CR printf("\n")

// Enumerado de DIA
enum DIA
{
   Domingo,
   Lunes,
   Martes,
   Miercoles,
   Jueves,
   Viernes,
   Sabado
};

// Campo de Bit para manejar un  Byte
enum MES
{
   Enero=1,
   Febrero,
   Marzo,
   Abril,
   Mayo,
   Junio,
   Julio,
   Agosto,
   Septiembre,
   Octubre,
   Noviembre,
   Diciembre
};

// Funcion Principal
int main()
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 41 - Campos de Bit \n\n");

    // Declaramos un Vector de Cadena con los Nombres de los días
    char strDias[7][10]={"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};

    // Declaramos variable de tipo DIA
    enum DIA xDia;

    // Colocamos el Día
    xDia = Lunes;

    // Imprimimos el día
    printf("Dia Activo:%s\n",strDias[xDia]);
    CR;

    // Asigno otro día
    xDia = Viernes;

    if (xDia==Viernes)
       printf("Gracias a Dios es Viernes \n");
    CR;

    // Asigna el Miércoles
    xDia = Miercoles;

    switch (xDia)
    {
       case Miercoles:
            printf("Mitad de la Semana\n");
            break;
       default:
            printf("No es Miercoles");
    }
    CR;

    // Declaramos un Vector de Cadenas con los Nombres de los Meses
    char strMeses[12][11]={"Enero","Febrero","Marzo","Abril","Mayo","Junio","Julio",
                          "Agosto","Septiembre","Octubre","Noviembre","Diciembre"};

    // Declaramos variable de tipo DIA
    enum MES xMes;

    // Colocamos el Mes
    xMes = Enero;
    xMes = 24;

    // Imprimimos el día
    printf("Mes Activo:%s\n",strMeses[xMes-1]);
    CR;

    // Asigno otro día
    xMes = Marzo;
    xMes = 9;
    if (xMes==Septiembre)
       printf("! Aguas con Septiembre ! \n");
    CR;

    if (Enero==Agosto)
       printf("! Iguales Agosto y Enero ! \n");
    CR;

    // Asigna el Miércoles
    xMes = Agosto;

    printf("El Valor de xMes:%d\n",xMes);

    xMes = Septiembre;

    printf("El Valor de xMes:%d",xMes);

    switch (xMes)
    {
       case 1:
            printf("Agosto\n");
            break;
       default:
            printf("No es Navidad \n");
    }
    CR;

    // Finaliza retornando 0
    return 0;
}

