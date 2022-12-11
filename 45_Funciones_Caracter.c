/*

Curso de Lenguaje C con GNU GCC
Autor: JAOR
Derechos Reservados: JAORSOFTWARE
www.jaorsoftware.cu.cc

Clase 45 - Funciones para Caracter

Las funciones para el Manejo de Caracteres, se encuentran definidas
en el archivo "ctype.h".

A continuación veremos algunas de las funciones para caracteres más
utilizadas.

isalnum
int isalnum(int ch);
La función isalnum() devuelve un valor distinto de cero si ch es una letra del
alfabeto o un dígito. En caso contrario, se devuelve un valor distinto de cero.


isalpha
int isalpha(int ch);
La función isalpha() devuelve un valor distinto de cero si ch es una letra del
alfabeto, en cualquier otro caso devuelve cero.


iscntrl
int iscntrl(int ch);
La función iscntrl() devuelve un valor distinto de cero si ch se encuentra entre 0
y 0x1F o si ch es igual a 0x7F (tecla DEL), en cualquier otro caso devuelve cero.


isdigit
int isdigit(int ch);
La función isdigit() devuelve un valor distinto de cero si ch es un dígito (0..9),
en cualquier otro caso devuelve el valor cero.


isgraph
int isgraph(int ch);
La función isgraph() devuelve un valor distinto de cero si ch es cualquier
carácter imprimible distinto del espacio, en cualquier otro caso devuelve cero.


islower
int islower(int ch);
La función islower() devuelve un valor distinto de cero si ch es una carácter
minúscula, en cualquier otro caso devuelve cero.

isprint
int isprint(int ch);
La función isprintf() devuelve un valor distinto de cero si ch es cualquier
carácter imprimible, incluyendo el espacio, en cualquier otro caso devuelve cero.


ispunct
int ispunct(int ch);
La función ispunct() devuelve un valor distinto de cero si ch es un carácter de
puntuación, excluyendo el espacio, en cualquier otro caso devuelve el valor cero.


isspace
int isspace(int ch);
La función isspace() devuelve un valor distinto de cero si ch es un espacio,
tabulador, o carácter de salto de línea, en cualquier otro caso devuelve el 
valor cero.


isupper
int isupper(int ch);
La función isupper() devuelve un valor distinto de cero si ch es una letra
mayúscula, en cualquier otro caso devuelve cero.


isxdigit
int isxdigit(int ch);
La función isxdigit() devuelve un valor distinto de cero si ch es un dígito
hexadecimal, en cualquier otro caso devuelve cero. Un dígito hexadecimal está en uno
de estos rangos: 0 hasta 9, A hasta F y a hasta f.


tolower
int tolower(int ch);
La función tolower() devuelve el equivalente en minúscula de ch, si ch es una
letra mayúscula, en cualquier otro caso se devuelve ch sin modificar.

toupper
int toupper(int ch);
La función toupper() devuelve el equivalente en mayúsculas de ch, si ch es una
letra minúscula, en cualquier otro caso se devuelve ch sin modificar.

*/


// Definimos el cambio de Línea
#define CR printf("\n")

#include "stdio.h"
#include "ctype.h"

