/* ---------------------------------------------------------------------
 Curso de C
 Clase 30
 Sentencias de Ciclos de Repetición
 Sentencia break y continue
 -----------------------------------------------------------------------

 Tal y como vimos en la clase anterior; la sentencia break; nos permite
 salir de un ciclo o de un una sentencia switch; y de esta forma; ya no
 se ejecutan el resto de las instrucciones.

 La sentencia continue; hace que la ejecución del programa, regrese al
 principio de las sentencias del ciclo.

*/
// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{
    // Variable para Contar
    int iCuenta;

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 30 - Sentencia break y continue \n\n");

  // Probando break con while
  while (1)
  {
      printf("Entro al While...\n");
      break;
      printf("Esta sentencia ya no se ejecuta");
  }
  printf("Sali del While ... \n");


  // Imprimimos los primeros 10 números
  printf("Imprimiendo los Numeros del 1 al 10 \n");

  // Ciclo para imprimir los 10 Números
  for (iCuenta=1;iCuenta<=10;iCuenta++)
  {
      if(iCuenta==5)
      {
          printf("Sali del Ciclo con break \n");
          break;
          // Esta sentencia ya no se ejecutará
          printf("Esto ya no se ejecuta");
      }
      printf("[%d] ",iCuenta);
  }

  // Deja una Línea
  printf("\n");

  // Imprimimos los primeros 100 números
  printf("Imprimiendo los Numeros del 1 al 10 \n");

  // Ciclo para imprimir los 10 Números
  for (iCuenta=1;iCuenta<=10;iCuenta++)
  {
      // Verificamos si es 5
      if (iCuenta==5)
      {
         // Mandamos la ejecución al inicio
         continue;

         // Esta sentencia ya no se ejecutará
         printf("Esto ya no se ejecuta");
      }
      printf("[%d] ",iCuenta);
      printf("En un lugar de la mancha ..... \n");
  }

  iCuenta=0;
  while (iCuenta++<5) //0 1 2 4 5 --> 6
  {
       continue;      //1 2 3 5
       iCuenta++;       
  }
  printf("El valor de iCuenta:%d \n",iCuenta);

  // Valor de Retorno
	return 0;

}