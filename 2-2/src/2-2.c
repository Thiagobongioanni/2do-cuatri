/*
 ============================================================================
 Name        : 2-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ingresar números enteros, hasta que el usuario pida. Mostrar:
a) El promedio de los positivos y su mínimo.
b) El promedio de los negativos y su máximo.


 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	setbuf(stdout,NULL);

    char respuesta='s';
    int numero=0;
    //variables positivas
    int banderaP=1;
    int acumP=0;
    int minimoP=0;
    int contP=0;
    float promedioP;
    //variables negativas
    int banderaN=1;
    int acumN=0;
    int maximoN=0;
    int contN=0;
    float promedioN;


      while(respuesta=='s')
      {
    	    printf("ingresar numeros enteros: ");
    	    scanf("%d",&numero);


    	    printf("quiere ingresar mas numeros?: ");
    	    fflush(stdin);
    	    scanf("%c", &respuesta);

    	    if(banderaP==1 || numero > 0)
    	    {
    	       acumP=acumP+numero;
    	       contP++;
    	    }
    	    if(banderaP == 1 || (numero > 0 && numero < minimoP))
    	    {
    	       minimoP=numero;
    	       banderaP = 0;
    	    }
    	    if(banderaN==1 || numero < 0)
    	    {
    	       acumN=acumN+numero;
    	       contN++;
    	    }
    	    if(banderaN == 1 || (numero < 0 && numero > maximoN))
    	    {
    	       maximoN=numero;
    	       banderaN = 0;
    	    }
      }
      promedioP=acumP/contP;
      promedioN=acumN/contN;

      printf("el menor de los postivos es: %d y su promedio es: %.2f\n",minimoP,promedioP);
      printf("el mayor de los negativos es: %d y el promedio es: %.2f",maximoN,promedioN);


	return 0;
}
