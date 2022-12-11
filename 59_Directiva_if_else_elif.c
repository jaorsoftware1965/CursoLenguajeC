/*
Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 59 - Directivas del Pre-Procesador.

warning.
Esta directiva es similar a error, solo que no detiene
la compilación y genera un mensaje "warning" en la
compilación.

if-else-elif.
Estas directivas nos permiten evualar situaciones
condicionales y de acuerdo a ello, indicar que
código del programa se compilará.

Funcionan en forma similar a la instrucciones if,else
del lenguaje.
*/

// Se incluyen las librerías
#include <stdio.h>

// Definimos el Número Máximo de Archivos
#define Windows 0
#define Linux   0
#define Mac     0
#if Windows
    #warning Aplicación para ejecutar en Windows
#else
    #if Linux
        #warning Aplicación para ejecutar en Linux
    #elif Mac
        #warning Aplicación para ejecutar en Macintosh
    #endif
#endif



// Función main con parámetros
int main_59(int argc,char *argv[],char *env[])
{


    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 59 - Directiva if,else,elif. Clase Final del Curso \n\n");

    // Valida el Sistema Operativo con Directivas
    #if Windows
        printf("aplicación para Windows \n");
    #else
        #if Linux
            printf("aplicación para Linux \n");
        #elif Mac
            printf("Aplicación para Macintosh \n");
        #endif
    #endif

//    // Valida el Sistema Operativo
//    if (Windows)
//        printf("aplicación para Windows \n");
//    else
//        if (Linux)
//            printf("aplicación para Linux \n");
//        else
//           if (Mac)
//               printf("Aplicación para Macintosh \n");
//           else
//               printf("Sistema Operativo no Detectado \n");

    // Retorna 0
    return 0;
}
