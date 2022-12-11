/*
Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

anexo01_Fecha y Hora

Para obtener la fecha y hora actual de acuerdo con el tiempo local;
necesitaremos tres funciones: time, localtime y strftime; las cuales
se encuentran definidas en la librería "time.h".

time_t time(time_t *)
La función time recibe como parámetro un puntero a una estructura time_t;
o a NULL o 0, y devolverá el tiempo actual en una variable de tipo "time_t".

struct tm *localtime(time_t *)
A continuación averiguaremos el tiempo local con la función localtime que recibe
por parámetro un puntero a una variable time_t. Esta función devuelve un puntero
hacia una estructura de tipo tm, que es la que utilizaremos en strftime.

size_t strftime(char *,size_t,char *,struct tm *)
Por último, la función strftime formatea una estructura de tipo tm a un formato
legible. El primer parámetro es una cadena, donde quedará la fecha y hora con formato;
el segundo la longitud de esta cadena, el tercero la cadena de formateo y por
último la estructura que contiene el tiempo que queremos formatear.

En la siguiente tabla se observan los códigos de formateo de fechas con strftime.

%a 	Es reemplazado por la abreviatura del nombre del día de la semana de la localidad
%A 	Es reemplazado por el nombre completo del día de la semana de la localidad
%b 	Es reemplazado por la abreviatura del nombre del mes de la localidad
%B 	Es reemplazado por el nombre completo del mes de la localidad
%c 	Es reemplazado por la fecha apropiada y la representación de la hora de la localidad
%d 	Es reemplazado por el día del mes como un número decimal (01-31)
%H 	Es reemplazado por la hora (reloj de 24 horas) como un número decimal (00-23)
%I 	Es reemplazado por la hora (reloj de 12 horas) como un número decimal (01-12)
%j 	Es reemplazado por el día del año como un número decimal (001-366)
%m 	Es reemplazado por el mes como un número decimal (01-12)
%M 	Es reemplazado por el minuto como un número decimal (00-59)
%p 	Es reemplazado por el equivalente de la localidad de las designaciones de AM/PM
    asociadas con un reloj de 12 horas
%S 	Es reemplazado por el segundo como un número decimal (00-61)
%U 	Es reemplazado por el número de la semana del año (el primer Domingo como el
    primer día de la semana 1) como un número decimal (00-53)
%w 	Es reemplazado por el día de la semana como un número decimal (0-6), donde Domingo es 0
%W 	Es reemplazado por el número de la semana del año (el primer Lunes como el primer día
    de la semana 1) como un número decimal (00-53)
%x 	Es reemplazado por la representación apropiada de la fecha de la localidad
%X 	Es reemplazado por la representación apropiada de la hora de la localidad
%y 	Es reemplazado por el año sin siglo como un número decimal (00-99)
%Y 	Es reemplazado por el año con siglo como un número decimal
%Z 	Es reemplazado por el nombre o la abreviatura del huso horario, o por ningunos caracteres si ningún huso horario es determinable
%% 	Es reemplazado por %

char * asctime(struct tm *)
Tambien utilizaremos la función asctime para obtener la Fecha y la Hora en un
formato fijo:"Www Mmm dd hh:mm:ss yyyy\n" (ej: Tue May 15 19:07:04 2008\n).


Esta es la definición de la estructura tm:

struct tm 
{
   int tm_sec;         /* seconds,  range 0 to 59
   int tm_min;         /* minutes, range 0 to 59
   int tm_hour;        /* hours, range 0 to 23
   int tm_mday;        /* day of the month, range 1 to 31
   int tm_mon;         /* month, range 0 to 11
   int tm_year;        /* The number of years since 1900
   int tm_wday;        /* day of the week, range 0 to 6
   int tm_yday;        /* day in the year, range 0 to 365
   int tm_isdst;       /* El indicador de horario de verano 
                         (tm_isdst) es mayor que cero si el 
                         horario de verano está en vigor, 
                         cero si el horario de verano no está 
                         en vigor y menos de cero si la 
                         información no está disponible.
};

*/

// Inlcuimos librerias
#include <stdio.h>
#include <time.h>

// Función Principal
int main()
{
    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Anexo 01 - Fecha y Hora I \n\n");

    // Declaro una variable para la Estructura que maneja el Tiempo
    time_t xTiempo;

    // Declaro un apuntador para la Estructura del Tiempo
    struct tm *pxTiempo;

    // Cadena para obtener la información de la Fecha
    char strFechaHora[120];

    // Obtenemos el Tiempo
    xTiempo = time(NULL);// time(0);

    // Obtenemos el Tiempo Local
    pxTiempo = localtime(&xTiempo);

    // Fomateamos desde el apuntador pxTiempo hacia la cadena
    strftime(strFechaHora, 120, "%H:%M:%S, %A de %B de %Y \n", pxTiempo );

    // Desplegaos la Información usando la Función asctime
    printf( "La Fecha y Hora Local es : %s\n"  , strFechaHora );
    printf( "La Fecha y Hora Local es : %s\n\n", asctime(pxTiempo));

    // Acceder a la Estructura
    printf("La Fecha desde la Estructura: %d.%d.%d \n", pxTiempo->tm_year, pxTiempo->tm_mon, pxTiempo->tm_mday);
    printf("La Fecha desde la Estructura: %d.%d.%d \n", pxTiempo->tm_year+1900, pxTiempo->tm_mon+1, pxTiempo->tm_mday);
    printf("Dia de la Semana: %d \n", pxTiempo->tm_wday);
    printf("Días transcurridos del Año:%d \n", pxTiempo->tm_yday);
    printf("Horario de Verano:%d \n", pxTiempo->tm_isdst);
    printf("Días que faltan del Año:%d\n", 365-pxTiempo->tm_yday);
    printf("La Hora  desde la Estructura: %d:%d:%d \n", pxTiempo->tm_hour, pxTiempo->tm_min, pxTiempo->tm_sec);

    return 0;
}
