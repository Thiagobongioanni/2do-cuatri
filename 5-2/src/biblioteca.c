/*
 * biblioteca.c
 *
 *  Created on: 8 sep. 2022
 *      Author: bongi
 */

#include <stdio.h>
#include <stdlib.h>

int calcularPromedio(int array[],int tamanio,int* promedio)
{
	int retorno=-1;
    int suma=0;
    int i;

        for(i=0;i<tamanio;i++)
        {
        	suma=suma+array[i];
        	retorno=0;
        }
        *promedio=suma/tamanio;

	return retorno;
}
