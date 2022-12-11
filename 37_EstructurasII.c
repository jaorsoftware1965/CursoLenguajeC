/* ---------------------------------------------------------------------
 Curso de Lenguaje C con GNU GCC
 Autor: JAOR
 Derechos Reservados: JAORSOFTWARE
 www.jaorsoftware.com
 Clase 37 -  Estructuras II
 -----------------------------------------------------------------------

Es posible definir variables de tipo Estructuras, dentro de la definición
de una estructura; y de esta forma poder aprovechar las declaraciones previas;
si es que estas se adecuan a la información que queremos establecer.

Ejemplo:

// Declaramos una Estructura para Manejar la Información de una Persona
struct PERSONA
{
   char sNombre[50];
   char sApellido[50];
   char sDireccion[50];
   char sTelefono[50];
   int  iEdad;
};

Una vez que ya tenemos la estructura de PERSONA definida; si queremos
definir una estructura de ALUMNOS; y la información es común; pues simplemente
hacemos uso de la estructura de PERSONA; para no volver a definir lo mismo.

Por ejemplo:

struct ALUMNO
{
   struct PERSONA persona;
   int    iIdentificacion;
   char   sCarrera[50];
}

Definiendo de la forma anterior, aprovechamos la información de la estructura
PERSONA al momento de definir la Estructura de ALUMNOS.

También es posible definir estructuras dentro de estructuras, y en este
caso si es posible omitir, tanto el nombre de la estructura; como las
variables; y la variable definida de la estructura que la incluye, podrá
acceder a la información de ella sin problemas. Ejemplos:

// Definiendo la Estructura de PERSONA
struct PERSONA
{
   char sNombre[50];
   char sApellido[50];
   char sDireccion[50];
   char sTelefono[50];
   int  iEdad;
   struct FECHA
   {
        int iDia;
        int iMes;
        int iAnio;
   }Nacimiento;
};

En el anterior ejemplo, estamos definiendo la estructura PERSONA, y dentro
de ella, estamos definiendo la estructura FECHA; la cual tiene definida
la variable Nacimiento. Si declaramos:

struct PERSONA xPersona;
struct FECHA xFecha;

entonces, para acceder a la información de FECHA, se realizaría a través de
la variable Nacimiento:

xPersona.Nacimiento.iDia=12;


// Definiendo la Estructura de EMPLEADO
struct EMPLEADO
{
   struct PERSONA persona;
   int    iIdentificacion;
   float  fSueldo;
   
   struct
   {
          int iDia;
          int iMes;
          int iAnio;
   };
   char   sArea[50];
};

En la anterior estructura, definimos una interna; la cual no tiene Nombre
ni tampoco variable definida. Para acceder a los elementos, simplemente se
realiza como si fuera un elemento mas; aunque si no se le asigna, nombre;
no tiene sentido su uso. Se accedería así:

xPersona.iDia=13;

*/

// Se incluye la librería
#include <stdio.h>
#include "string.h"

// Definimos una Constante para Imprimir
#define CR printf("\n")

// Definiendo la Estructura de PERSONA
struct PERSONA
{
   char sNombre[50];
   char sApellido[50];
   char sDireccion[50];
   char sTelefono[50];
   int  iEdad;
   struct FECHA
   {
        int iDia;
        int iMes;
        int iAnio;
   }Nacimiento;
};

// Definiendo la Estructura de ALUMNOS
struct ALUMNO
{
   // Hago uso de la Estructura previa PERSONA
   struct PERSONA persona;
   int    iIdentificacion;
   char   sCarrera[50];
};

// Definiendo la Estructura de EMPLEADO
struct EMPLEADO
{
   struct PERSONA persona;
   int    iIdentificacion;
   float  fSueldo;
   struct
   {
          int iDia;
          int iMes;
          int iAnio;
   }fechaIngreso;
   char   sArea[50];
};


