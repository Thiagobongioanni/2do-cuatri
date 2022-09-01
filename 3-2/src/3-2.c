/*
 ============================================================================
 Name        : 3-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-2: Crear una función que pida el ingreso de un flotante y lo retorne.
 */

#include <stdio.h>
#include <stdlib.h>

float ingresarFlotante();

int main(void)
{
	setbuf(stdout,NULL);

	//numero harcodeado
	float numero=1;

	//el numero hardcodeado se remplaza por el numero retornado por la funcion
	numero=ingresarFlotante();

	printf("el numero ingresado es: %.2f",numero);

	return 0;
}
float ingresarFlotante()
{
	float numero=0;

	printf("ingrese un numero flotante: ");
	scanf("%f",&numero);

	return numero;
}
