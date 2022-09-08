/*
 * bibliotecaDesafio.c
 *
 *  Created on: 8 sep. 2022
 *      Author: bongi
 */
#include <stdio.h>
#include <stdlib.h>

int elegirOpcion(int opcion)
{
	printf("\n1)Iniciar  \n2)Procesar\n3)Finalizar\n4)Salir");
	printf("\ningrese una opcion: ");
	scanf("%d", &opcion);

    return opcion;
}

int procesar(int flagInicio,int flagProcesar,int opcion)
{
	if(flagInicio!=1)
	{
	   printf("Debe Iniciar antes de procesar ");
	   opcion=0;
    }
    else
    {
	     printf("\nprocesado\n");
		 flagProcesar=1;
	}
  return flagProcesar;
}
int finalizar(int flagInicio,int flagProcesar,int opcion)
{
	if(flagInicio!=1 || flagProcesar!=1)
	{
	   printf("\nDebe Iniciar y procesar antes de Finalizar\n");
	   opcion=0;
	 }
	 else
	 {
		printf("\nfinalizado\n");
	 }
	return 0;
}
char salir(char respuesta)
{
	printf("esta seguro de querer salir?: ");
	fflush(stdin);
	scanf("%c",&respuesta);

	return respuesta;
}
int iniciar(int flagInicio)
{
	printf("\niniciado\n");
	flagInicio=1;

	return flagInicio;
}


