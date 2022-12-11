/*


Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 53 - Recursividad

La Recursividad es una de las características mas importantes
de una Función pero tambien de las mas complejas para entender
y de saber cuando y como aplicar. Solo la práctica lleva al
buen entendimiento de su uso.

La Recursividad es la capacidad que tiene una funcion de llamarse
a sí misma; es decir; que dentro de su código, existe 1 o mas llamadas
a la misma función.

La recursividad presenta dos problemas:

• La velocidad de ejecución de un algoritmo programado de forma recursiva es
mucho mas lento que el programado de forma iterativa.

• La recursividad, si es excesiva, puede ocasionar el desbordamiento de la pila, y
con ello, el fallo en la ejecución del programa.

El uso de la recursividad es frecuente en campos como la inteligencia
artificial, y en la implementación de ciertos algoritmos; en los
cuales, la implementación es muy difícil en forma iterativa.

¿ Cuando usar recursidad ?
La respuesta que mas se acerca a la verdad es que, debe de utilizarse en donde
se identifica un proceso en el cual la solución involucra llamar de nuevo el mismo
proceso. Ejemplo: el Factorial de un Número

!3 = 3 x 2 x 1
!2 = 2 x 1

De lo anterior podemos redefinir que
!3 = 3 x !2

Al visualizar que para obtener el !3 se involucra el !2; en este momento estamos
obteniendo una solución en la cual se involucra el llamado al mismo proceso.

Suponiendo que la función se llame FnIntFactorial, lo anterior quedaría así:
FnIntFactorial(3)=3 * FnIntFactorial(2);

Otra respuesta es que debe de utilizarse en un proceso que se repite y en el cual
las circunstancias son las mismas aunque con valores distintos.

Ejemplo:
Encontrar los archivos que hay en un directorio y sus directorios internos

/directorio1
     archivo1.txt |
     archivo2.txt >  3 Arvhivos dentro de directorio1
     archivo3.txt |
     /otrodirectorio

En el ejemplo anterior; la  solución es encontrar el numero de archivos
que tiene el directorio1 mas el numero de archivos que tenga el otrodirectorio.
Suponiendo que la función se llamara FnIntCuentaArchivos; la función quedaría así:

FnIntCuentaArchivos(directorio1)= 3 + FnIntCuentaArchivos(otrodirectorio)

Nota. En una función recursiva siempre tiene que haber una opción de retorno
en donde la función NO SE LLAME A SI MISMA; y se debe tener la seguridad que
la función que se llame a si misma, llegará a esta opción.

*/

// Se incluyen las librerías
#include <stdio.h>

int FnIntFactorial(int iNumero)
{
    int xResult=0;
    printf("Calculando factorial de %d \n",iNumero);

    // Verifica si es 0 o 1
    if (iNumero==0 || iNumero==1)
       xResult = 1;
    else
    {
       printf("Ejecuto recursividad de %d * factorial(%d)...\n",iNumero,iNumero-1) ;
       xResult = iNumero * FnIntFactorial(iNumero-1);
       printf("Resultado Pendiente de recursividad de %d * factorial(%d) es:%d\n",iNumero,iNumero-1,xResult);
    }

    // retorna
    return xResult;
}

// Función main con parámetros
int main()
{
    int resultado;

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 53 - Recursividad \n\n");
    printf("\n");

    // Llama a la función    
    resultado =  FnIntFactorial(5);
    printf("El Factorial de 5 es:%d",resultado);

    // Retorna 0
    return 0;
}
