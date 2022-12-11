/*
Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

anexo01_Fecha y Hora II

En esta clase, veremos como crear una fecha-hora con mktime; como
encontrar la diferencia entre 2 tiempos; y otra función de despliegue
de fecha-hora llamada ctime.

double difftime(time_t, time_t).
Recibe dos variables de tipo time_t, calcula su diferencia y devuelve el
resultado (double) expresado en segundos.

time_t mktime(struct_tm *).
Recibe un puntero a struct tm (struct tm*) y devuelve su conversión al
tipo time t.

char * ctime(time_t *)
Recibe una variable de tipo puntero a time_t (time t*) y devuelve una cadena
con el mismo formato que asctime()

*/

#include <stdio.h>
#include <time.h>

// Función Principal
int main()
{

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Anexo 01 - Fecha y Hora II \n\n");

   // Declaramos 2 variables de Tiempo
   time_t start_t, end_t;

   // Declaramos una variable para obtener la diferencia
   double diff_t;

   // Obtenemos un tiempo inicial
   printf("Obtenemos Tiempo Inicial...\n");
   time(&start_t);
   printf("%d \n",start_t);


   // Pausamos el Programa 3 Segundos
   printf("Pausamos por 3 segundos...\n");
   sleep(3);

   // Obtenemos el Tiempo actual
   time(&end_t);
   printf("%d \n",end_t);

   // Calculamos la diferencia
   diff_t = difftime(end_t, start_t);


   // Desplegamos la diferencia
   printf("Diferencia de tiempo = %f\n", diff_t);


    // Segundo Ejemplo
    int    iSegundos =0;
    time_t xTimeActual;
    time_t xTimeAlarma;
    time_t xExtraTime;
    struct tm *ptmAlarma;

    printf( "Introduzca Segundos de duración del Ciclo: " );
    scanf( "%d", &iSegundos );

    // Obtiene el Tiempo Actual
    xTimeActual=time(NULL);

    // Obtiene el tiempo local
    ptmAlarma = localtime(&xTimeActual);


    // Incrementa los segundos
    ptmAlarma->tm_sec += iSegundos;


    // Crea el Nuevo tiempo
    xTimeAlarma = mktime(ptmAlarma);

    // Despliega el Momento en que finalizará el Ciclo
    printf( "El Ciclo finalizará en: %s\n", ctime(&xTimeAlarma));

    // Despliega el Momento en que finalizará el Ciclo
    printf( "El Ciclo inició     en: %s\n",ctime(&xTimeActual));

    // Ciclo que verifica el tiempo que transcurre
//    while( difftime( xTimeAlarma, ptmAlarma ))
//       ptmAlarma=time(NULL);
//    printf( "El Ciclo finalizó   en: %s\n",ctime(&ptmAlarma));

    xExtraTime = time(NULL);
    while( difftime( xTimeAlarma, xExtraTime ))
       xExtraTime=time(NULL);
    printf( "El Ciclo finalizó   en: %s\n",ctime(&xExtraTime));


    return 0;
}
