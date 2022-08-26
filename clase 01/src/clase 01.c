/*
 ============================================================================
 Name        : clase.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 1-1: Ingresar dos números enteros entre -50 y 100, sumarlos y mostrar el
resultado. Ejemplo: Si ingresamos 3 y 2 el programa mostrará: “La suma entre 3 y 2
da como resultado 5”

 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

	  int numeroIngresado;
	  int numeroIngresado2;
	  int resultado;

		   	    printf("ingrese un numero: ");
		    	scanf("%d", &numeroIngresado);
		    	while(numeroIngresado > 100 ||numeroIngresado < -50)
		    	{
		    		printf("ingrese un numero valido: ");
		    		scanf("%d", &numeroIngresado);
		    	}
		    	printf("ingrese un segundo numero: ");
		    	scanf("%d", &numeroIngresado2);
		    	while(numeroIngresado2 > 100 || numeroIngresado2 <-50)
		    	{
		    	   printf("ingrese un numero valido: ");
		    	   scanf("%d", &numeroIngresado2);
		    	}


		    resultado = numeroIngresado+numeroIngresado2;
		    printf("la suma entre %d y %d  da como resultado %d \n",numeroIngresado,numeroIngresado2,resultado);

		system("PAUSE");

	return 0;
}
