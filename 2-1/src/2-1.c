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
    int numero2;
    int numero3;
    int numero4;
    int numero5;
    int numero6;
    int numero7;
    float promedio;
    int total;


       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero1);
       if(numero1 >=0)
       {
    	  printf("Ingrese numeros validos: ");
    	  scanf("%d",&numero1);
       }
       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero2);
       if(numero2 >=0)
       {
          printf("Ingrese numeros validos: ");
          scanf("%d",&numero2);
       }
       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero3);
       if(numero3 >=0)
       {
          printf("Ingrese numeros validos: ");
          scanf("%d",&numero3);
       }
       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero4);
       if(numero4 >=0)
       {
          printf("Ingrese numeros validos: ");
          scanf("%d",&numero4);
       }
       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero5);
       if(numero5 >=0)
       {
          printf("Ingrese numeros validos: ");
          scanf("%d",&numero5);
       }
       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero6);
       if(numero6 >=0)
       {
          printf("Ingrese numeros validos: ");
          scanf("%d",&numero6);
       }
       printf("Ingrese numeros negativos: ");
       scanf("%d",&numero7);
       if(numero7 >=0)
       {
          printf("Ingrese numeros validos: ");
          scanf("%d",&numero7);
       }

          total=numero1+numero2+numero3+numero4+numero5+numero6+numero7;
          promedio=total/TAM;

          printf("el promedio es de: %.2f",promedio);

	return 0;
}
