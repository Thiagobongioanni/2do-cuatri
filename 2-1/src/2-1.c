/*
 ============================================================================
 Name        : 2-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 2-1: Ingresar 7 números negativos distintos de 0 calcular y mostrar el
promedio de los números. Probar la aplicación con distintos valores.
Ejemplo 1: (-7)( - 5)( - 12) (- 1)( - 2)
Ejemplo 2: (-9)( - 15)( - 12) (- 1)( - 21)
 */

#include <stdio.h>
#include <stdlib.h>
#define TAM 7

int main(void)
{
	setbuf(stdout,NULL);

    int numero1;

    float promedio;
    int total;
    int i;


     for(i=0;i<TAM;i++)
     {
       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero1);
       if(numero1 >=0)
       {
    	  printf("Ingrese numeros validos: ");
    	  scanf("%d",&numero1);
       }

          total=total+numero1;
          promedio=total/TAM;
     }

          printf("el promedio es de: %.2f",promedio);

	return 0;
}
