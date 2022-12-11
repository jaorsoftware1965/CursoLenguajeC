/* ---------------------------------------------------------------------
 Curso de Lenguaje C con GNU GCC
 Autor: JAOR
 Derechos Reservados: JAORSOFTWARE
 www.jaorsoftware.com
 Clase 36 -  Estructuras
 -----------------------------------------------------------------------

Una Estructura es un Conjunto de Variables las cuales se agrupan bajo un
mismo nombre; el nombre de la Estructura, y de la cual posteriormente se
pueden definir variables de esta estructura como si fuera un tipo de dato.

Al momento en que se define la estructura; es posible declarar variables,
o puede realizarse posteriormente.

La sintaxis de la declaración de una estructura en lenguaje C es:
struct [nombre_estructura]
{
   tipo nombre_variable;
   tipo nombre_variable;
   ...
   tipo nombre_variable;
}x;

Es posible no poner el nombre de la estructura (nombre_estructura), si es
que se van a definir variable únicamente al definirla; si se
van a definir variable despues; entonces si se debe de colocar el nombre de
la estructura.

Una vez que se ha definido la variable de la estructura, entonces a través 
de este nombre, es posible acceder las variables que se han definido dentro 
la estructura.

Veamos un ejemplo:

// Declaramos una Estructura para Manejar la Información de una Persona
struct PERSONA
{
   char sNombre[50];
   char sApellido[50];
   char sDireccion[50];
   char sTelefono[50];
   int  iEdad;
}xPersona1,xPersona2;

En el ejemplo anterior, definimos el nombre de la Estructura PERSONA; y
también se definen 2 variables al final de la definición de la estructura:
xPersona1, y xPersona2.

Al haber colocado el nombre de la Estructura; es posible definir mas adelante
variables de esta estructura, de la siguiente forma:

struct PERSONA xPersona3;

Una vez que se han definido las variables de la estructuras; es posible acceder 
a las variables que contiene, utilizando el operador "." de la siguiente forma:

// Accediendo a la información de la Variable
strcpy(xPersona1.sNombre   ,"Juan");
strcpy(xPersona1.sApellido ,"Pérez");
strcpy(xPersona1.sDireccion,"Domicilio Conocido");
strcpy(xPersona1.sTelefono ,"132312312");
xPersona1.iEdad = 45;

*/

// Se incluye la librería
#include "stdio.h"
#include "string.h"

// Constante para cambio de linea
#define CR printf("\n")


// Definiendo la Estructura de PERSONA
struct PERSONA
{
   char sNombre[50];
   char sApellido[50];
   char sDireccion[50];
   char sTelefono[50];
} xPersona1, xPersona2, lstPersonas[10];


// Definiendo la Estructura de ALUMNOS
struct ALUMNOS
{
   int  iIdentificacion;
   char sNombre[50];
   char sApellido[50];
   char sDireccion[50];
   char sTelefono[50];
   char sCarrera[50];
};

// Definiendo la Estructura de Empleados
struct
{
   int  iIdentificacion;
   char sNombre[50];
   char sApellido[50];
   char sDireccion[50];
   char sTelefono[50];
   char sArea[50];
   float fSueldo;
}lstEmpleados[3];

// La función principal con la cual se inicia el programa
int main()
{
	 // Mandamos un mensaje a la Pantalla
 	 printf("Curso de C \n");
 	 printf("Clase 36 - Estructuras \n\n");

    // Define a otra persona
    struct PERSONA xPersona3;

    // Pausar
    char espera[10];

    // Accedemos a la Información de la Persona
    strcpy(xPersona3.sNombre,"Juan");
    strcpy(xPersona3.sApellido,"Bautista");
    strcpy(xPersona3.sDireccion,"Conocido");
    strcpy(xPersona3.sTelefono,"45455444");

    // Imprimiendo la información del Persona
    printf("Informacion de xPersona \n");
    printf("Nombre   :%s \n",xPersona3.sNombre);
    printf("Apellido :%s \n",xPersona3.sApellido);
    printf("Direccion:%s \n",xPersona3.sDireccion);
    printf("Telefono :%s \n",xPersona3.sTelefono);
    gets(espera);

    // Deja un renglón
    CR;

    // Define vector de Alumnos
    struct ALUMNOS lstAlumnos[3];

    // Definimos la Información de los Alumnos
    lstAlumnos[0].iIdentificacion=20;
    strcpy(lstAlumnos[0].sNombre,"Jose");
    strcpy(lstAlumnos[0].sApellido,"Santos");
    strcpy(lstAlumnos[0].sDireccion,"Jerusalem");
    strcpy(lstAlumnos[0].sTelefono,"No habia");
    strcpy(lstAlumnos[0].sCarrera,"Padre de Jesus");

    // Desplegamos Información del Alumno
    printf("Informacion del Primer Alumno de la Lista \n");
    printf("Identificacion:%d \n",lstAlumnos[0].iIdentificacion);
    printf("Nombre        :%s \n",lstAlumnos[0].sNombre);
    printf("Apellido      :%s \n",lstAlumnos[0].sApellido);
    printf("Direccion     :%s \n",lstAlumnos[0].sDireccion);
    printf("Telefono      :%s \n",lstAlumnos[0].sTelefono);
    printf("Carrera       :%s \n",lstAlumnos[0].sCarrera);
    gets(espera);

    // Deja un renglón
    CR;

    // Definimos la Información de Empleados
    lstEmpleados[0].iIdentificacion=20;
    strcpy(lstEmpleados[0].sNombre,"Juan");
    strcpy(lstEmpleados[0].sApellido,"Castellanos");
    strcpy(lstEmpleados[0].sDireccion,"Conocida");
    strcpy(lstEmpleados[0].sTelefono,"45645644333");
    strcpy(lstEmpleados[0].sArea,"Contabilidad");
    lstEmpleados[0].fSueldo=4500.50;
    
    // Desplegamos Información del empleado
    printf("Informacion del Primer Empleado de la Lista \n");
    printf("Identific:%d \n",lstEmpleados[0].iIdentificacion);
    printf("Nombre   :%s \n",lstEmpleados[0].sNombre);
    printf("Apellido :%s \n",lstEmpleados[0].sApellido);
    printf("Direccion:%s \n",lstEmpleados[0].sDireccion);
    printf("Telefono :%s \n",lstEmpleados[0].sTelefono);
    printf("Area     :%s \n",lstEmpleados[0].sArea);
    printf("Sueldo   :%f \n",lstEmpleados[0].fSueldo);
    gets(espera);

     // Finaliza la aplicación retornando 0
    return 0;

}