//// Definiendo la Estructura de PROFESOR
struct PROFESOR
{
   struct EMPLEADO empleado;
   char   sMateriaImparte[50];
};


// La función principal con la cual se inicia el programa
int main()
{
   // Variable para la espera
   char espera[10];

	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 37 - Estructuras II\n\n");

    // Define a una persona y una fecha
    struct PERSONA xPersona;
    struct FECHA   xFecha;

    // Accedemos a la Información de la Persona
    strcpy(xPersona.sNombre,"Persona");
    strcpy(xPersona.sApellido,"De Tal");
    strcpy(xPersona.sDireccion,"Direccion Persona");
    strcpy(xPersona.sTelefono,"45455444");
    xPersona.iEdad=45;
    xPersona.Nacimiento.iDia  = 14;
    xPersona.Nacimiento.iMes  = 2;
    xPersona.Nacimiento.iAnio = 1990;


    // Imprimiendo la información del Persona
    printf("Informacion de xPersona \n");
    printf("Nombre              :%s \n",xPersona.sNombre);
    printf("Apellido            :%s \n",xPersona.sApellido);
    printf("Direccion           :%s \n",xPersona.sDireccion);
    printf("Telefono            :%s \n",xPersona.sTelefono);
    printf("Edad                :%d \n",xPersona.iEdad);
    printf("Fecha de Nacimiento :%02d.%02d.%d \n",xPersona.Nacimiento.iDia,xPersona.Nacimiento.iMes,xPersona.Nacimiento.iAnio);
    
    gets(espera);

    // Deja un renglón
    CR;

    // Define a un Alumno
    struct ALUMNO xAlumno;

    // Accedemos a la Información de la Persona
    strcpy(xAlumno.persona.sNombre,"Alumno");
    strcpy(xAlumno.persona.sApellido,"De Tal");
    strcpy(xAlumno.persona.sDireccion,"Dirección Alumno");
    strcpy(xAlumno.persona.sTelefono,"111444");
    strcpy(xAlumno.sCarrera,"Informática");
    xAlumno.persona.iEdad=24;
    xAlumno.persona.Nacimiento.iDia=10;
    xAlumno.persona.Nacimiento.iMes=12;
    xAlumno.persona.Nacimiento.iAnio=2000;
    xAlumno.iIdentificacion=7777;

    // Imprimiendo la información del Alumno
    printf("Información de xAlumno \n");
    printf("Nombre              :%s \n",xAlumno.persona.sNombre);
    printf("Apellido            :%s \n",xAlumno.persona.sApellido);
    printf("Dirección           :%s \n",xAlumno.persona.sDireccion);
    printf("Teléfono            :%s \n",xAlumno.persona.sTelefono);
    printf("Edad                :%d \n",xAlumno.persona.iEdad);
    printf("Identificación      :%d \n",xAlumno.iIdentificacion);
    printf("Carrera             :%s \n",xAlumno.sCarrera);
    printf("Fecha de Nacimiento :%02d.%02d.%d \n",xAlumno.persona.Nacimiento.iDia,xAlumno.persona.Nacimiento.iMes,xAlumno.persona.Nacimiento.iAnio);
    gets(espera);

    // Dejamos una Línea
    CR;

    // Define del Empleado
    struct EMPLEADO xEmpleado;

    // Accedemos a la Información del Empleado
    strcpy(xEmpleado.persona.sNombre,"Empleado");
    strcpy(xEmpleado.persona.sApellido,"De Tal");
    strcpy(xEmpleado.persona.sDireccion,"Dirección Empleado");
    strcpy(xEmpleado.persona.sTelefono,"111444");
    strcpy(xEmpleado.sArea,"Contabilidad");
    xEmpleado.iIdentificacion=23456;
    xEmpleado.fSueldo=8000.50;
    xEmpleado.persona.Nacimiento.iDia=13;
    xEmpleado.persona.Nacimiento.iMes=9;
    xEmpleado.persona.Nacimiento.iAnio=2000;
    xEmpleado.persona.iEdad=34;
    xEmpleado.fechaIngreso.iDia=10;
    xEmpleado.fechaIngreso.iMes=12;
    xEmpleado.fechaIngreso.iAnio=1980;

    // Imprimiendo la información del Empleado
    printf("Información de xEmpleado \n");
    printf("Nombre              :%s \n",xEmpleado.persona.sNombre);
    printf("Apellido            :%s \n",xEmpleado.persona.sApellido);
    printf("Dirección           :%s \n",xEmpleado.persona.sDireccion);
    printf("Teléfono            :%s \n",xEmpleado.persona.sTelefono);
    printf("Edad                :%d \n",xEmpleado.persona.iEdad);
    printf("Sueldo              :%f \n",xEmpleado.fSueldo);
    printf("Area                :%s \n",xEmpleado.sArea);
    printf("Fecha de Nacimiento :%02d.%02d.%d \n",xEmpleado.persona.Nacimiento.iDia,xEmpleado.persona.Nacimiento.iMes,xEmpleado.persona.Nacimiento.iAnio);
    printf("Fecha de Ingreso    :%02d.%02d.%d \n",xEmpleado.fechaIngreso.iDia,xEmpleado.fechaIngreso.iMes,xEmpleado.fechaIngreso.iAnio);
    gets(espera);

    // Define del Empleado
    struct PROFESOR xProfesor;

    // Accedemos a la Información del Profesor
    strcpy(xProfesor.empleado.persona.sNombre,"Profesor");
    strcpy(xProfesor.sMateriaImparte,"Programación");
    strcpy(xProfesor.empleado.persona.sApellido,"De Tal");
    strcpy(xProfesor.empleado.persona.sDireccion,"Dirección Profesor");
    strcpy(xProfesor.empleado.persona.sTelefono,"Teléfono Profesor");
    xProfesor.empleado.persona.iEdad=65;
    xProfesor.empleado.iIdentificacion=33333;
    xProfesor.empleado.fSueldo=7500.99;
    // Fecha Nacimiento
    xProfesor.empleado.persona.Nacimiento.iDia=18;
    xProfesor.empleado.persona.Nacimiento.iMes=5;
    xProfesor.empleado.persona.Nacimiento.iAnio=1998;
    // Fecha Ingreso
    xProfesor.empleado.fechaIngreso.iDia=1;
    xProfesor.empleado.fechaIngreso.iMes=1;
    xProfesor.empleado.fechaIngreso.iAnio=1970;

    // Deja de una Línea
    CR;

    // Imprimiendo la información del Profesor
    printf("Información de xProfesor \n");
    printf("Nombre              :%s \n",xProfesor.empleado.persona.sNombre);
    printf("Materia             :%s \n",xProfesor.sMateriaImparte);
    printf("Apellido            :%s \n",xProfesor.empleado.persona.sApellido);
    printf("Dirección           :%s \n",xProfesor.empleado.persona.sDireccion);
    printf("Teléfono            :%s \n",xProfesor.empleado.persona.sTelefono);
    printf("Edad                :%d \n",xProfesor.empleado.persona.iEdad);
    printf("Sueldo              :%f \n",xProfesor.empleado.fSueldo);
    printf("Fecha de Nacimiento :%02d.%02d.%d \n",xProfesor.empleado.persona.Nacimiento.iDia,xProfesor.empleado.persona.Nacimiento.iMes,xProfesor.empleado.persona.Nacimiento.iAnio);
    printf("Fecha de Ingreso    :%02d.%02d.%d \n",xProfesor.empleado.fechaIngreso.iDia,xProfesor.empleado.fechaIngreso.iMes,xProfesor.empleado.fechaIngreso.iAnio);
    gets(espera);


     // Finaliza la aplicación retornando 0
    return 0;

}


