/*
 ============================================================================
 Name        : 2-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 2-3: Usando el concepto de operadores l�gicos booleanos en el condicional.
Solicitar un n�mero al usuario e informar si el n�mero es par o impar.
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero=0;

	printf("ingrese un numero: ");
	scanf("%d",&numero);
	if((numero%2) == 0)
	{
		printf("el numero %d es par.",numero);
	}
	else
	{
		printf("el numero %d es impar.",numero);
	}

	return 0;
}
