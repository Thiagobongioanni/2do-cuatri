/*
 ============================================================================
 Name        : funcion.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int sumar(int num,int num2,int *resultado);
int main(void)
{
	int num=10;
	int num2=20;
	int resultado;
	int error;

	    error=sumar(num,num2,&resultado);
	    if(error != 0)
	    {
	    	printf("error");
	    }


	return EXIT_SUCCESS;
}
int sumar(int num,int num2,int *resultado)
{
	int retorno=0;

	     *resultado=num+num2;

	return retorno;
}
