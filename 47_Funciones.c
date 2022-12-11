/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 47 - Funciones

Hasta el momento del curso, hemos hecho uso de funciones que el
mismo lenguaje nos proporciona a través de sus librerías.

En este clase veremos, como podemos escribir nuestras propias
funciones; lo cual es la característica medular de cualquier
lenguaje de programación para poder ejercer su caracteristica
de ser Estructurado y Modular.

Las Funciones facilitan el Desarrollo y Mantenimiento de las
aplicaciones, y ayudan a ahorrar memoria y evita la realización
de trabajo excesivo.

Una misma función puede ser utilizada por diferentes programas,
y por lo tanto no es necesario reescribir el mismo código en
cada programa en que se tenga que realizar la misma función.

El uso adecuado de las Funciones permite el desarrollo de un
código limpio, claro y elegante.

La adecuada división de un programa en funciones constituye un
aspecto fundamental en el desarrollo de programas de cualquier tipo.

Las funciones, ya compiladas, pueden guardarse en librerías las cuales
pueden se guardadas bajo un determinado nombre y ser utilizadas
posteriormente por cualquier otro programador.

Una Función es una agrupación de código a la cual se le asigna
un nombre; y mediante este nombre es posible ejecutar el código
agrupado. La Función debe tener un objetivo claro, el cual puede
ser entendido por el nombre de la función.

La forma general de la definición de una función es la siguiente:

tipo_valor_de_retorno nombre_funcion([parámetros])
{
   // Código de la Función
   [return valor_devolver;]
}

donde:

tipo_valor_de_retorno.
Es el valor que retornará la función. Si la función no retorna
valor alguno; entonces este tipo será void.

nombre_función.
Es el nombre que se asociará al código para que, a través de este,
el código se ejecute

[parámetros].
Un conjunto de variables separadas por ",", que son utilizadas por
la función. Tambien se les conoce como argumentos

Codigo de la Función.
Puede contener declaración de variables y el conjunto de instrucciones
correspondiente; y el valor de retorno de la función, utilizando la
palabra reservada return.

Cuando una función es ejecutada, puede devolver al programa que la ha
llamado un valor (el valor de retorno), cuyo tipo debe ser especificado
en el encabezamiento de la función (si no se especifica, se supone
por predeterminado el tipo int).

La sentencia return permite devolver el control al programa que llama.
Puede haber varias sentencias return en una misma función; y si no hay
ningún return, el control se devuelve cuando se llega al final del
cuerpo de la función.

¿ Cuando convertir un código en una función.?
- Cuando ya es muy largo, y es mejor agruparlo y darle un nombre.
- Cuando este código se repite.

*/

// Librerias
#include "stdio.h"
#include "stdlib.h"

// Definimos el cambio de Línea
#define CR printf("\n")


// Función para imprimir la tabla del 5
void sbTablaDelCinco()
{
   // Variable de Conteo
   int iCuenta;
   printf("Direccion de iCuenta %p\n",&iCuenta);

   printf("Tabla del 5 \n");
   for (iCuenta=1;iCuenta<=10;iCuenta++)
      printf("5 x %d = %d \n",iCuenta,5*iCuenta);

   printf("Direccion de iCuenta %p\n",&iCuenta);
   CR;
}

// Función para Imprimir la Tabla del 7
void sbTablaDelSiete()
{
   // Variable de Conteo
   int iCuenta;
   int iCuenta2=10;

   printf("Direccion de iCuenta %p\n",&iCuenta);
   printf("Direccion de iCuenta %p\n",&iCuenta2);

   printf("Tabla del 7 \n");
   for (iCuenta=1;iCuenta<=10;iCuenta++)
      printf("7 x %d = %d \n",iCuenta,7*iCuenta);
   CR;

   printf("Direccion de iCuenta %p\n",&iCuenta);

   //retorna
   return;
}

// Define una función con parámetros
void sbTablaImprime(int iNumero)
{
   // Variable de Conteo
   int iCuenta;
   printf("Direccion de iCuenta %p\n",&iCuenta);

   // Mensaje de la Tabla
   printf("Tabla del %d \n",iNumero);

   // Ciclo para imprimir la Tabla
   for (iCuenta=1;iCuenta<=10;iCuenta++)
      printf("%d x %d = %d \n",iNumero,iCuenta,iNumero*iCuenta);
   CR;

   printf("Direccion de iCuenta %p\n",&iCuenta);

   //retorna
   return;

}


// Función Principal
int main()
{

    int x=8;
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 47 - Funciones \n\n");
    CR;

    // Ejecuta la función de la Tabla del 5
    sbTablaDelCinco();

    // Ejecuta la función de la Tabla del 7
    sbTablaDelSiete();

    // Ejecuta la Impresión de la tabla del Número indicado
    sbTablaImprime(x);
    sbTablaImprime(5);

    // Finaliza retornando 0
    return 0;
}
