/*
 ============================================================================
 Name        : 5-4.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-4: Pedir 10 números entre -100 y 100, guardarlos en un Array. Determinar:
a) Cantidad de negativos.
b) Sumatoria de los impares.
c) El mayor de los pares.
d) Listado de los números ingresados.
e) Listado de los números mayores a 15.
f) Listado de los números de las posiciones impares.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 6

int main(void)
{
	setbuf(stdout,NULL);

	int array[TAM];
	int contN=0;
	int sumaIm=0;
	int i;
	int banderaMax=1;
	int maximoPar;



	    for(i=0;i<TAM;i++)
	    {

	    	do{

	    	   printf("ingrese numeros entre 100 y -100: ");
	    	   scanf("%d",&array[i]);

	    	}while(array[i]<-100 || array[i]>100);

	    	if(array[i]<0)
	    	{
	    	   contN++;
	    	}
	    	if(!(array[i]%2==0))
	    	{
	    	    sumaIm=sumaIm+array[i];
	    	}
	    	else if(banderaMax==1 || array[i]>maximoPar)
	    	{
	    		  maximoPar=array[i];
	    	      banderaMax=0;
	    	}

	    }

	    printf("la cantidad de negativos es de: %d\n",contN);
	    printf("la suma de los impares da: %d\n",sumaIm);
	    printf("el mayor de los pares es: %d\n",maximoPar);

	    for(i=0;i<TAM;i++)
	    {
	    	//se mezclan los mensajes solucionar (lo demas funciona bien)
	    	printf("los numeros ingresados son: %d\n",array[i]);
	    	if(array[i]>15)
	    	{
	    		printf("los numeros mayores a 15 son: %d\n",array[i]);
	    	}
	    	else if(!(array[i]%2==0))
	    	{
	    		 printf("los numeros impares son: %d\n",array[i]);
	    	}
	    }


	return 0;
}
