/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 50 - Arreglos como Parámetros

Tal y como vimos en clases anteriores, los arreglos en si; son apuntadores;
por lo cual cuando pasamos un arreglo como parámetro, automáticamente es
pasado por referencia, porque lo que se envía es su dirección de memoria.

En esta clase veremos algunos aspectos interesantes con respecto a como
saber la Longitud de un Vector de Cadena y la Longitud de un Vector de
Enteros.

Sabemos que existe la función strlen; la cual nos permite saber la longitud
de una cadena; pero no nos sirve para saber de cuantos elementos es el
el vector.

Para un Vector de enteros, no existe una función similar; pero con sizeof
veremos como podemos resolver esta problemática; y tambien como cuando los
vectores son pasados a una función; el comportamiento de la función sizeof
ya no es el mismo.

*/

// Definimos el cambio de Línea
#define CR printf("\n")

#include "stdio.h"
#include "stdlib.h"
#include "string.h"

// Función que busca un caracter en una cadena y devuelve su posición
int fnIntCadenaBuscaCaracter(char *strCadena, char xCaracter)
{
   // Variable de Conteo
   int iCuenta;
   int iResult=-1;

   // Información
   printf("Información desde Adentro\n");
   printf("SizeOf de  strCadena: %d \n", sizeof (strCadena) );
   printf("SizeOf de *strCadena: %d \n", sizeof (*strCadena) );
   printf("Elementos en la Cadena: %d\n\n", sizeof (strCadena) / sizeof (*strCadena) );

   // Ciclo para buscar el caracter en el vector
   for (iCuenta=0; iCuenta<strlen(strCadena);iCuenta++)

       // Compara
       if (strCadena[iCuenta]==xCaracter)
       {
          // Coloca la posición en el Resultado
          iResult=iCuenta;

          // Sale del Ciclo
          break;
       }

    // Retorna el valor
    return iResult;
}

// Función que inicializa el arreglo con un caracter en una cadena
void sbCadenaInicializa(char strCadena[], char xCaracter)
{
   // Variable de Conteo
   int iCuenta;

   // Ciclo para inicializar el vector
   for (iCuenta=0; iCuenta < strlen(strCadena);iCuenta++)

       // Coloca el Dato
       strCadena[iCuenta]=xCaracter;

    // Retorna
    return;
}

// Función para Inicializar un vector
void sbVectorInicializa(int iVector[],int iElementos,int iValorInicializa)
{
   // Variable de Conteo
   int iCuenta;

   // Ciclo para buscar en el vector
   for (iCuenta=0; iCuenta<iElementos;iCuenta++)
   {
       // Inicializo
       iVector[iCuenta]=iValorInicializa;
   }

   // Finaliza
   return;
}

// Función para Inicializar un vector
int LongitudVector(int iVector[])
{
   // Finaliza
   return sizeof (iVector) / sizeof (*iVector);
}

// Función que suma un Vector y que devuelve el Mayor y el Menor
int fnIntVectorSumaObtenMayoryMenor(int *iVector,
                                    int  iElementos,
                                    int *iMayor, 
                                    int *iMenor)
{
   // Variable para la Suma
   int iResult=0;

   // Variable de Conteo
   int iCuenta;

   printf("Información desde Adentro\n");
   printf("SizeOf de  iVector: %d \n", sizeof (iVector) );
   printf("SizeOf de *iVector: %d \n", sizeof (*iVector) );
   printf("Elementos en el Vector: %d\n\n", sizeof (iVector) / sizeof (*iVector) );

   // Inicializo el Mayor y el Menor
   *iMayor = iVector[0];
   *iMenor = iVector[0];
   iResult = iVector[0];

   // Ciclo para buscar en el vector
   for (iCuenta=1; iCuenta<iElementos;iCuenta++)
   {
       // Suma el Elemento al Resultado
       iResult = iResult + iVector[iCuenta];

       // Compruebo si es mayor
       if (iVector[iCuenta]>*iMayor)
           // Actualizo el Mayor
           *iMayor = iVector[iCuenta];

       // Compruebo si es menor
       if (iVector[iCuenta]<*iMenor)
           // Actualizo el Mayor
           *iMenor = iVector[iCuenta];
   }

   // Retorno el Resultado
   return iResult;

}




// Función Principal
int main()
{

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 50 - Parámetros Arreglos \n\n");
    CR;

    

    // Defino el Vector
    int iVector[10]={11,-8,3,3,5,1,4,19,-2,5};
    printf("Longitud del Vector %d\n",LongitudVector(iVector));

    // Defino una Cadena
    char strCadena[10]="jaor";

    // Variable para Resultado, Mayor y Menor
    int iResult;
    int iMayor, iMenor;

    // Despliega los Mensajes
    printf("Información desde Afuera\n");
    printf("SizeOf de  strCadena: %d \n", sizeof (strCadena) );
    printf("SizeOf de *strCadena: %d \n", sizeof (*strCadena) );
    printf("Elementos en la Cadena: %d\n\n", sizeof (strCadena) / sizeof (*strCadena) );

    // Función para buscar
    iResult=fnIntCadenaBuscaCaracter(strCadena,'o');
    printf("La letra o se encontró en la cadena %s en la posición:%d\n\n",strCadena,iResult);


    // Elementos en el Vector de Enteros
    printf("Información desde Afuera\n");
    printf("SizeOf de  iVector: %d \n", sizeof (iVector) );
    printf("SizeOf de *iVector: %d \n", sizeof (*iVector) );
    printf("Elementos en el Vector: %d\n\n", sizeof (iVector) / sizeof (*iVector) );

    // Llama la Función para sumar el Vector
    iResult=fnIntVectorSumaObtenMayoryMenor(iVector,10,&iMayor,&iMenor);
    printf("Información de la Suma, Mayor y Menor \n");
    printf("Suma  : %d \n", iResult );
    printf("Mayor : %d \n", iMayor );
    printf("Menor : %d \n\n", iMenor );

    // Inicializa una Cadena con un Caracter
    sbCadenaInicializa(strCadena,'.');
    printf("Cadena Inicializada:%s \n\n",strCadena);

    // Inicializa el Vector con 0
    sbVectorInicializa(iVector,5,0);
    iResult=fnIntVectorSumaObtenMayoryMenor(iVector,10,&iMayor,&iMenor);
    printf("Información de la Suma, Mayor y Menor \n");
    printf("Suma  : %d \n", iResult );
    printf("Mayor : %d \n", iMayor );
    printf("Menor : %d \n\n", iMenor );

    // Finaliza retornando 0
    return 0;
}
