/* ---------------------------------------------------------------------
 Curso de C
 Clase 13
 Operadores Aritméticos
 -----------------------------------------------------------------------

 Los Operadores Aritméticos, tal y como lo indica su nombre; son símbolos
 que se utilizan para realizar operaciones artiméticas. En C, existen los
 operadores correspondientes a las operaciones tradicionales matemáticas:

 OPERADOR    OPERACIÓN           EJEMPLO
 +          Suma                X =  5 + 6; Y = iEdad + 5;
 -          Resta               X = 10 - 9; Y = 20 - iEdad;
 *          Multiplicación      X =  5 * 4; Y = 30 * iEdad;
 /          División            X = 10 / 2; Y = iEdad / 2;
 %          Residuo             X =  6 % 4; Y = iEdad % 3;

 En la tabla anterior, además de las Operaciones Aritméticas tradicionales
 distinguimos una operación especial para la programación y que es llamada
 "módulo"; la cual lo que hace es obtener el residuo o el restante de una
 división. Para esta operación se utiliza el  símbolo "%" tal y como se
 observa en la tabla.

 Los Operadores Aritméticos anteriores son clasificados como "binarios" ya
 que necesitan 2 operandos para realizar una operación. Existen otros ope-
 radores aritméticos, clasificados como "unarios", ya que estos solo nece-
 sitan un operando para realizar su función y son los siguientes:

 OPERADOR   OPERACIÓN           EJEMPLO
 ++         Incrementa en 1     x++; ++x; iEdad++; ++iContador;
 --         Decrementa en 1     x--; --x; iEdad--; --iContador;

 Los anteriores Operadores artiméticos; incrementan (++) y decrementan(--)
 en 1 la variable a la cual son aplicados.
 Cuando el operador precede a la variable; primero se realiza la operación
 aritmética y posteriormente la variable es usada en la instrucción; si el
 operador se encuentra posterior a la variable; primero se utiliza la variable
 en la instrucción; y posteiormente se realiza la operación aritmética.

*/

// Se incluye la librería
#include <stdio.h>


// La función principal con la cual se inicia el programa
int main()
{
	// Declaración de Variables
	int   iPrecio    = 150;
	int   iCantidad  =  20;
	float fImpuesto  = .10;
	float fDescuento = .25;
	float fImporte   = 0;


	// Mandamos un mensaje a la Pantalla
	printf("Curso de C \n");
	printf("Clase 13 - Operadores Aritméticos \n\n");

	// Probando Suma
	printf("0) Cantidad :%d \n",iCantidad);
	iCantidad = iCantidad + 10;
	printf("1) Cantidad :%d \n",iCantidad);
	iCantidad = iCantidad + 10.78;
	printf("2) Cantidad :%d \n",iCantidad);

	// Probando Resta
	iCantidad = iCantidad - 10;
	printf("3) Cantidad :%d \n",iCantidad);
	iCantidad = iCantidad - 10.78; // Redondea
	printf("4) Cantidad :%d \n",iCantidad);

    // Probando Multiplicación
	fImporte = iCantidad * iPrecio;
	printf("1) Importe :%f \n",fImporte);
	fImporte = fImporte - (fImporte * fDescuento);
	printf("2) Importe con Descuento :%f \n",fImporte);
	fImporte = fImporte * ( 1 + fImpuesto);
	printf("3) Importe con Descuento mas Impuesto:%f \n",fImporte);

    
    // Probando División
	fImporte = fImporte / ( 1 + fImpuesto);
	printf("4) Importe con Descuento :%f \n",fImporte);

    // Probando Residuo
    printf ("Residuo de %d / 3 = ",iCantidad);

	iCantidad = iCantidad % 3;
	printf("%d \n",iCantidad++);
	printf("%d \n",iCantidad);

    // Probando los operadores aritmticos unarios
    iCantidad = 10;
    printf("Cantidad: %d \n",iCantidad);
    printf("Cantidad: %d \n",iCantidad++);
    printf("Cantidad: %d \n",iCantidad);
	
    printf("Cantidad * 5 : %d \n",iCantidad++ * 5);
    printf("Cantidad: %d \n",iCantidad);

    printf("Cantidad * 5 : %d \n",--iCantidad * 5);
    printf("Cantidad: %d \n",iCantidad);

	// Valor de Retorno
	return 0;
}