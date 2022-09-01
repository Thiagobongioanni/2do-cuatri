/*
 ============================================================================
 Name        : 3-3.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 3-3: Crear una función que permita determinar si un número es par o no. La
función retorna 1 en caso afirmativo y 0 en caso contrario. Probar en el main.
 */

#include <stdio.h>
#include <stdlib.h>

int esParOImpar(int numero);

int main(void)
{
	setbuf(stdout,NULL);

	int numero=0;
	int retorno;

	printf("ingrese un numero: ");
	scanf("%d",&numero);

	retorno=esParOImpar(numero);

	if(retorno==1)
	{
	   printf("el numero ingresado es par.");
	}
	else if(retorno==0)
	{
		printf("el numero ingresado es impar.");
	}

	return 0;
}
int esParOImpar(int numero)
{
    int retorno=-1;

    if((numero%2) == 0)
    {
        retorno=1;
    }
    else
    {
    	retorno=0;
    }

	return retorno;
}
