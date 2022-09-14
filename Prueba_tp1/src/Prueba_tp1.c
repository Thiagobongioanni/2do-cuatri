/*
 ============================================================================
 Name        : Prueba_tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_UTN.h"
#include "bibliotecaGeneral.h"

int main(void)
{

	  setbuf(stdout,NULL);
	  system("CLS");

	  float costoHospedaje=0;
	  float costoComida=0;
	  float costoTransporte=0;
	  float total=0;
      int opcion;
      int opcionCostos=0;

		do
		{
	      printf("\n1)Ingresar costos de mantenimiento  \n(Costo de hospedaje:%.2f)\n(Costo de comida:%.2f)\n(Costo de transporte:%.2f)"
	    		  "\n2)Carga de jugadores"
	    		  "\n3)Realizar todos los calculos"
	    		  "\n4)Informar resultados"
	    		  "\n5)Salir\n",costoHospedaje,costoComida,costoTransporte);

		  printf("\ningrese una opcion: ");
		  scanf("%d", &opcion);

		  switch(opcion)
		  {
		     case 1:
		    	 ingresoCostos(opcionCostos,&costoHospedaje,&costoComida,&costoTransporte);
		     break;

		     case 2:


		     break;

		     case 3:

                  total=costoHospedaje+costoComida+costoTransporte;
                  printf("calculos realizados");

		     break;


		     case 4:

		    	 printf("costo total: %.2f",total);

		     break;

		     default:
		    	     printf("\nopcion no valida");
		     break;
		  }
		}while(opcion!=5);

		return 0;
}
