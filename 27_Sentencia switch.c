/* 
 ---------------------------------------------------------------------
 Curso de C
 Clase 27
 Sentencias de Control de Flujo
 Sentencia switch
 -----------------------------------------------------------------------

 En esta clase continuaremos viendo las sentencias del Control de flujo
 y toca el turno a la sentencia switch.

 Podemos decir que la sentencia switch es una forma avanzada de la
 sentencia if.

 La Sentencia switch evalua una expresión y puede tomar n decisiones de
 flujo con respecto a la expresión evaluada. Su sintaxis es la siguiente:

 switch (expresion) ( hay quien se refieren como variable)
 {
   case exp1:
        sentencias;
        [break;]
   case exp2:
        sentencias;
        [break;]
        ...
   [default:
        sentencias;
        break;]
 }

 Donde expresion debe dar como resultado un valor de tipo char o int, y
 donde exp1, exp2, ..., deben dar como resultado valores correspondientes
 a expresión. Dichas expresiones no pueden repetirse dentro del switch.

 El default es opcional y puede no aparecer, así como los break de los
 case. En caso de que los break, no aparezcan; el programa seguirá ejecutando
 las sentencias hacia abajo, hasta encontrar un break, o hasta encontrar
 la "}" final de la sentencia switch.

 La sentencia switch compara el valor devuelto por expresión, con cada uno de
 los valores indicados con case; y cuando coincida con alguno de ellos, ejecutará
 las instrucciones correspondientes.

 En caso de que no se encuentre ningún valor que coincida, con los case, se ejecutará
 el default (si existe).

 La sentencia switch se sugiere debe ser utilizada cuando se va a evaluar una expresión
 con resultados conocidos y delimitados.


*/
// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{

    // Mandamos un mensaje a la Pantalla
    printf("Curso de C \n");
    printf("Clase 27 - Sentencia switch \n\n");

    // Variable para la Edad
    char   xEdad=15;

    // Variable para Letra
    char   xLetra='v';

    // Mensaje del Programa
    printf("Evaluando la Sentencia switch\n\n");
    printf("Etapa de Estudio según la Edad \n");
    switch(xEdad)
    {

        case  0:printf ("Recien nacido \n");
                break;
                
        case  1:
        case  2:
        case  3:printf("Maternal\n");
                break;

        case  4:
        case  5:printf("Pre-Primaria\n");
                break;

        case  6:
        case  7:
        case  8:
        case  9:
        case 10:
        case 11:printf("Primaria\n");
                break;

        case 12:
        case 13:
        case 14:
                printf("Secundaria\n");
                break;
        case 15:
        case 16:
        case 17:
                printf("Bachillerato\n");
                break;
        case 18:
        case 19:
        case 20:
        case 21:
                printf("Profesional\n");
                break;
        case 22:
        case 23:
                printf("Maestría\n");
                break;
        case 24:
        case 25:
                printf("Doctorado\n");
                break;

        default:
                if (xEdad <= 65)
                   printf("En Producción");
                else
                   printf("En Jubilación\n");
                break;
    }
    printf("\n");


	// Mensaje del Programa
    printf("Tipo de Caracter \n");
    
    xLetra='V';
    switch(xLetra)
    {
        default:
                printf("Otro\n");
                break;  

        case  'a':
        case  'e':
        case  'i':
        case  'o':
        case  'u':
                  printf("Vocal\n");
                  break;
        case  '0':
        case  '1':
        case  '2':
        case  '3':
        case  '4':
        case  '5':
        case  '6':
        case  '7':
        case  '8':
        case  '9':
                  printf("Dígito\n");
                  break;
        case  'b':
        case  'c':
        case  'd':
        case  'f':
        case  'g':
        case  'h':
        case  'j':
        case  'k':
        case  'l':
        case  'm':
        case  'n':
        case  'p':
        case  'q':
        case  'r':
        case  's':
        case  't':
        case  'v':
        case  'w':
        case  'x':
        case  'y':
        case  'z':
                  printf("Consonante\n");
                  break;
        
    }

    // Valor de Retorno
    return 0;

}
