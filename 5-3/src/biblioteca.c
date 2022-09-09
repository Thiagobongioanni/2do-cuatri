/*
 * biblioteca.c
 *
 *  Created on: 8 sep. 2022
 *      Author: bongi
 */

int calcularMaximo(int array[],int tamanio,int *maximo)
{
	int retorno=-1;
	int banderaMax=1;
	int i;

	    for(i=0;i<tamanio;i++)
	    {
	        if(banderaMax==1 || array[i]>*maximo)
	        {
	        	*maximo=array[i];
	        	banderaMax=0;
	        	retorno=0;
	        }
	    }

	return retorno;
}
