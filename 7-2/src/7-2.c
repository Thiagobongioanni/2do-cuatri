/*
 ============================================================================
 Name        : 7-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Ejercicio 7-2: Realizar funciones para validar y obtener:
-Alfanumericos, ej. ab555gT6
-teléfonos, ej. 4XXX-XXXX
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int conseguirSoloNumeros(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos);

int main(void)
{
	setbuf(stdout,NULL);

	int numero;

	conseguirSoloNumeros(&numero,"ingrese un numero","no es un numero o supero los limites",0,100,2);


	return 0;
}
int conseguirSoloNumeros(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int bufferInt;
	int retorno=-1;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
	  do{
	     printf("%s",mensaje);
	     scanf("%d",&bufferInt);
	     if(isdigit(bufferInt)==0)
	     {
	    	printf(mensajeError);
	    	reintentos--;
	     }
	     if(bufferInt >=minimo && bufferInt <=maximo)
	     {
	    	*pResultado=bufferInt;
	    	retorno=0;
	    	break;
	     }
	     else
	     {
	    	 printf("%s",mensajeError);
	    	 reintentos--;
	     }
	  }while(reintentos >=0);
	}
	return retorno;
}
