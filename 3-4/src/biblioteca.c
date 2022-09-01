/*
 * biblioteca.c
 *
 *  Created on: 1 sep. 2022
 *      Author: bongi
 */
#include <stdio.h>
#include <stdlib.h>


int mostrarNumero(float numero)
{
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
int pedirYMostrarNumero()
{
	float numero;

		do{
		   numero=ingresarFlotante();
		   if(numero >=0 && numero <100)
		   {
		      mostrarNumero(numero);
		   }
		   else
		   {
			 printf("numero invalido volver a ingresar\n");
		   }
		}while(numero <0 || numero >100);

	return 0;
}

