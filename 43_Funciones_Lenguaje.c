/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 43 - Funciones del Lenguaje C

Como vimos en la Clase 1, el Lenguaje C está está formado por
32 palabras reservadas; las cuales ya hemos visto el uso de
la mayoría de ellas:

 	auto			break			case				char
	const			continue		default				do
    double			else            enum                extern
    float			for             goto                if
    int				long            register			return
    short			signed			sizeof				static
	struct			switch          typedef             union
	unsigned        void            volatile            while

Estas 32 palabras reservadas, son el Corazón del Lenguaje; aunque
no son suficientes para realizar una aplicación digamos... completa;
o profesional.

Para poder complementar el lenguaje, se desarrollaron; lo que en
programación se conocen como "librerías", en las cuales existen
"funciones" que nos permiten realizar programas mas complejos,
que con tan solo las palabras reservadas; no sería posible.

A la fecha, ya hemos hecho uso de estas librerías; por ejemplo
la libreria "stdio.h" la cual contiene "funciones" para la entrada
y salida de datos; que ya hemos visto y utilizado como lo es la
función "printf".

Hay que recalcar que los archivos ".h" que incluimos en nuestras
aplicaciones, NO CONTIENEN CÓDIGO FUENTE o MÁQUINA al respecto;
simplemente son archivos que contienen la DEFINICIÓN de la función.

El Archivo que contiene el Ćódigo Máquina del estándar ANSI/ISO C
es el archivo "libc.a"; el cual es utilizado para generar el archivo
en código máquina.

Veamos la librería stdio.h que es la que mas hemos utilizado. Esta
librería esta conformada por las siguientes funciones:

clearerr    fclose  feof        ferror      fflush      fgetc       fgetpos
fgets       fopen   formato     fprintf     fputc       fputs       fread
freopen     fscanf  fseek       fsetpos     ftell       fwrite      getc
getchar     gets    perror      printf      putc        putchar     puts
remove      rename  rewind      scanf       setbuf      setybuf     sprintf
sscanf      tmpfile tmpnam      ungetc      vfprintf    vprintf     vsprintf

La Librería "math.h" no está incluida en "libc.a", para lo cual cuando
se enlaza el programa; debemos de incluir la librería "libm.a".

Compilemos el Programa y Probemos
gcc -Wall 43_Funciones_Lenguaje.c -o Test
gcc -Wall 43_Funciones_Lenguaje.c /usr/lib/i386-linux-gnu/libm.a -o Test2

*/


// Definimos el cambio de Línea
#define CR printf("\n")

#include "stdio.h"
#include "math.h"

// Función Principal
int main()
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 43 - Funciones del Lenguaje \n\n");

    double x = 2.0;
    double y = sqrt (x);
    printf ("La raz cuadrada de %f es %f\n", x, y);

    printf("Hola Mundo \n");

    // Finaliza retornando 0
    return 0;

}
