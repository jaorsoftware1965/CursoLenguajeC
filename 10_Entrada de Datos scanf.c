/* ---------------------------------------------------------------------
 Curso de C
 Clase 10
 Entrada de datos con scanf
 -----------------------------------------------------------------------

 La función scanf() se usa para leer cualquier tipo de dato predefinido
 desde el teclado, y convertirlo, de forma automática, al formato interno
 adecuado. La función se define como:

 int scanf(const char *formato,argumento[,argumento]);

 El string formato es la cadena de control que indica los datos a leer.
 Dicha cadena de control consta de tres clases de caracteres:

 • Especificadores de formato.
 • Caracteres de espacio en blanco.
 • Caracteres que no sean espacios en blanco.

 Especificadores de formato:
 %[*][ancho][F/N/L/h/l]tipo

 Los especificadores de formato están precedidos por el signo %, y dicen
 a la función que tipo de datos van a ser leídos a continuación. Los
 especificadores de formato validos son:

 Especificador      Descripcion
 %c                 Leer un caracter
 %d                 Leer un entero decimal.
 %i                 Leer un entero decimal.
 %e                 Leer un número en punto flotante.
 %f                 Leer un número en punto flotante.
 %g                 Leer un número en punto flotante.
 %o                 Leer un número octal.
 %s                 Leer una cadena de caracteres.
 %x                 Leer un número hexadecimal.
 %p                 Leer un puntero.
 %n                 Recibe un valor igual al número de carácter leídos.
 %u                 Leer un entero sin signo.

 Además, es posible utilizar los modificadores h (short), l (long) y L.

 El modificador h se puede aplicar a los tipo d, i, o, u y x, e indica
 que el tipo de dato es short int o unsigned short int según el caso.

 El modificador l se puede aplicar a los casos anteriores, indicando
 que el tipo de dato es long int o unsigned long int, pero, además, se
 puede aplicar a los tipos e, f y g, indicando, en tal caso, que el tipo
 de dato es double.

 Por último, el modificador L se puede aplicar a los
 tipos e, f y g, e indica que el tipo de dato es long double.

 Un carácter que no sea espacio en blanco da lugar a que scanf() lea y
 elimine el carácter asociado. Por ejemplo, %d:%d da lugar a que scanf()
 lea primero un int, después lea, y descarte, los dos puntos, y luego lea
 otro int. Si el carácter especificado no se encuentra, scanf() termina
 su ejecución.

 Todas las variables utilizadas para recibir valores (si son necesarias),
 deben ser pasadas por "referencia", o sea, por sus direcciones. Esto
 supone que los argumentos deben ser punteros a las variables.

 El ancho, indica el número de caracteres a aceptar en la captura.

 La presencia del signo * después del signo % y antes del código del
 formato produce que scanf() lea, pero no asigne el valor leído a ninguna
 variable. Por ejemplo:

 int x,y;
 char strMensaje[10]={""};

 scanf("%d%*c%d",&x,&y);
 scanf("%d",&x);
 scanf("%s",strMensaje);


 Lo anterior produce que despues del primer numero capturado; se capture
 un caracter pero que no se almacene en lado alguno

 REGLAS DE USO DE LA FUNCIÓN scanf
 1.- Es necesario crear un cadena de formato constituida por uno o varios
     especificadores("%d %c etc") entrecomillados, los cuales debe de
     corresponder con la lista de variables indicadas en argumentos.
 2.- Las variables deben ir precedidas por & a excepción de las cadenas.
 3.- La función scanf considera en la captura como un dato diferente,
     lo que se encuentra separado por un espacio en blanco, un tabulador o
     si se presiona enter.
 4.- Si los datos de entrada no corresponden con el tipo de dato indicado,
     se finalizará el proceso de asignación y se guardarán los datos para
     el próximo scanf.
 5.- La función scanf devuelve el número de variables leídas, de modo que
     si se introduce un dato que no corresponde a la variable, devolverá
     el valor de 0

*/

// Se incluye la librería
#include <stdio.h>

