/*
Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE

Clase 51 - Matrices y Arreglos de mas de 2 Dimensiones como Parámetros

Para pasar una matriz como parámetro, de igual forma existen
2 formas, las cuales tienen ciertas diferencias.

a) Se coloca la Matriz con los Corchetes, pero la segunda dimensión
debe ser indicada.

b) Es posible indicar unicamente como apuntador la Matriz; pero el
programador es resposables de manejar la variable como un apuntador
y calcular el desplazamiento entre los renglones de la Matriz.

Para Arreglos de Mayores dimensiones, se deberá de respetar la misma
regla; solo la primera dimensión se deja de indicar; las restantes
deben ser indicadas al momento de declarar la función.

*/

// Definimos el cambio de Línea
#define CR printf("\n")

#include "stdio.h"
#include "stdlib.h"
#include "string.h"


// Función para Imprimir un Matriz
void sbMatrizDespliega(int iMatriz[][5], 
                       int iRenglones)
{
   // Variables de Conteo
   int iCtaRen;
   int iCtaCol;

   printf("Desplegando la Matriz ...\n");
   // Ciclo para los Renglones
   for (iCtaRen=0; iCtaRen<iRenglones; iCtaRen++)
   {
      // Ciclo para las Columnas
      for (iCtaCol=0; iCtaCol<5; iCtaCol++)
          printf("%d ",iMatriz[iCtaRen][iCtaCol]);

      // Cambia de Línea
      printf("\n");
   }

   // Cambia de Línea
   printf("\n");
}

// Función para llenar una Matriz con un Valor
void sbMatrizLlena(int iMatriz[][5], 
                  int iRenglones, int iValor)
{
   // Variables de Conteo
   int iCtaRen;
   int iCtaCol;

   // Ciclo para los Renglones
   for (iCtaRen=0; iCtaRen<iRenglones; iCtaRen++)
     {
      // Ciclo para las Columnas
      for (iCtaCol=0; iCtaCol<5; iCtaCol++)
          iMatriz[iCtaRen][iCtaCol]=iValor;

      // Disminuye el Valor
      //iValor--;
     }
}


void sbImprimeNombres(char Nombres[][7],int iElementos)
{
    // Variable de Conteo
    int iCuenta;

    printf("Desplegando los Nombres...\n");
    for (iCuenta=0;iCuenta<iElementos;iCuenta++)
        printf("%s \n",Nombres[iCuenta]);

    // Cambia de Línea
    printf("\n\n");

}

void sbImprimeNombres2(char *Nombres,int iElementos)
{
    // Variable de Conteo
    int iCuenta;

    printf("Desplegando los Nombres...\n");
    for (iCuenta=0;iCuenta<iElementos;iCuenta++)

        // Imprime
        printf("%s \n",Nombres+(iCuenta*8));


    printf("\n");
}

// Función para Imprimir un Arreglo de 3 Dimensiones
void sbArr3dDespliega(int iArreglo3d[][3][3], int iNivel1)
{
   // Variables de Conteo
   int iCtaNiv1;
   int iCtaNiv2;
   int iCtaNiv3;

   // Cambia de Línea
   printf("Desplegando Arreglo de 3 Dimensiones \n");

   // Ciclo para el Primer Nivel
   for (iCtaNiv1=0; iCtaNiv1<iNivel1; iCtaNiv1++)

      // Ciclo para el Segundo Nivel
      for (iCtaNiv2=0; iCtaNiv2<3; iCtaNiv2++)
      {
          // Ciclo para el Tercer Nivel
          for (iCtaNiv3=0; iCtaNiv3<3; iCtaNiv3++)
              printf("%d [%d-%d-%d]",iArreglo3d[iCtaNiv1][iCtaNiv2][iCtaNiv3],iCtaNiv1,iCtaNiv2,iCtaNiv3);

          // Cambia de Línea
          printf("\n");
      }
    // Cambia de Línea
    printf("\n");
}

// Función para Imprimir un Arreglo de 3 Dimensiones
void sbArr3dDespliega2(int *iArreglo3d, 
                       int iNivel1,
                       int iNivel2,
                       int iNivel3)
{
   // Variables de Conteo
   int iCtaNiv1;
   int iCtaNiv2;
   int iCtaNiv3;

   // Cambia de Línea
   printf("Desplegando Arreglo de 3 Dimensiones \n");

   // Ciclo para el Primer Nivel
   for (iCtaNiv1=0; iCtaNiv1<iNivel1; iCtaNiv1++)

      // Ciclo para el Segundo Nivel
      for (iCtaNiv2=0; iCtaNiv2<iNivel2; iCtaNiv2++)
      {
          // Ciclo para el Tercer Nivel
          //for (iCtaNiv3=0; iCtaNiv3<iNivel3; iCtaNiv3++)
          //    printf("%d [%d-%d-%d]",iArreglo3d[iCtaNiv1][iCtaNiv2][iCtaNiv3],iCtaNiv1,iCtaNiv2,iCtaNiv3);

          // Cambia de Línea
          printf("\n");
      }
    // Cambia de Línea
    printf("\n");
}

// Función Principal
int main()
{

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 51 - Parámetros Matriz \n\n");
    CR;

    // Defino el Vector
    int iMatriz[3][5];

    // Defino una Matriz de Char para Manejar un Vector de Cadenas
    char strNombres[2][7]={"Juan","José"};

    // Despliega la MAtriz
    sbMatrizDespliega(iMatriz,3);

    // Llena la Matriz
    sbMatrizLlena(iMatriz,3,7);

    // Despliega la MAtriz
    sbMatrizDespliega(iMatriz,3);

    // Imprime Nombres
    sbImprimeNombres(strNombres,2);

    // Imprime Nombres
    sbImprimeNombres2((char *)strNombres,2);

    // Define un Arreglo de 3 Dimensiones
    int iArr3Dimensiones[3][3][3] = {{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};
    int iArr3Dimensiones2[3][10][100] = {{{1,2,3},{4,5,6},{7,8,9}},{{10,11,12},{13,14,15},{16,17,18}},{{19,20,21},{22,23,24},{25,26,27}}};
    
    // Lo Despliega
    sbArr3dDespliega(iArr3Dimensiones,3);
    sbArr3dDespliega2((int *)iArr3Dimensiones2,3,5,6);

    // Finaliza retornando 0
    return 0;
}

