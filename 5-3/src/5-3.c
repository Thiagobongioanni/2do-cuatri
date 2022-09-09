/*
 ============================================================================
 Name        : 5-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-3: Realizar una función que reciba como parámetros un array de enteros y
un entero por referencia. La función calculara el máximo valor de ese array y utilizara
el valor por referencia para retornar ese valor.
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 4

int main(void)
{
	setbuf(stdout,NULL);

	int array[TAM];
	int maximo=0;

	    for(int i=0;i<TAM;i++)
        {
	        printf("ingrese numeros: ");
	        scanf("%d",&array[i]);
        }
	    calcularMaximo(array,TAM,&maximo);

	    printf("el numero mas grande es: %d",maximo);

	return 0;
}