// La función principal con la cual se inicia el programa
int main()
{
	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 10 - Cadenas \n\n");

    // Definicioń de Datos
    int  intDato1, intDato2, intDatosLeidos;
    char chrCaracter;
    char strCadena[10]; 
    int  iVariablesLeidas=0;

    // Prueba capturando un dato
    printf("Capture un Número:");
    //iVariablesLeidas = scanf("%d",&intDato1);
    iVariablesLeidas = scanf("%d%*c",&intDato1);
    printf("Dato leido:entero:%d \n",intDato1);
    printf("Variables Leidas:%d \n",iVariablesLeidas);

    // Prueba capturando un Número
    printf("Capture un Caracter:");
    iVariablesLeidas = scanf("%c",&chrCaracter);
    printf("Dato leido:caracter:%c %d\n",chrCaracter,chrCaracter);
    printf("Variables Leidas:%d \n",iVariablesLeidas);

    // Prueba capturando un dato
    printf("Capture un Número:");
    scanf("%d",&intDato2);
    printf("Dato leido:entero:%d\n",intDato2);

    // Prueba sin espacios en blanco
    printf("Capture dos Números separados por espacio:");
    intDatosLeidos = scanf("%d %d",&intDato1,&intDato2);
    printf("Datos Leidos:%d\n",intDatosLeidos);
    printf("Los datos leidos son:entero:%d entero:%d \n\n",intDato1,intDato2);

    // Prueba con espacios en blanco
    printf("Capture dos Números separados por espacio:");
    intDatosLeidos = scanf("%d%d",&intDato1,&intDato2);
    printf("Datos Leidos:%d\n",intDatosLeidos);
    printf("Los datos leidos son:entero:%d entero:%d \n\n",intDato1,intDato2);

    // Eludiendo caracteres
    printf("Lee entero, ignora caracter, leer entero, ignora caracter,lee cadena longitud 10\n");
    intDatosLeidos = scanf("%d%*c%d%*c%10s",&intDato1,&intDato2,strCadena);
    printf("Datos Leidos:%d\n",intDatosLeidos);
    printf("Los datos leidos son:entero:%d entero:%d cadena:%s\n\n",intDato1,intDato2,strCadena);

    // Maximo en Lectura
    printf("Lee entero máximo 2 caracteres\n");
    intDatosLeidos=scanf("%2d",&intDato1);
    printf("Datos Leidos:%d\n",intDatosLeidos);
    printf("El dato leido:entero:%d\n\n",intDato1);

    // Leyendo mas datos
    printf("---------------Lee caracter, entero, entero y cadena\n");
    intDatosLeidos=scanf("%c %d %d %s",&intDato1,&chrCaracter,&intDato2,strCadena);
    printf("Datos Leidos:%d\n",intDatosLeidos);
    printf("Los Datos Leidos:entero:%d caracter:%c entero:%d cadena:%s\n\n",intDato1,chrCaracter,intDato2,strCadena);


    // Leyendo con caracteres especiales
    printf("Lee entero, caracter, entero y cadena separados por :\n");
    intDatosLeidos=scanf("%d:%c:%d:%s",&intDato1,&chrCaracter,&intDato2,strCadena);
    printf("Datos Leidos:%d\n",intDatosLeidos);
    printf("Los Datos Leidos:entero:%d caracter:%c entero:%d cadena:%s\n\n",intDato1,chrCaracter,intDato2,strCadena);


    // Leyendo con enter's
    printf("Lee entero, caracter, entero y cadena separados por enter\n");
    intDatosLeidos=scanf("%d\n%c\n%d\n%s",&intDato1,&chrCaracter,&intDato2,strCadena);
    printf("Datos Leidos:%d\n",intDatosLeidos);
    printf("Los Datos Leidos:entero:%d caracter:%c entero:%d cadena:%s\n\n",intDato1,chrCaracter,intDato2,strCadena);

    // Ciclo que valida capturas correctas de un dato
    printf("Captura Enteros o cualquier letra para finalizar ciclo:");
    while (scanf("%d",&intDato1)>0)
       printf("Dato capturado válido %d\n",intDato1);


    // Valor de Retorno
	return 0;
}
