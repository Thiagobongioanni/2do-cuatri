/*
 ============================================================================
 Name        : 3-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 3-1: Crear una funci�n que muestre por pantalla el n�mero entero que
recibe como par�metro.
 */

#include <stdio.h>
#include <stdlib.h>

int mostrarNumero(int numero);

int main(void)
{
	setbuf(stdout,NULL);

	int numero=15;

	    mostrarNumero(numero);

	return 0;
}
int mostrarNumero(int numero)
{
	printf("el numero ingresado es: %d",numero);

	return 0;
}
