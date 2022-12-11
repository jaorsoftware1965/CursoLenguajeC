/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 42 - Definiendo tipos con typedef

El Lenguaje C permite simular la definición de nuevos Tipos de Datos
adicionales a los que ya maneja, mediante el uso de la palabra reservada typedef.

Se dice que es una simulación, porque realmente no se está definiendo
un nuevo tipo de dato; sino mas bien que se crea un NOMBRE DE REFERENCIA, a un
Tipo de Dato ya existente.

La palabra clave typedef permite solo asignarle un nuevo nombre a un tipo de datos
ya existente; o a la definición de una estructura, o una unión.

La sintaxis general de uso de typedef es:

typedef tipo nombre;

Donde tipo es cualquier tipo de datos permitido; estructura o union declarada;
y nombre es el nuevo nombre que se desea tenga ese tipo.

Veamos algunos ejemplos:

typedef int entero;
typedef struct
{
   unsigned codigo;
   char nombre[40];
   char apellido[40];
}cliente;


Y entonces podrían crearse nuevas variables de la forma:

entero  a;
cliente b,*c;

*/

// Librerias
#include "stdio.h"
#include "string.h"

// Definimos el cambio de Línea
#define CR printf("\n")
#define FINAL return

// Referencío el Tipo int a entero
typedef int entero;

// Referencío la estructura a persona
typedef struct
{
   char sNombre[40];
   char sApellido[40];
}persona;

// Defino la estructura ALUMNO
struct ALUMNO
{
   entero iCodigo;
   char   sNombre[40];
   char   sApellido[40];
};

// Definiio union para acceso al Sistema
union SYSTEM
{
    // Vectores para representar los Números
    entero iIde;
    char   cNick[8];
};


// Función Principal
int main()
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 42 - Definiendo Tipos \n\n");

    // Defino un Entero usando el Nuevo Tipo
    entero iEdad=24;

    // Imprimo la Edad
    printf("Edad:%d\n",iEdad);
    CR;

    // Defino Personas usando el Nuevo Tipo
    persona xPersona1;

    // Coloco datos
    strcpy(xPersona1.sApellido,"Pérez");
    strcpy(xPersona1.sNombre,"Juan");

    // Imprimo la Persona
    printf("Apellido:%s \n",xPersona1.sApellido);
    printf("Nombre  :%s \n",xPersona1.sNombre);
    CR;

    // Defino alumno usando la Estructura ALUMNO
    typedef struct ALUMNO alumno;

    // Declaro una nueva variable de alumno
    alumno xAlumno;

    // Coloco datos
    xAlumno.iCodigo=3456;
    strcpy(xAlumno.sApellido,"Pérez");
    strcpy(xAlumno.sNombre,"Juan");

    // Imprimo los datos
    printf("Código  :%d \n",xAlumno.iCodigo);
    printf("Apellido:%s \n",xAlumno.sApellido);
    printf("Nombre  :%s \n",xAlumno.sNombre);
    CR;

    // Defino alumno usando la Estructura ALUMNO
    typedef union SYSTEM sistema;

    // Declaro una nueva variable de alumno
    sistema xSistema;

    // Coloco datos
    xSistema.iIde=3456;

    // Imprimo los datos
    printf("Ide  :%d \n",xSistema.iIde);

    // Coloco Datos
    strcpy(xSistema.cNick,"Super");

    // Imprimo
    printf("Nick :%s \n",xSistema.cNick);
    CR;


    // Finaliza retornando 0
    FINAL 0;
}


