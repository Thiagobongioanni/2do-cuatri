/*
 ============================================================================
 Name        : desafio-menu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
Realizar un Menú que muestre las opciones:
        a-Iniciar
        b-Procesar
        c-Finalizar
        d-Salir
Nota:
-Antes de salir preguntar si "esta seguro que desea salir?s/n"
-Si Procesa sin haber Iniciado, debe avisar "Debe Iniciar antes de Procesar" y no deja continuar
-Si se Finaliza antes de Iniciar debe avisar "Debe Iniciar antes de Finalizar" y no deja continuar
-Si se Finaliza antes de Procesar debe avisar "Debe Procesar antes de Finalizar" y no deja continuar

 */

#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaDesafio.h"

int main(void)
{
	int opcion;
	int flagInicio=0;
	int flagProcesar=0;
	char respuesta='n';

	   system("CLS");
	   do{
		  opcion=elegirOpcion(opcion);

		  switch(opcion)
		  {
		     case 1:
		    	  flagInicio=iniciar(flagInicio);
		     break;

		     case 2:
		    	  flagProcesar=procesar(flagInicio,flagProcesar,opcion);
		     break;

		     case 3:
		    	  finalizar(flagInicio,flagProcesar,opcion);
		     break;

		     case 4:
		    	  respuesta=salir(respuesta);
		     break;

		     default:
		    	     printf("\nopcion no valida");
		     break;
		  }
		}while(respuesta!='s');

	return 0;
}
