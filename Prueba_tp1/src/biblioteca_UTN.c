/*
 * biblioteca_UTN.c
 *
 *  Created on: 14 sep. 2022
 *      Author: bongi
 */
#include "biblioteca_UTN.h"
int utn_getNumero(int* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	int bufferInt;
	int retorno=-1;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
	  do{
	     printf("%s",mensaje);
	     scanf("%d",&bufferInt);
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
int utn_getNumeroFlotante(float* pResultado,char* mensaje,char* mensajeError,int minimo,int maximo,int reintentos)
{
	float bufferFloat;
	int retorno=-1;
	if(pResultado != NULL && mensaje != NULL && mensajeError != NULL && minimo <= maximo && reintentos >= 0)
	{
	  do{
	     printf("%s",mensaje);
	     scanf("%f",&bufferFloat);
	     if(bufferFloat >=minimo && bufferFloat <=maximo)
	     {
	    	*pResultado=bufferFloat;
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
int utn_getNombre(char *pResultado,char *mensaje,int tamanio)
{
  int retorno=-1;

     if(pResultado != NULL && mensaje != NULL && tamanio > 0)
     {
	            printf("%s",mensaje);
	            fflush(stdin);
	            fgets(pResultado,tamanio,stdin);
	            printf("pResultado: %s",pResultado);
	            pResultado[strlen(pResultado)-1]='\0';
	            retorno=0;
	   }
  return retorno;
}