// Función Principal
int main()
{

    // Definimos algunas variables de Tipo Caracter
    int  xNumero  ='0';
    char xConson  ='X';
    char xVocal   ='a';
    char xEspacio =' ';
    char xComa    =',';
    char xLinea   ='\n';
    char xNulo    ='\0';

    // Desplegamos Mensaje de la Clase
    printf("Curso de Lenguaje C \n");
    printf("Clase 45 - Funciones de Caracter \n\n");
    CR;

    printf("Evalua isalnum\n");
    printf("Verifica si %c es alfanumérico :%s\n",xNumero ,isalnum(xNumero) ? "True" :"False");
    printf("Verifica si %c es alfanumérico :%s\n",xVocal  ,isalnum(xVocal ) ? "True" :"False");
    printf("Verifica si %c es alfanumérico :%s\n",xConson ,isalnum(xConson) ? "True" :"False");
    printf("Verifica si %c es alfanumérico :%s\n",xEspacio,isalnum(xEspacio)? "True" :"False");
    printf("Verifica si %c es alfanumérico :%s\n",xComa   ,isalnum(xComa)   ? "True" :"False");
    printf("Verifica si %c es alfanumérico :%s\n",xLinea  ,isalnum(xLinea)  ? "True" :"False");
    printf("Verifica si %c es alfanumérico :%s\n",xNulo   ,isalnum(xNulo)   ? "True" :"False");
    CR;

    printf("Evalua isalpha \n");
    printf("Verifica si %c es alfabético :%s\n",xNumero ,isalpha(xNumero) ? "True" :"False");
    printf("Verifica si %c es alfabético :%s\n",xVocal  ,isalpha(xVocal)  ? "True" :"False");
    printf("Verifica si %c es alfabético :%s\n",xConson ,isalpha(xConson) ? "True" :"False");
    printf("Verifica si %c es alfabético :%s\n",xEspacio,isalpha(xEspacio)? "True" :"False");
    printf("Verifica si %c es alfabético :%s\n",xComa   ,isalpha(xComa)   ? "True" :"False");
    printf("Verifica si %c es alfabético :%s\n",xLinea  ,isalpha(xLinea)  ? "True" :"False");
    printf("Verifica si %c es alfabético :%s\n",xNulo   ,isalpha(xNulo)   ? "True" :"False");
    CR;

    printf("Evalua iscntrl \n");
    printf("Verifica si %c es caracter de control :%s\n",xNumero ,iscntrl(xNumero) ? "True" :"False");
    printf("Verifica si %c es caracter de control :%s\n",xVocal  ,iscntrl(xVocal)  ? "True" :"False");
    printf("Verifica si %c es caracter de control :%s\n",xConson ,iscntrl(xConson) ? "True" :"False");
    printf("Verifica si %c es caracter de control :%s\n",xEspacio,iscntrl(xEspacio)? "True" :"False");
    printf("Verifica si %c es caracter de control :%s\n",xComa   ,iscntrl(xComa)   ? "True" :"False");
    printf("Verifica si %c es caracter de control :%s\n",xLinea  ,iscntrl(xLinea)  ? "True" :"False");
    printf("Verifica si %c es caracter de control :%s\n",xNulo   ,iscntrl(xNulo)   ? "True" :"False");
    CR;

    printf("Evalua isdigit \n");
    printf("Verifica si %c es dígito :%s\n",xNumero ,isdigit(xNumero)  ? "True" :"False");
    printf("Verifica si %c es dígito :%s\n",xVocal  ,isdigit(xVocal)   ? "True" :"False");
    printf("Verifica si %c es dígito :%s\n",xConson ,isdigit(xConson)  ? "True" :"False");
    printf("Verifica si %c es dígito :%s\n",xEspacio,isdigit(xEspacio) ? "True" :"False");
    printf("Verifica si %c es dígito :%s\n",xComa   ,isdigit(xComa)    ? "True" :"False");
    printf("Verifica si %c es dígito :%s\n",xLinea  ,isdigit(xLinea)   ? "True" :"False");
    printf("Verifica si %c es dígito :%s\n",xNulo   ,isdigit(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua isgraph \n");
    printf("Verifica si %c es gráfico :%s\n",xNumero ,isgraph(xNumero)  ? "True" :"False");
    printf("Verifica si %c es gráfico :%s\n",xVocal  ,isgraph(xVocal)   ? "True" :"False");
    printf("Verifica si %c es gráfico :%s\n",xConson ,isgraph(xConson)  ? "True" :"False");
    printf("Verifica si %c es gráfico :%s\n",xEspacio,isgraph(xEspacio) ? "True" :"False");
    printf("Verifica si %c es gráfico :%s\n",xComa   ,isgraph(xComa)    ? "True" :"False");
    printf("Verifica si %c es gráfico :%s\n",xLinea  ,isgraph(xLinea)   ? "True" :"False");
    printf("Verifica si %c es gráfico :%s\n",xNulo   ,isgraph(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua islower \n");
    printf("Verifica si %c es islower :%s\n",xNumero ,islower(xNumero)  ? "True" :"False");
    printf("Verifica si %c es islower :%s\n",xVocal  ,islower(xVocal)   ? "True" :"False");
    printf("Verifica si %c es islower :%s\n",xConson ,islower(xConson)  ? "True" :"False");
    printf("Verifica si %c es islower :%s\n",xEspacio,islower(xEspacio) ? "True" :"False");
    printf("Verifica si %c es islower :%s\n",xComa   ,islower(xComa)    ? "True" :"False");
    printf("Verifica si %c es islower :%s\n",xLinea  ,islower(xLinea)   ? "True" :"False");
    printf("Verifica si %c es islower :%s\n",xNulo   ,islower(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua isprint \n");
    printf("Verifica si %c es isprint :%s\n",xNumero ,isprint(xNumero)  ? "True" :"False");
    printf("Verifica si %c es isprint :%s\n",xVocal  ,isprint(xVocal)   ? "True" :"False");
    printf("Verifica si %c es isprint :%s\n",xConson ,isprint(xConson)  ? "True" :"False");
    printf("Verifica si %c es isprint :%s\n",xEspacio,isprint(xEspacio) ? "True" :"False");
    printf("Verifica si %c es isprint :%s\n",xComa   ,isprint(xComa)    ? "True" :"False");
    printf("Verifica si %c es isprint :%s\n",xLinea  ,isprint(xLinea)   ? "True" :"False");
    printf("Verifica si %c es isprint :%s\n",xNulo   ,isprint(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua ispunct \n");
    printf("Verifica si %c es ispunct :%s\n",xNumero ,ispunct(xNumero)  ? "True" :"False");
    printf("Verifica si %c es ispunct :%s\n",xVocal  ,ispunct(xVocal)   ? "True" :"False");
    printf("Verifica si %c es ispunct :%s\n",xConson ,ispunct(xConson)  ? "True" :"False");
    printf("Verifica si %c es ispunct :%s\n",xEspacio,ispunct(xEspacio) ? "True" :"False");
    printf("Verifica si %c es ispunct :%s\n",xComa   ,ispunct(xComa)    ? "True" :"False");
    printf("Verifica si %c es ispunct :%s\n",xLinea  ,ispunct(xLinea)   ? "True" :"False");
    printf("Verifica si %c es ispunct :%s\n",xNulo   ,ispunct(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua isspace \n");
    printf("Verifica si %c es isspace :%s\n",xNumero ,isspace(xNumero)  ? "True" :"False");
    printf("Verifica si %c es isspace :%s\n",xVocal  ,isspace(xVocal)   ? "True" :"False");
    printf("Verifica si %c es isspace :%s\n",xConson ,isspace(xConson)  ? "True" :"False");
    printf("Verifica si %c es isspace :%s\n",xEspacio,isspace(xEspacio) ? "True" :"False");
    printf("Verifica si %c es isspace :%s\n",xComa   ,isspace(xComa)    ? "True" :"False");
    printf("Verifica si %c es isspace :%s\n",xLinea  ,isspace(xLinea)   ? "True" :"False");
    printf("Verifica si %c es isspace :%s\n",xNulo   ,isspace(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua isupper \n");
    printf("Verifica si %c es isupper :%s\n",xNumero ,isupper(xNumero)  ? "True" :"False");
    printf("Verifica si %c es isupper :%s\n",xVocal  ,isupper(xVocal)   ? "True" :"False");
    printf("Verifica si %c es isupper :%s\n",xConson ,isupper(xConson)  ? "True" :"False");
    printf("Verifica si %c es isupper :%s\n",xEspacio,isupper(xEspacio) ? "True" :"False");
    printf("Verifica si %c es isupper :%s\n",xComa   ,isupper(xComa)    ? "True" :"False");
    printf("Verifica si %c es isupper :%s\n",xLinea  ,isupper(xLinea)   ? "True" :"False");
    printf("Verifica si %c es isupper :%s\n",xNulo   ,isupper(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua isxdigit \n");
    printf("Verifica si %c es isxdigit :%s\n",xNumero ,isxdigit(xNumero)  ? "True" :"False");
    printf("Verifica si %c es isxdigit :%s\n",xVocal  ,isxdigit(xVocal)   ? "True" :"False");
    printf("Verifica si %c es isxdigit :%s\n",xConson ,isxdigit(xConson)  ? "True" :"False");
    printf("Verifica si %c es isxdigit :%s\n",xEspacio,isxdigit(xEspacio) ? "True" :"False");
    printf("Verifica si %c es isxdigit :%s\n",xComa   ,isxdigit(xComa)    ? "True" :"False");
    printf("Verifica si %c es isxdigit :%s\n",xLinea  ,isxdigit(xLinea)   ? "True" :"False");
    printf("Verifica si %c es isxdigit :%s\n",xNulo   ,isxdigit(xNulo)    ? "True" :"False");
    CR;

    printf("Evalua tolower \n");
    printf("Minúscula de %c es :%c\n",xNumero  ,tolower(xNumero));
    printf("Minúscula de %c es :%c\n",xVocal   ,tolower(xVocal));
    printf("Minúscula de %c es :%c\n",xConson  ,tolower(xConson));
    printf("Minúscula de %c es :%c\n",xEspacio ,tolower(xEspacio));
    printf("Minúscula de %c es :%c\n",xComa    ,tolower(xComa));
    printf("Minúscula de %c es :%c\n",xLinea   ,tolower(xLinea));
    printf("Minúscula de %c es :%c\n",xNulo    ,tolower(xNulo));
    CR;

    printf("Evalua toupper \n");
    printf("Mayúscula de %c es :%c\n",xNumero  ,toupper(xNumero));
    printf("Mayúscula de %c es :%c\n",xVocal   ,toupper(xVocal));
    printf("Mayúscula de %c es :%c\n",xConson  ,toupper(xConson));
    printf("Mayúscula de %c es :%c\n",xEspacio ,toupper(xEspacio));
    printf("Mayúscula de %c es :%c\n",xComa    ,toupper(xComa));
    printf("Mayúscula de %c es :%c\n",xLinea   ,toupper(xLinea));
    printf("Mayúscula de %c es :%c\n",xNulo    ,toupper(xNulo));
    CR;

    // Finaliza retornando 0
    return 0;
}
