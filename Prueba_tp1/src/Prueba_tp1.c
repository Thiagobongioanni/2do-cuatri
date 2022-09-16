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
#include <string.h>
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

      int numeroCamiseta;
      int posicion;
      char confederacion[1];

      int contArqueros=0;
      int contDefensa=0;
      int contMedio=0;
      int contDelantero=0;
      int totalJugadores=0;

      int contAfc=0;
      int contCaf=0;
      int contConcacaf=0;
      int contConmebol=0;
      int contUefa=0;
      int contOfc=0;

		do
		{
	      printf("\n1)Ingresar costos de mantenimiento  \n(Costo de hospedaje:%.2f)\n(Costo de comida:%.2f)\n(Costo de transporte:%.2f)"
	    		  "\n2)Carga de jugadores \n(arqueros:%d)\n(defensores:%d)\n(mediocampistas:%d)\n(delanteros:%d)"
	    		  "\n3)Realizar todos los calculos"
	    		  "\n4)Informar resultados"
	    		  "\n5)Salir\n",costoHospedaje,costoComida,costoTransporte,contArqueros,contDefensa,contMedio,contDelantero);

		  printf("\ningrese una opcion: ");
		  scanf("%d", &opcion);

		  switch(opcion)
		  {
		     case 1:
		    	 ingresoCostos(opcionCostos,&costoHospedaje,&costoComida,&costoTransporte);
		     break;

		     case 2:
		    	 if(posicion !=5 && totalJugadores < 2)
		    	 {

		    		utn_getNumero(&numeroCamiseta,"ingrese el numero de camiseta: ","ingrese un numero valido",1,100,2);
		    		utn_getNombre(confederacion,"ingrese la confederacion: ",10);
		    		if(strcmp("Afc",confederacion)==0)
		    		{
		    			contAfc++;
		    		}
		    		else if(strcmp("Caf",confederacion)==0)
		    		{
		    			contCaf++;
		    		}
		    		else if(strcmp("Concacaf",confederacion)==0)
		    		{
		    			contConcacaf++;
		    		}
		    		else if(strcmp("Conmebol",confederacion)==0)
		    		{
		    			contConmebol++;
		    		}
		    		else if(strcmp("Uefa",confederacion)==0)
		    		{
		    			contUefa++;
		    		}
		    		else if(strcmp("Ofc",confederacion)==0)
		    		{
		    			contOfc++;
		    		}
		    		//strcmp()= Compara 2 cadenas de caracter incluyendo mayusculas y minusculas
		    		    //strcmp(cadena1, cadena2)- Devuelve un numero entero
		    		    //devuelve 0 = Si las cadenas son iguales
		    		    //devuelve >0 = Si cadena1 > cadena2
		    		    //devuelve <0 = Si cadena1 < cadena2
		    		    //stricmp = Compara dos cadenas despreciendo mayusculas y minusculas
                    printf("\n1)arquero"
                           "\n2)defensor"
                           "\n3)mediocampista"
                    	   "\n4)delantero"
                    	   "\n5)Regresar\n");

                    printf("ingrese la posicion: ");
                    scanf("%d",&posicion);

                    switch(posicion)
                    {
                    	case 1:
                    	   if(totalJugadores<2)
                    	   {
                              contArqueros++;
                              totalJugadores=totalJugadores+contArqueros;
                    	   }
           		    	break;

                        case 2:
                            if(totalJugadores<2)
                            {
                               contDefensa++;
                               totalJugadores=totalJugadores+contDefensa;
                            }
           		   	    break;

                    	case 3:
                    	    if(totalJugadores<2)
                    	    {
                    	       contMedio++;
                    	       totalJugadores=totalJugadores+contMedio;
                    	    }
                    	break;
                        case 4:
                    	    if(totalJugadores<2)
                    	    {
                    	       contDelantero++;
                    	       totalJugadores=totalJugadores+contDelantero;
                    	    }
                        break;
                    }
		    	 }
		    	 else
		    	 {
		    	       printf("NO HAY LUGAR");
		    	 }
		     break;

		     case 3:

                  total=costoHospedaje+costoComida+costoTransporte;
                  printf("calculos realizados");

		     break;


		     case 4:

		    	 printf("\ncosto total: %.2f",total);
		    	 printf("\ntotal jugadores es de: %d",totalJugadores);
		    	 printf("\njugadores de AFC: %d"
		    			"\njugadores de CAF: %d"
		    			"\njugadores de CONCACAF: %d"
		    			"\njugadores de CONMEBOL: %d"
		    			"\njugadores de UEFA: %d "
		    			"\njugadores de OFC %d: \n",contAfc,contCaf,contConcacaf,contConmebol,contUefa,contOfc);
		     break;

		     default:
		    	     printf("\nopcion no valida");
		     break;
		  }
		}while(opcion!=5);

		return 0;
}
