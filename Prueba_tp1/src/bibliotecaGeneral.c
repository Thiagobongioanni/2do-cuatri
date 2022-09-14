/*
 * bibliotecaGeneral.c
 *
 *  Created on: 14 sep. 2022
 *      Author: bongi
 */
#include <stdio.h>
#include <stdlib.h>
#include "biblioteca_UTN.h"

int ingresoCostos(int opcionCostos,float* costoHospedaje,float* costoComida,float* costoTransporte)
{
	int retorno=-1;

	       do
		   {
			      printf("\n1)Ingresar costo de hospedaje"
			    	 	 "\n2)Ingresar costo de comida"
			    	 	 "\n3)Ingresar costo de transporte"
			    	     "\n4)Atras");

			      printf("\nIngrese una opcion: ");
			      scanf("%d", &opcionCostos);

			      switch(opcionCostos)
			      {
			    	     case 1:
			    	         utn_getNumeroFlotante(costoHospedaje,"ingrese el costo del hospedaje: ","cantidad invalida/n",0,20000000,2);
			    	     break;

			    	     case 2:
			    	         utn_getNumeroFlotante(costoComida,"ingrese el costo de la comida:  ","cantidad invalida/n",0,20000000,2);
			    	     break;

			    	     case 3:
			    	         utn_getNumeroFlotante(costoTransporte,"ingrese el costo del transporte: ","cantidad invalida/n",0,20000000,2);
			    	     break;
			      }
		   }while(opcionCostos!=4);



	return retorno;
}
