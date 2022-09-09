/*
 ============================================================================
 Name        : 5-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 5-1: Pedir 5 números enteros, guardarlos en un Array. Calcular la sumatorio
de los mismos y mostrar los impares ingresados.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 5

int main(void)
{
	setbuf(stdout,NULL);

	 int numeros[TAM];
	 int i;
	 int suma=0;

	     for(i=0;i<TAM;i++)
	     {
	    	 printf("ingrese un numero: ");
	    	 scanf("%d",&numeros[i]);

	         suma=suma+numeros[i];
	     }
	     printf("la suma de todos los numeros es: %d\n",suma);
	     for(i=0;i<TAM;i++)
	     {
	    	 if(!(numeros[i]%2==0))
	    	 {
                printf("los impares son: %d\n",numeros[i]);
	    	 }
	     }
	return 0;
}
