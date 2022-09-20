/*
 ============================================================================
 Name        : Prueba_tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
#include "biblioteca_UTN.h"

#define TAM 6

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
      char confederacion[22];
      int i;

      for(i=0;i<22;i++)
      {

    	 strcpy(&confederacion[i],"");

      }

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


      float porcentajeAfc;
      float porcentajeCaf;
      float porcentajeConcacaf;
      float porcentajeConmebol;
      float porcentajeUefa;
      float porcentajeOfc;


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
		    	 if(posicion !=5 && totalJugadores < TAM)
		    	 {

		    		utn_getNumero(&numeroCamiseta,"ingrese el numero de camiseta: ","ingrese un numero valido",0,100,2);
		    		utn_getNombre(confederacion,"ingrese la confederacion: ",22);
		    		confederacion[0] = toupper(confederacion[0]);

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
		    		else
		    		{
		    			printf("no existe esa confederacion");
		    		}



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
                    	   if(totalJugadores<TAM)
                    	   {
                              contArqueros++;
                              totalJugadores=totalJugadores+contArqueros;
                    	   }
           		    	break;

                        case 2:
                            if(totalJugadores<TAM)
                            {
                               contDefensa++;
                               totalJugadores=totalJugadores+contDefensa;
                            }
           		   	    break;

                    	case 3:
                    	    if(totalJugadores<TAM)
                    	    {
                    	       contMedio++;
                    	       totalJugadores=totalJugadores+contMedio;
                    	    }
                    	break;
                        case 4:
                    	    if(totalJugadores<TAM)
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

                  porcentajeAfc=contAfc*100/TAM;
		    	  porcentajeCaf=contCaf*100/TAM;
		    	  porcentajeConcacaf=contConcacaf*100/TAM;
		    	  porcentajeConmebol=contConmebol*100/TAM;
		    	  porcentajeUefa=contUefa*100/TAM;
		    	  porcentajeOfc=contOfc*100/TAM;

                  total=costoHospedaje+costoComida+costoTransporte;
                  printf("calculos realizados");

		     break;


		     case 4:

		    	 printf("\ncosto total: %.2f",total);
		    	 printf("\ntotal jugadores es de: %d",totalJugadores);
		    	 printf("\njugadores de AFC: %.2f"
		    			"\njugadores de CAF: %.2f"
		    			"\njugadores de CONCACAF: %.2f"
		    			"\njugadores de CONMEBOL: %.2f"
		    			"\njugadores de UEFA: %.2f "
		    			"\njugadores de OFC %.2f: \n",porcentajeAfc,porcentajeCaf,porcentajeConcacaf,porcentajeConmebol,porcentajeUefa,porcentajeOfc);
		     break;

		     default:
		    	     printf("\nopcion no valida");
		     break;
		  }
		}while(opcion!=5);

		return 0;
}
