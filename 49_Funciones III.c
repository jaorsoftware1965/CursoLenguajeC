/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 49 - Parámetros por Valor y por Referencia

Un Parámetro por Valor, es cuando una función recibe el valor del Parámetro para
hacer operaciones con el y aunque lo modifique; el Valor original queda intacto.

Un Parámetro por Referencia, es cuando una función recibe la dirección de memoria
de un valor, y al modificarlo; realmente modifica el original.

A diferencia de otros lenguaje, el lenguaje C, solo permite pasar parámetros a
las funciones por valor.

Si se desea que los cambios efectuados en una función sobre una variable afecten
fuera del alcance de la función, es posible simular un paso por referencia mediante
el uso de punteros.

En efecto, si a una función le pasamos como argumento la dirección de una variable,
cualquier modificación que se realice en esa dirección, afectara, lógicamente, al
valor que tiene la variable original, y con ello, conseguiremos el mismo efecto
que un paso por referencia.

*/

// x = 10
// x = 20

// 00000FE45454 => 5
// 00000FE45454 => 10

// Definimos el cambio de Línea
#define CR printf("\n")

#include "stdio.h"
#include "stdlib.h"

// Función con Parámetro por valor
void SbFuncionValor(int xValor)
{
   // Imprime dirección de Memoria
   printf("Direccion de Memoria de xValor:%p\n",&xValor);

   // Imprimimos el valor
   printf("El valor en Funcion ANTES por Valor:%d\n",xValor);
   
   // Modificamos el Valor
   xValor=20;

   // Imprimimos el valor
   printf("El valor en Funcion DESPUES por Valor:%d\n",xValor);

   // Retornamos
   return;
}

// Función con Parámetro por Referencia
void SbFuncionReferencia(int *xValor)
{
   // Imprimimos el valor
   printf("El valor en Funcion por Referencia Afectando:%d\n",*xValor);
   int x=90;

   // Modificamos el Valor
   xValor = &x;
   *xValor=20;

   // Imprimimos el valor
   printf("El valor en Funcion por Referencia Afectando:%d\n",*xValor);

   // Retornamos
   return;
}

// Función para Sumar 2 Números y que Devuelva la Suma en la función
// la Resta en el Primer Numero y la Multiplicación en el Segundo
int fnIntSumaRestaMulti2Numeros(int *xNum1, int *xNum2)
{
   // Variable para la Suma
   int iSuma;
   int iResta;
   int iMultiplicacion;

   // Obtiene la Suma
   iSuma = *xNum1 + *xNum2;

   // Obtiene la Resta
   iResta = *xNum1 - *xNum2;

   // Obtiene la Multiplicación
   iMultiplicacion = *xNum1 * *xNum2;

   // Coloca la Resta en el Primer Parámetro
   *xNum1=iResta;

   // Coloca la Multiplicación en el Segundo Parámetro
   *xNum2=iMultiplicacion;

   // Devuelve la Suma
   return iSuma;
}

// Función Principal
int main()
{
    char espera[10];

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 49 - Parámetros por Valor y por Referencia \n\n");
    CR;

    // Declaramos Variable
    int iValor=10;
    printf("Direccion de Memoria de iValor:%p\n",&iValor);

    // Llamamos a función por Valor
    SbFuncionValor(iValor);

    // Imprimimos el valor
    printf("El Valor sin Afectar:%d \n",iValor);

    // Llamamos a función por referencia
    SbFuncionReferencia(&iValor);

    // Imprimimos el valor
    printf("El Valor Afectado:%d \n",iValor);

    // Variables para Operacion
    int iValor1=10;
    int iValor2=3;
    int iResult=0;

    // Obtenemos la Suma
    iResult = fnIntSumaRestaMulti2Numeros(&iValor1,&iValor2);

    // Mensaje de la Operación
    printf("La Suma  es:%d\n",iResult);
    printf("La Resta es:%d\n",iValor1);
    printf("La Multi es:%d\n",iValor2);

    // Finaliza retornando 0
    return 0;
}
