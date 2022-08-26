/*
 ============================================================================
 Name        : 1-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
ingresar 3 números y mostrar cuál de los tres es el mayor.
Ejemplo: Si ingresamos 5, 9 y 3 el programa mostrará: “El mayor de los números es el
segundo: 9”
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	int numero1=0;
	int numero2=0;
	int numero3=0;

	printf("ingrese el primer numero: ");
	scanf("%d",&numero1);
	printf("ingrese el segundo numero: ");
	scanf("%d",&numero2);
	printf("ingrese el tercer numero: ");
	scanf("%d",&numero3);

	if(numero1 > numero2 && numero1>numero3)
	{
		printf("el mayor de los numeros es el: %d",numero1);
	}
	else if(numero2 > numero1 && numero2>numero3)
	{
			printf("el mayor de los numeros es el: %d",numero2);
	}
	else if(numero3 > numero2 && numero3>numero1)
	{
			printf("el mayor de los numeros es el: %d",numero3);
	}
	else
	{
		printf("todos los numeros son iguales.");
	}

	return 0;
}
