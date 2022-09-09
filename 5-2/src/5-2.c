/*
 ============================================================================
 Name        : 5-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-2: Hacer una función que calcule el promedio de los valores del Array que
recibe y me devuelva el promedio.
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
#define TAM 2


int main(void)
{
	setbuf(stdout,NULL);

	int array[TAM];
	int promedio=0;

    for(int i=0;i<TAM;i++)
    {
        printf("ingrese numeros: ");
        scanf("%d",&array[i]);
    }
    calcularPromedio(array,TAM,&promedio);

    printf("el promedio es: %d",promedio);

	return 0;
}

