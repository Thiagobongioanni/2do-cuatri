/*
 ============================================================================
 Name        : 5-5.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 Ejercicio 5-5: Pedir 10 números enteros distintos de cero entre -50 y 75. La carga
deberá ser aleatoria (todos los elementos se inicializan en cero por default).
Determinar el promedio de los positivos. Desde el mayor de los negativos los
números negativos hasta llegar a cero.
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int main(void)
{
	setbuf(stdout,NULL);

	int array[TAM];
	int numero=0;
	int i;
	int posicion=0;
	int total=0;
	int cont=0;
	int promedio=0;

	        for(i=0;i<TAM;i++)
		    {
		        do
		        {
		    	   printf("ingrese numeros entre 75 y -50: ");
		    	   scanf("%d",&numero);
		    	   printf("ingrese la pocision entre 1 y 10: ");
		    	   scanf("%d",&posicion);

		    	   array[posicion-1]=numero;

		    	}while(array[i]>75 || array[i]<-50);
		    }
	        for(i=0;i<TAM;i++)
	        {
                if(array[i]>0)
                {
                   total=total+array[i];
                   cont++;
                }
                if(array[i]<0)
                {
                   printf("los negativos son: %d",array[i]);//de mayor  a menor y falta test
                }
	        }
	        promedio=total/cont;

	        printf("el promedio de los positivos es: %d",promedio);


	return 0;
}
